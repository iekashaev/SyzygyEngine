#include "window.hpp"


GLFWwindow* Window::window;

int Window::initialize(int width, int height, const char* title) {
    /* glfw: initialization and configuration */
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    /* Create a windowed mode window and its OpenGL context */
    Window::window = glfwCreateWindow(width, height, title, nullptr, nullptr);

    if(!Window::window) {
        glfwTerminate();
        return GLFW_CREARE_WINDOW_ERROR;
    }
    
    glfwMakeContextCurrent(Window::window);

    if(!glfwInit()) {
        return GLFW_INIT_ERROR;
    }
}

bool Window::isShouldClose() {
    return glfwWindowShouldClose(Window::window);
}

void Window::swapBuffers() {
    glfwSwapBuffers(Window::window);
}

void Window::terminate() {
    glfwTerminate();
}