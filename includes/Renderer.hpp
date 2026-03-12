#pragma once
#ifdef __BONUS__
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/transform.hpp>

GLuint          initVAO(void);
GLuint          initVBO(void);
glm::mat4       initMVP(int width, int height);
void    		renderLoop(GLFWwindow *window, GLuint vertexbuffer, GLuint programID, glm::mat4 mvp);

#endif