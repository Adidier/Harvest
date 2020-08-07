#pragma once
#include "GameObject.h"
#include "Item.h"
#include <vector>
#include "Image.h"

class Player : public GameObject
{
private:
	Imagen imagen;
	int vida;
	int dinero;
	std::vector<Item> inventario;
	float amor;
	int energia;
public:
	Player();
	void SetItem(const Item &i);
	Imagen* GetImagen();
};

