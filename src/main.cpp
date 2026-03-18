#include "../includes/Parsing.hpp"
#ifdef __BONUS__
    #include "../includes/Window.hpp"
    #include "../includes/Renderer.hpp"
	#include "../includes/Shader.hpp" 
#endif

int main(int argc, char **argv)
{
    try {
        Parsing parsing(argc, argv);
        const auto &actions = parsing.getActions();

        for (size_t i = 0; i < actions.size(); i++)
            std::cout << "Step " << i << " = " << actions[i] << std::endl;

    } catch (const std::runtime_error& e) {
        std::cout << "Error : " << e.what() << std::endl;
        return (1);
    }

#ifdef __BONUS__
    const int       width = 640;
    const int       height = 480;

    GLFWwindow      *window = initWindow(width, height, "Cubik Project");
    if (!window)
        return -1;

    GLuint    		programID = loadShaders("shaders/vertex.glsl", "shaders/fragment.glsl");
    glm::mat4       mvp = initMVP(width, height);
    GLuint          vao = initVAO();
    GLuint          vertexbuffer;
    GLuint          colorbuffer;

    initVBO(vertexbuffer, colorbuffer);

    (void)vao;

    renderLoop(window, vertexbuffer, colorbuffer, programID, mvp);
    closeWindow(window);
#endif
    return (0);
}