cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(opengl_begin)

set(MY_PROJECT_ROOT "D:/C Projets/opengl_begin")

# Définir le standard C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ajouter l'exécutable et les fichiers sources
add_executable(opengl_begin
        "${MY_PROJECT_ROOT}/src/main.cpp"
)

# Inclure les fichiers d'en-tête
target_include_directories(opengl_begin PRIVATE
        "${MY_PROJECT_ROOT}/include"
)

# Ajouter les bibliothèques
target_link_directories(opengl_begin PRIVATE
        "${MY_PROJECT_ROOT}/lib"
)

# Lier les bibliothèques
target_link_libraries(opengl_begin PRIVATE
        glfw3
        glad
        glm
        opengl32 # Pour Windows

)