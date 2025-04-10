#include <iostream>
#include <GLFW/glfw3.h>

int main() {
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    // Créer une fenêtre
    GLFWwindow* window = glfwCreateWindow(800, 600, "fenetre", nullptr, nullptr);
    if (!window) {
        std::cerr << "Échec de la création de la fenêtre GLFW" << std::endl;
        glfwTerminate();
        return -1;
    }

    // Définir la fenêtre comme contexte OpenGL actuel
    glfwMakeContextCurrent(window);

    // Boucle principale
    while (!glfwWindowShouldClose(window)) {
        // Effacer l'écran
        glClear(GL_COLOR_BUFFER_BIT);

        // Dessiner ici

        // Échanger les buffers
        glfwSwapBuffers(window);

        // Traiter les événements
        glfwPollEvents();
    }

    // Nettoyer les ressources
    glfwTerminate();
    return 0;
}

