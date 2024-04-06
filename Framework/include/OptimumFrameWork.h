#pragma once
#include "vulkan/vulkan.h"
#include <glfw3.h>
#include <Framework/Mathf.h>
#include <string>
#include "BaseFeature.h"
namespace Optimum 
{


	struct Game
	{
		void OnStart();
		void OnUpdate();
		void OnEnd();
		
	};
	struct VkContext
	{
		VkInstance instance;
	};



	bool vk_init();
	bool ErrorCheck();
	void CleanUp();
	void WindowLoop(Optimum::Game& game);

}
