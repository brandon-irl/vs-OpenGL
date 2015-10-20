#pragma once
#include <iostream>

// GLEW
#define GLEW_STATIC
#include <GL/glew.h>

// GLFW
#include <GLFW/glfw3.h>

// Window dimensions
const GLuint WIDTH = 800, HEIGHT = 600;

//Functions
int main();
void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);
