#include "UI_GameObject.h"


int usedID = 0;

void Optimum::GameTools::UIObject::AddText(Text& text)
{
	text.ID = usedID;
	usedID++;
	ui_elements.push_back(text);
}

void Optimum::GameTools::UIObject::AddButton(Button& button)
{
	button.ID = usedID;
	usedID++;
	ui_elements.push_back(button);
}

void Optimum::GameTools::UIObject::AddPanel(Panel& panel)
{
	panel.ID = usedID;
	usedID++;
	ui_elements.push_back(panel);
}

void Optimum::GameTools::UIObject::RemoveText(Text& text)
{
}

void Optimum::GameTools::UIObject::RemoveButton(Button& button)
{
}

void Optimum::GameTools::UIObject::RemovePanel(Panel& panel)
{
}

void Optimum::GameTools::UIObject::Draw()
{
	for (auto& ui_element : ui_elements)
	{
		//never gonna give you up
		//never gonna let you down
	}
}
