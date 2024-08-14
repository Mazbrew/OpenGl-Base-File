#include <iostream>
#include "glad.h"
#include <GLFW/glfw3.h>

int main(int, char **)
{
    GLFWwindow *window;

    if (!glfwInit())
    {
        return -1;
    }

    window = glfwCreateWindow(200, 200, "WINDOW", NULL, NULL);
    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        glfwTerminate();
        return -1;
    }

    glClearColor(0.25f, 0.25f, 0.25f, 1.0f);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
    }

    glfwTerminate();

    return 0;
}