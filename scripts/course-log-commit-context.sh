#!/usr/bin/env bash
set -euo pipefail

commit="HEAD"
include_diff=0

while [[ $# -gt 0 ]]; do
	case "$1" in
		--commit)
			if [[ $# -lt 2 ]]; then
				echo "error: --commit requires a value" >&2
				exit 2
			fi
			commit="$2"
			shift 2
			;;
		--diff)
			include_diff=1
			shift
			;;
		-h|--help)
			cat <<'USAGE'
Usage: scripts/course-log-commit-context.sh [--commit REV] [--diff]

Prints commit context for updating ProjectLog.md with the unreal-course-log skill.

Options:
  --commit REV  Commit/revision to inspect. Defaults to HEAD.
  --diff        Include the patch, not just metadata and changed files.
USAGE
			exit 0
			;;
		*)
			echo "error: unknown argument: $1" >&2
			exit 2
			;;
	esac
done

repo_root="$(git rev-parse --show-toplevel)"
cd "$repo_root"

if ! git rev-parse --verify --quiet "${commit}^{commit}" >/dev/null; then
	echo "error: commit not found: $commit" >&2
	exit 1
fi

resolved_commit="$(git rev-parse --short "$commit")"

echo "== Course Log Commit Context =="
echo "Repository: $repo_root"
echo "Project log: $repo_root/ProjectLog.md"
echo "Commit: $resolved_commit"
echo

echo "== Commit Metadata and Stat =="
git show --no-ext-diff --format=fuller --stat --summary "$commit"
echo

echo "== Changed Files =="
git show --no-ext-diff --name-status --format= "$commit"
echo

if [[ "$include_diff" -eq 1 ]]; then
	echo "== Patch =="
	git show --no-ext-diff --format= --find-renames "$commit"
	echo
fi

cat <<'PROMPT'
== Suggested Codex Request ==
Use the unreal-course-log skill to update ProjectLog.md from this commit:
- match the commit to the relevant learning session
- add one brief Related commits note
- mark only supported progress checklist items
- update Status conservatively
PROMPT
