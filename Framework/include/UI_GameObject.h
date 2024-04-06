#pragma once
#include <string>
#include <vector>
namespace Optimum {
	namespace GameTools
	{
		struct UICOMP
		{

		};
		struct Text : public UICOMP
		{
			int ID;
			std::string name = "NewText";
		};
		struct Button : public UICOMP
		{
			int ID;
			std::string name = "NewButton";
		};
		struct Panel : public UICOMP
		{
			int ID;
			std::string name = "Panel";
		};
		struct UIObject
		{
		private:
			std::vector<UICOMP> ui_elements;
		public:
			void AddText(Text& text);
			void AddButton(Button& button);
			void AddPanel(Panel& panel);

			void RemoveText(Text& text);
			void RemoveButton(Button& button);
			void RemovePanel(Panel& panel);

			void Draw();
		};
	}
}