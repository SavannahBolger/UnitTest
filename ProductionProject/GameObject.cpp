#include "GameObject.h"

GameObject::GameObject()
{
}

GameObject::~GameObject()
{
}

int GameObject::GetX()
{
	return m_x;
}

void GameObject::SetX(int x)
{
	m_x = x;
}
