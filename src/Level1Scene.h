#pragma once
#ifndef __LEVEL1_SCENE__
#define __LEVEL1_SCENE__

#include "Scene.h"
#include "ship.h"
#include "Background.h"
#include "Bullet1.h"
#include "Enemy1.h"

class Level1Scene : public Scene
{
public:
	Level1Scene();
	~Level1Scene();

	// Scene LifeCycle Functions
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
	virtual void handleEvents() override;
	virtual void start() override;
private:
	glm::vec2 m_mousePosition;

	Background m_background;
	Bullet1* m_pBullet1;
	Enemy1* m_pEnemy1;
	Ship* m_pShip;

	/*std::vector<Enemy1*> m_pEnemy1;*/

	int r1, x;
	float enemyDist, enemyProximity;
};

#endif /* defined (__LEVEL1_SCENE__) */