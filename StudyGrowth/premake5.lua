workspace "StudyGrowth"
    architecture "x64"
    configurations { "Debug", "Release" }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "StudyGrowth"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++20"
    location "StudyGrowth"

    targetdir ("./bin/".. outputdir.. "/%{prj.name}")
    objdir ("./bin-int/".. outputdir.. "/%{prj.name}") 

    files { 
      "./%{prj.name}/src/**.cpp", 
      "./%{prj.name}/src/**.h" 
    }

    includedirs { 
      "./vendor/raylib/include", 
      "./%{prj.name}/src" 
    }

    libdirs { 
      "./vendor/raylib/lib" 
    }

    links { 
      "raylib", 
      "opengl32", 
      "gdi32", 
      "user32", 
      "shell32", 
      "winmm"
    }

    staticruntime "On"
    systemversion "latest"

    filter "configurations:Debug"
      runtime "Debug"
      staticruntime "off"
      symbols "On"

    filter "configurations:Release"
      runtime "Release"
      staticruntime "off"
      optimize "On"
