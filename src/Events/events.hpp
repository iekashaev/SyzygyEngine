#pragma once
#include <GLFW/glfw3.h>
#include "../window.hpp"
#include <iostream>


class Events {
public:
    static void pollEvents();
    static int initialize();
};

