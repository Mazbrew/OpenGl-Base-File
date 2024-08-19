#include "glad.h"
#include <GLFW/glfw3.h>

void viewportResizeCallback(GLFWwindow *window, int width, int height);

int main(){
    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow *window = glfwCreateWindow(1366, 768, "test", NULL, NULL);

    if(window == NULL){
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        glfwTerminate();
        return -1;
    }

    glfwSetFramebufferSizeCallback(window, viewportResizeCallback);

    while(!glfwWindowShouldClose(window)){
        glClearColor(1.0f, 0.5f, 0.2f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

void viewportResizeCallback(GLFWwindow *window, int width, int height){
    glViewport(0,0, width,height);
}