#include "Scene.h"

void Optimum::GameTools::Scene::Add(GameObject& gameObject)
{
	gameObjects.push_back(gameObject);
}

void Optimum::GameTools::Scene::Remove(GameObject& gameObject)
{
}

void Optimum::GameTools::Scene::Duplicate(GameObject& gameObject)
{
	GameObject duplicatedObj;
	duplicatedObj = gameObject;
}

void Optimum::GameTools::Scene::Draw()
{
}
