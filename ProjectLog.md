# Project Log

Learning log for the Unreal Lab UI project, based on the course:
Unreal Engine 5 C++: Advanced Frontend UI Programming.

Use the learning sessions to record what was practiced, what was implemented in this repo, and what still needs follow-up. Keep the commit log as the technical history.

## Log Automation

Use these helper commands to keep the learning log current:

- `scripts/course-log-commit-context.sh` prints the latest commit context for AI-assisted course progress updates.
- `scripts/add-comment-to-log --session 1 --comment "Short note"` adds a dated note to a specific learning session.

Codex skill installed for commit analysis: `unreal-course-log`.

## Learning Sessions

### Session 01 - Course Setup and Project Baseline

**Status:** In progress

**Related commits**
- `7d62cf2` - Started the project log structure and simplified project documentation.

**Course focus**
Introduction, Common UI overview, C++ project setup, and project support workflow.

**Project work**
- Confirm the Unreal project opens correctly from `ownueui.uproject`.
- Review the generated C++ module under `Source/ownueui`.
- Confirm baseline config files exist under `Config`.
- Keep `README.md` and `ProjectLog.md` updated as the project documentation entry points.

**Progress checklist**
- [x] Confirm the Unreal project opens from `ownueui.uproject`.
- [x] Review the generated C++ module under `Source/ownueui`.
- [x] Confirm baseline config files exist under `Config`.
- [x] Keep `README.md` and `ProjectLog.md` as documentation entry points.

**What to learn**
- What Common UI is used for in a frontend menu project.
- How this project separates Unreal config, source code, content, and documentation.
- How to keep a learning log separate from a git commit log.

**Evidence to capture**
- Unreal Engine version used.
- Any setup issue and its fix.
- First successful editor launch or build.

**Log notes**
- 2026-05-20 - Configuration: added the `unreal-course-log` skill and helper scripts for commit analysis and manual learning-log comments.
- 2026-05-20 - Validation: confirmed `scripts/add-comment-to-log` can add manual dated learning-log notes.

**Next step**
Move into the Common UI foundation and create a reliable frontend test map.

### Session 02 - Common UI Foundation

**Status:** In progress

**Related commits**
- `35700d5` - Added the frontend test map and imported UI/course assets for scene setup.
- `63c2850` - Updated the main scene configuration for the project startup flow.

**Course focus**
Set up test map, frontend player controller, view target, primary layout widget, widget stack gameplay tags, and frontend UI subsystem.

**Project work**
- Use `Content/Maps/FrontEndTestMap.umap` as the frontend test map.
- Define the first version of the frontend flow: test map, player controller, camera/view target, and root UI layout.
- Plan gameplay tags for UI stacks such as menu, modal, and loading.
- Add `UWidget_PrimaryLayout` as the root layout class that can register and find Common UI widget stacks by gameplay tag.
- Document the current frontend possession/view-target flow and the primary layout stack registration methods.

**Progress checklist**
- [x] Set up `Content/Maps/FrontEndTestMap.umap`.
- [x] Create a frontend player controller.
- [x] Configure a frontend view target or camera.
- [x] Create the primary layout widget.
- [x] Define widget stack gameplay tags.
- [x] Add primary layout methods for registering and finding widget stacks by tag.
- [x] Add code comments for the new controller/layout methods and fields.
- [ ] Create the frontend UI subsystem.

**What to learn**
- Why Common UI uses activatable widgets and widget stacks.
- How gameplay tags can identify UI layers.
- How a subsystem can centralize UI navigation instead of spreading it across widgets.

**Problems / blockers**
- Confirm whether the Common UI plugin is enabled.
- Confirm whether the project needs extra module dependencies in `ownueui.Build.cs`.

**Log notes**
- 2026-05-21 - Implementation: added the primary layout C++ scaffold with gameplay-tag keyed widget stack registration and lookup.
- 2026-05-21 - Documentation: commented the current `OnPossess`, `FindWidgetStackByTag`, `RegisterWidgetStack`, and registered stack map behavior in code.
- 2026-05-21 - Summary: connected the frontend controller and primary layout work by documenting how possession sets up the current view flow and how the layout stores Common UI widget stacks for later navigation.

**Next step**
Add async widget pushing and a first "Press Any Key" screen.

### Session 03 - Async Widget Flow and Press Any Key Screen

**Status:** In progress

**Related commits**
- `414b4c7` - Started the Blueprint async action for pushing soft widget classes to tagged widget stacks.
- `11ca509` - Implemented the async soft-widget push action and added a test widget asset.
- `08ec0af` - Added the Blueprint template layout widget asset.

**Course focus**
Push soft widget to stack asynchronously, Blueprint async action, template layout, Press Any Key screen, animation, developer settings, and frontend function library.

**Project work**
- Create the root layout widget and initial screen flow.
- Add a lightweight path for pushing widgets from C++ and Blueprint.
- Use developer settings for configurable startup widgets where appropriate.

**Progress checklist**
- [x] Push soft widgets to a stack asynchronously.
- [x] Create the Blueprint async action.
- [x] Create the template layout.
- [ ] Create the Press Any Key screen.
- [ ] Add Press Any Key animation.
- [ ] Add developer settings for frontend widgets.
- [ ] Add a frontend function library.

**What to learn**
- Why soft class references help avoid loading every widget immediately.
- How async UI loading affects startup time and modularity.
- Where C++ should own navigation logic and where Blueprint should own presentation.

**Evidence to capture**
- Screenshot or note showing the first screen appears in the test map.
- Class names created for layout, subsystem, async action, and function library.

**Log notes**
- 2026-05-25 - `11ca509` - Implemented `UAsyncAction_PushSoftWidget` so Blueprint can push soft activatable widgets to tagged stacks asynchronously, with pre-push and after-push delegates plus optional focus handling.
- 2026-05-26 - `08ec0af` - Added `WBP_Template_Layout` as the Blueprint template layout asset for the frontend UI flow.

**Next step**
Build the main menu using Common UI buttons and input-aware behavior.

### Session 04 - Main Menu

**Status:** Not started

**Related commits**
- _None yet._

**Course focus**
Common button base, button widget Blueprint, main menu widget, input config, any-key handling, button styles, descriptions, bound action buttons, Common Input data, gamepad testing, confirmation screen, and quitting the game.

**Project work**
- Build a reusable button base for menu entries.
- Add contextual button description text.
- Add a confirmation screen pattern for actions like quit.
- Test mouse, keyboard, and gamepad navigation.

**Progress checklist**
- [ ] Create a Common button base.
- [ ] Create button widget Blueprints.
- [ ] Create the main menu widget.
- [ ] Configure Common Input data.
- [ ] Add button styles and descriptions.
- [ ] Add bound action buttons.
- [ ] Add a confirmation screen.
- [ ] Test mouse, keyboard, and gamepad navigation.

**What to learn**
- How Common UI supports multiple input types.
- How to separate visual button styling from button behavior.
- How modal screens should be pushed onto a modal stack.

**Problems / blockers**
- Track focus issues when switching between keyboard/mouse and gamepad.
- Track any missing icons or input prompts from `Content/Assets/ControllerIcons`.

**Next step**
Create the options menu shell with tabs and reusable data objects.

### Session 05 - Options Menu Structure

**Status:** Not started

**Related commits**
- _None yet._

**Course focus**
Options screen setup, custom bound action buttons, Common tab list widget, list data object, data object collection, options data registry, tab creation, tab selection, and gamepad tab testing.

**Project work**
- Create an options screen with top-level tabs.
- Define data objects for option categories.
- Use a registry or collection pattern to populate tabs without hardcoding every widget.

**Progress checklist**
- [ ] Create the options screen shell.
- [ ] Add custom bound action buttons.
- [ ] Add a Common tab list widget.
- [ ] Create list data objects.
- [ ] Create the options data registry.
- [ ] Generate tabs from data.
- [ ] Test tab selection with gamepad.

**What to learn**
- Why options menus scale better when driven by data objects.
- How tab widgets interact with list views and details panels.
- How to keep navigation consistent for gamepad users.

**Evidence to capture**
- List of planned tabs: Gameplay, Audio, Video, Controls.
- Notes on how each tab is generated.

**Next step**
Implement the Gameplay tab as the first data-driven options list.

### Session 06 - Gameplay Tab and Data-Driven List Entries

**Status:** Not started

**Related commits**
- _None yet._

**Course focus**
Common list view, list entry widget base, string data object, source items, entry mapping, generated widgets, dynamic options, data object initialization, settings interaction helper, applying settings, selection/hover state, details view, default values, reset logic, and gamepad modification.

**Project work**
- Build the base list entry widget.
- Add string option data for gameplay settings.
- Add details view content that updates from the selected option.
- Implement default/reset logic.

**Progress checklist**
- [ ] Create the Common list view.
- [ ] Create the base list entry widget.
- [ ] Create string option data objects.
- [ ] Map data objects to generated entry widgets.
- [ ] Add setting apply/default/reset logic.
- [ ] Add selection, hover, and details view behavior.
- [ ] Test gameplay setting changes with gamepad.

**What to learn**
- How Unreal list views recycle entry widgets.
- How data objects should notify widgets when values change.
- How Game User Settings can store persistent frontend choices.

**Problems / blockers**
- Watch for stale UI values after data changes.
- Confirm focus returns correctly after value changes with gamepad.

**Next step**
Add scalar and boolean setting types for the Audio tab.

### Session 07 - Audio Tab

**Status:** Not started

**Related commits**
- _None yet._

**Course focus**
Header list entries, recursive child data lookup, selectable/navigable checks, scalar entry widget, scalar data object, volume variables, slider values, scalar reset, music volume, sound FX volume challenge, string bool data object, HDR audio mode, and gamepad testing.

**Project work**
- Add headers for grouped audio settings.
- Implement scalar settings for volume controls.
- Add boolean/string-bool style settings where needed.
- Test slider behavior using mouse and gamepad.

**Progress checklist**
- [ ] Create header list entries.
- [ ] Support recursive child data lookup.
- [ ] Create scalar entry widgets.
- [ ] Create scalar data objects.
- [ ] Add overall, music, and sound FX volume settings.
- [ ] Add scalar reset behavior.
- [ ] Add HDR audio mode.
- [ ] Test audio settings with gamepad.

**What to learn**
- How list entries can represent both settings and non-selectable headers.
- How scalar values map to sliders and config values.
- How reset behavior differs between grouped settings and single settings.

**Evidence to capture**
- Notes for overall, music, and sound FX volume behavior.
- Any decision about min/max ranges and step sizes.

**Next step**
Implement video settings with dependencies and packaged-build behavior.

### Session 08 - Video Tab

**Status:** Not started

**Related commits**
- _None yet._

**Course focus**
Hardware benchmark, enum data object, packaged project behavior, resolution data, edit conditions, dependency data, display gamma, integer data, overall quality, resolution scale, global illumination, shadows, anti-aliasing, VSync, frame rate limit, string table, and gamepad testing.

**Project work**
- Add resolution, window mode, quality, gamma, VSync, and frame limit settings.
- Add edit conditions so dependent settings disable or update correctly.
- Record differences between editor testing and packaged build testing.

**Progress checklist**
- [ ] Add hardware benchmark support.
- [ ] Create enum data objects.
- [ ] Add resolution and display mode data.
- [ ] Add edit conditions and dependency data.
- [ ] Add display gamma and integer data.
- [ ] Add quality, resolution scale, GI, shadows, and anti-aliasing settings.
- [ ] Add VSync and frame rate limit settings.
- [ ] Test video settings in editor and packaged builds.

**What to learn**
- How Game User Settings exposes video configuration.
- Why some video settings behave differently in packaged builds.
- How dependency rules prevent invalid UI states.

**Problems / blockers**
- Track which settings require apply/restart.
- Track which settings are platform-specific.

**Next step**
Create the control remapping flow and key capture screen.

### Session 09 - Control Tab and Input Remapping

**Status:** Not started

**Related commits**
- _None yet._

**Course focus**
Input mapping registration, mappable key queries, filtering, key remap data object, key remap entry widget, button image updates, key icon lookup, remap button, remap screen, input preprocessor, desired key types, pressed key processing, notifying widgets/data objects, reset binding, gamepad input display, and gamepad testing.

**Project work**
- Create key remap list entries.
- Use controller icon assets for keyboard, mouse, PlayStation, and Xbox prompts.
- Build a modal key remap screen.
- Add reset behavior for modified bindings.

**Progress checklist**
- [ ] Register input mappings.
- [ ] Query and filter mappable keys.
- [ ] Create key remap data objects.
- [ ] Create key remap entry widgets.
- [ ] Add input icon lookup and button image updates.
- [ ] Create the remap screen.
- [ ] Add input preprocessor key capture.
- [ ] Add reset binding behavior.
- [ ] Test keyboard, mouse, and gamepad remapping.

**What to learn**
- How Enhanced Input exposes player-mappable actions.
- How input preprocessors can capture keys before normal gameplay handling.
- How to present input icons consistently across device types.

**Evidence to capture**
- Input actions tested.
- Device types tested.
- Any binding conflict or filtering rule.

**Next step**
Add startup and in-game loading screen support.

### Session 10 - Loading Screen and Credits Flow

**Status:** Not started

**Related commits**
- _None yet._

**Course focus**
Startup loading screen, loading screen settings, widget Blueprint, loading screen subsystem, tickable world object, preload screen checks, display/remove logic, visibility notifications, loading screen interface, credits screen, scrolling credits, camera switching by tag, and rich text customization.

**Project work**
- Define when the loading screen should appear.
- Add loading screen settings and a widget implementation.
- Add visibility notification hooks.
- Prototype a credits screen if needed for the frontend flow.

**Progress checklist**
- [ ] Create startup loading screen settings.
- [ ] Create the loading screen widget Blueprint.
- [ ] Create the loading screen subsystem.
- [ ] Add preload screen checks.
- [ ] Add display/remove logic.
- [ ] Add visibility notifications.
- [ ] Create the credits screen.
- [ ] Add scrolling credits and rich text customization.
- [ ] Add camera switching by tag.

**What to learn**
- How loading screens differ from normal menu widgets.
- How to avoid showing duplicate loading screens.
- How camera tags can support frontend presentation.

**Problems / blockers**
- Track differences between editor startup and packaged startup.
- Track any race conditions around loading screen removal.

**Next step**
Polish the UI flow and record final course takeaways.

### Session 11 - Polish, Wrap-Up, and Personal Notes

**Status:** Not started

**Related commits**
- _None yet._

**Course focus**
Animated UI background, final recommendations, and next C++ learning path.

**Project work**
- Review the full flow from startup to main menu, options, controls, loading, and credits.
- Record technical debt and cleanup tasks.
- Update screenshots, README notes, and this learning log.

**Progress checklist**
- [ ] Add or review the animated UI background.
- [ ] Run through the full frontend flow.
- [ ] Record technical debt.
- [ ] Capture final screenshots or notes.
- [ ] Update README and learning log.
- [ ] Write final course reflection.

**What to learn**
- Which systems are reusable in future Unreal projects.
- Which parts should remain C++ and which parts work better in Blueprint.
- Which UI architecture decisions made the project easier or harder to extend.

**Final reflection**
- Most useful concept:
- Hardest concept:
- Best reusable pattern:
- Next project improvement:

## Commit Log

Concise per-commit log, oldest to newest. Generated from git history.

- ed1c8af - 2026-05-19 09:52:19 -0500 - Leonardo Quinones - Initial commit
- 31b72b5 - 2026-05-19 09:53:26 -0500 - Leonardo Quinones - Add project title to README
- 9dc02c8 - 2026-05-19 10:30:15 -0500 - lquinones - Project files
- 79eefda - 2026-05-19 12:56:57 -0500 - Henry Quinones Espinel - AssetFiles
- 35700d5 - 2026-05-19 17:50:37 -0500 - lquinones - Creating the map scene
- 251cd98 - 2026-05-19 17:53:43 -0500 - lquinones - Dleting the Assets Folder
- 63c2850 - 2026-05-19 17:56:37 -0500 - lquinones - modifying the main scene
- cf9cf4e - 2026-05-20 11:40:49 -0500 - lquinones - Add README with per-commit changelog
- 7d62cf2 - 2026-05-20 - lquinones - Simplify README and add ProjectLog with brief per-commit entries
- `4b9aff3` - Added frontend widget stack registration updates and a debug helper that prints registered stack tags during runtime.
- `ea80a1c` - Added the frontend UI subsystem, activatable widget base, and soft-widget stack push path with async action scaffolding and project/config wiring.
