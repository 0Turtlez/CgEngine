cmake_minimum_required(VERSION 3.10)
project(LavenderEngine)

set(CMAKE_CXX_STANDARD 17)

# Point to Homebrew's location on Apple Silicon
include_directories(/opt/homebrew/include)
link_directories(/opt/homebrew/lib)

# Include personal libaray
include_directories(engine)
include_directories(include/glad/include)

# Find GLFW and OpenGL
find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

# Define Executable
add_executable(lavender main.cpp
        include/glad/src/glad.c
        engine/scene/Scene/scene.cpp
        engine/scene/Scene/scene.h
        engine/core/Object/Object.cpp
        engine/core/Object/Object.h
        engine/Rendering/Renderer/Renderer.cpp
        engine/Rendering/Renderer/Renderer.h
        engine/Rendering/Camera/Camera.cpp
        engine/Rendering/Camera/Camera.h
        engine/input/keyboard/Keyboard.cpp
        engine/input/keyboard/Keyboard.h
        engine/math/MathUtils/MathUtils.cpp
        engine/math/MathUtils/MathUtils.h
        engine/math/Vector/Vector.cpp
        engine/math/Vector/Vector.h
        engine/math/Transform/Transform.cpp
        engine/math/Transform/Transform.h
        engine/math/Random/Random.cpp
        engine/math/Random/Random.h
        engine/math/Color/Color.cpp
        engine/math/Color/Color.h
        engine/math/Matrix/Matrix.cpp
        engine/math/Matrix/Matrix.h
)

# Link Frameworks and Libraries to the 'lavender' target
find_library(OPENGL_LIB OpenGL REQUIRED)
find_library(GLUT_LIB GLUT REQUIRED)
target_link_libraries(lavender
        glfw
        "${OPENGL_LIB}"
)