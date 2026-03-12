#ifdef __BONUS__
#include "../includes/Shader.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

static std::string  readFile(const char *path)
{
    std::ifstream file(path);
    if (!file.is_open()) {
        std::cout << "Cannot open : " << path << std::endl;
        return "";
    }
    std::stringstream ss;
    ss << file.rdbuf();
    return ss.str();
}

static GLuint   compileShader(const char *src, GLenum type)
{
    GLuint      id = glCreateShader(type);
    glShaderSource(id, 1, &src, NULL);
    glCompileShader(id);

    GLint result;
    glGetShaderiv(id, GL_COMPILE_STATUS, &result);
    if (result == GL_FALSE) {
        char log[512];
        glGetShaderInfoLog(id, 512, NULL, log);
        std::cout << "Shader error : " << log << std::endl;
    }
    return id;
}

GLuint  loadShaders(const char *vertexPath, const char *fragmentPath)
{
    std::string vertSrc    = readFile(vertexPath);
    std::string fragSrc    = readFile(fragmentPath);

    GLuint vertID   = compileShader(vertSrc.c_str(), GL_VERTEX_SHADER);
    GLuint fragID   = compileShader(fragSrc.c_str(), GL_FRAGMENT_SHADER);

    GLuint programID = glCreateProgram();
    glAttachShader(programID, vertID);
    glAttachShader(programID, fragID);
    glLinkProgram(programID);

    glDeleteShader(vertID);
    glDeleteShader(fragID);

    return programID;
}

#endif