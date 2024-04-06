#include "OptimumFrameWork.h"
#include "glad/glad.h"



int main() {
    Optimum::Game optimum;
	Optimum::VkContext vkcontext{};

	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);


	optimum.OnStart();

	Optimum::ErrorCheck();


	Optimum::WindowLoop(optimum);

	Optimum::CleanUp();

	optimum.OnEnd();
	return 0;
}
