#include "../includes/Parsing.hpp"
#include "../includes/Cube.hpp"
#ifdef __BONUS__
    #include <GLFW/glfw3.h>
#endif

int main(int argc, char **argv) {

	try {
		Parsing parsing(argc, argv);
		const auto &actions = parsing.getActions();

		for (size_t i = 0; i < actions.size(); i++) {
			std::cout << "Step " << i << " = " << actions[i] << std::endl;
		}

		Cube cube({'Y', 'B', 'R', 'G', 'W', 'O'}, 9);

	} catch (const std::runtime_error& e) {
		std::cout << "Error : " << e.what() << std::endl;
		return (1);
	}

	#ifdef __BONUS__

	    GLFWwindow* window;

    if (!glfwInit()) {
        std::cout << "GLFW couldn't start" << std::endl;
        return -1;
    }

    window = glfwCreateWindow(640, 480, "Cubik Project", NULL, NULL);

    // Make the OpenGL context active
    glfwMakeContextCurrent(window);
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();

        // Minimal clear to display the window
        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // Swap buffers (REQUIRED to display anything)
        glfwSwapBuffers(window);
    }
    glfwTerminate();
	#endif
	return (0);
}
