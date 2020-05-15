
1. Windows 作業系統下載 `SDL2-devel-2.0.12-VC.zip` 並解壓縮到 `/sln/lib/SDL2` 資料夾，資料夾結構如下：

```
D:.
├───sln
    ├───lib
    │   └───SDL2
    │       ├───docs
    │       ├───include
    │       └───lib
    │           ├───x64
    │           └───x86
    ├───Project1
    │   ├───CMakeLists.txt
    │   └───main.cpp
    ├───CMakeLists.txt
    └───CMakeSettings.json
```

2. 建立`/sln/lib/SDL2/sdl2-config.cmake`

`sdl2-config.cmake`
```
# Support both 32 and 64 bit builds
if (${CMAKE_SIZEOF_VOID_P} MATCHES 8)
    set(SDL2_LIB_DIRS "${CMAKE_CURRENT_LIST_DIR}/lib/x64")
else ()
    set(SDL2_LIB_DIRS "${CMAKE_CURRENT_LIST_DIR}/lib/x86")
endif ()

set(SDL2_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/include")
set(SDL2_LIBRARIES "${SDL2_LIB_DIRS}/SDL2.lib;${SDL2_LIB_DIRS}/SDL2main.lib")
string(STRIP "${SDL2_LIBRARIES}" SDL2_LIBRARIES)
```

3. 設定 `/Project/CMakeSettings.json` 的 `//configurations/variables`，修改 SDL2_DIR 的路徑，例如：
```
{
  "configurations": [
    {
      "variables": [
        {
          "name": "SDL2_DIR",
          "value": "D:/Project/lib/SDL2",
          "type": "PATH"
        }
      ]
    },
    ...
}
```