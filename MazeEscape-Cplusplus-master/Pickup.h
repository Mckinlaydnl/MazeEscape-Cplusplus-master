#pragma once

// Project Includes
#include "SpriteObject.h"
#include "Player.h"

class Pickup : public SpriteObject
{
public:

	Pickup();

	// Overriding Methods
	void Collide(GameObject& _collider);

private:

	void OnPickup(Player& _player);

};