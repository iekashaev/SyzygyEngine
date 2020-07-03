#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "window.hpp"
#include "Events/events.hpp"

int main(void) {
    /* Create a windowed mode window and its OpenGL context */
    Window::initialize(640, 480, "Syzygy Engine");
    Events::initialize();
    
    /* Loop until the user closes the window */
    while (!Window::isShouldClose()) {
        /* Swap front and back buffers */
        Window::swapBuffers();

        /* Poll for and process events */
        Events::pollEvents();
    }
    
    Window::terminate();
    return 0;
}

