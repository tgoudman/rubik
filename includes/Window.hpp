#pragma once
#ifdef __BONUS__
#include <GL/glew.h>
#include <GLFW/glfw3.h>

GLFWwindow*     initWindow(int width, int height, const char *title);
void            closeWindow(GLFWwindow *window);

#endif