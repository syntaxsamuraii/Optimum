#pragma once
#include <GameObject.h>
#include <vector>
#include <UI_GameObject.h>
namespace Optimum {
	namespace GameTools
	{
		struct Scene
		{
		private:
			std::vector<GameObject> gameObjects;
		public:
			int ID;
			std::string name = "NewScene";
			void Add(GameObject& gameObject);
			void AddText(Text& text);
			void AddButton(Button& button);
			void Remove(GameObject& gameObject);
			void Duplicate(GameObject& gameObject);
			void Draw();
		};
	}
}