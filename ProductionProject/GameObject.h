#pragma once
#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include <iostream>

using namespace std;

class GameObject
{
public:
	GameObject();
	~GameObject();
	int GetX();
	void SetX(int);
private:
	int m_x;
};
#endif
