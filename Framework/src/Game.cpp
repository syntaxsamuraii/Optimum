#include "Optimum.h"

using namespace Optimum;

GameTools::SceneManager manager;
GameTools::Scene gameScene, menuScene, dieScene;
GameTools::GameObject player;



void Optimum::Game::OnStart()
{
	BaseFeatures::OnCreate("Haha", Mathf::Vector2(500, 500));
	gameScene.Add(player);
}

void Optimum::Game::OnUpdate()
{
}

void Optimum::Game::OnEnd()
{
}