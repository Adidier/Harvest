#include "Player.h"

Player::Player()
{
	imagen.CargarImagen("assets/PlayerWalk0.bmp");
	vida = 100;
	dinero = 0;
	inventario.clear();
	amor = 10;
	energia = 100;
}

void Player::SetItem(const Item& i)
{
	inventario.push_back(i);
}

Imagen* Player::GetImagen()
{
	return &imagen;
}

/*
void Player::Dibujar()
{

}
*/