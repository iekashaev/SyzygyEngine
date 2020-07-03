#include "events.hpp"


static void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods) {
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GLFW_TRUE);
}

static void mouseCallback(GLFWwindow* window, int button, int action, int mods) {

}

void Events::pollEvents() {
    glfwPollEvents();
}


int Events::initialize() {
    glfwSetKeyCallback(Window::window, keyCallback);
    glfwSetMouseButtonCallback(Window::window, mouseCallback);

    return 0;
}