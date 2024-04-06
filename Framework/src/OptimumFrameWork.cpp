#include "OptimumFrameWork.h"
#include <iostream>

Optimum::VkContext vkcontext;
bool running;
Optimum::Game optimum;
GLFWwindow* window;
bool Optimum::vk_init()
{
    VkApplicationInfo appInfo = {};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "Game";
    appInfo.pEngineName = "Optimum";

    VkInstanceCreateInfo instanceInfo = {};
    instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceInfo.pApplicationInfo = &appInfo;

    VkResult result = vkCreateInstance(&instanceInfo, 0, &vkcontext.instance);

    if (result == VK_SUCCESS)
    {
        return true;
    }
}

bool Optimum::ErrorCheck()
{
    if (&window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    if (!Optimum::vk_init())
    {
        return -1;
    }
    if (Optimum::vk_init() && &window != NULL)
    {
        running = true;
        if (running = true)
        {
            std::cout << "Vulkan initalized and Window active" << std::endl;
        }
    }
}

void Optimum::CleanUp()
{
    glfwDestroyWindow(window);
    glfwTerminate();
    running = false;
}

void Optimum::WindowLoop(Optimum::Game& game)
{
    while (!glfwWindowShouldClose(window))
    {
        game.OnUpdate();
        glfwPollEvents();
    }
}
void Optimum::BaseFeatures::OnCreate(const std::string& name, Mathf::Vector2 size)
{
    window = glfwCreateWindow(size.getX(), size.getY(), name.c_str(), NULL, NULL);

}
