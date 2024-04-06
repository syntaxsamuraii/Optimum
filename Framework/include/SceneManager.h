#pragma once
#include <vector>
#include <Scene.h>

namespace Optimum {
	namespace GameTools
	{
		struct SceneManager
		{
		private:
			std::vector<Scene> scenes;
		public:
			void AddScene(Scene& scene);
			void DeleteScene(Scene& scene);
			void SwapScene(int ID);
		};
	}
}