# RealEngine

**RealEngine** is a custom, low-level C++ game engine built entirely from scratch.  
It is designed for developers who want to get close to the metal and build games without editors or scripting layers.

### 🚧 Status
This is a preview version (0.1).  
There is no level editor, no scripting API, and no built-in rendering abstraction layer.  
All game logic is written directly in C++ using the core engine source.

### 🧱 Features (so far)
- OpenGL rendering via `glViewport` (no framebuffer abstraction yet)
- Dear ImGui support for debugging
- Early core systems architecture

### 🔧 Building
Open `RealEngine.sln` in Visual Studio.  
Make sure `glad` and `imgui` are included.

### 💸 License
RealEngine is free to use.  
If your game earns over **$100,000 in revenue**, you owe **2% of the amount above $100k** to AGS Software.  
Crowdfunding (Kickstarter, Patreon) is not counted as revenue.  
Royalties are paid monthly.

The license of each version is fixed — updates to the license only apply to future releases.

See `LICENSE.txt` for details.
