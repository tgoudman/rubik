#ifdef __BONUS__
#include "../includes/Window.hpp"
#include <iostream>

GLFWwindow  *initWindow(int width, int height, const char *title)
{
    if (!glfwInit()) {
        std::cout << "GLFW couldn't start" << std::endl;
        return NULL;
    }

    GLFWwindow *window = glfwCreateWindow(width, height, title, NULL, NULL);
    if (!window) {
        glfwTerminate();
        return NULL;
    }

    glfwMakeContextCurrent(window);

    glewExperimental = GL_TRUE;
    if (glewInit() != GLEW_OK) {
        std::cout << "GLEW couldn't start" << std::endl;
        return NULL;
    }
    return window;
}

void    closeWindow(GLFWwindow *window)
{
    (void)window;
    glfwTerminate();
}

#endif