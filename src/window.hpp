#pragma once
#include <GLFW/glfw3.h>

enum Errors {
    GLFW_INIT_ERROR = -1,
    GLFW_CREARE_WINDOW_ERROR = -2,
};


class Window {
public:
    static GLFWwindow* window;
    static int initialize(int width, int height, const char* title);
    static void terminate();
    static bool isShouldClose();
    static void swapBuffers();
};