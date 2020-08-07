#include "GameObject.h"
#include <iostream>

int GameObject::GetPosicionX()
{
	return posicionX;
}


void GameObject::SetPosicionX(int posx)
{
	if (posx >= 0)
	{
		posicionX = posx;
	}
	else
	{
		std::cout << "fuera de pantalla";
	}
}

void GameObject::SetPosicionY(int posy)
{
	if (posy >= 0)
	{
		posicionY = posy;
	}
	else
	{
		std::cout << "fuera de pantalla";
	}
}

int GameObject::GetAlto()
{
	return alto; 
}
int GameObject::GetAncho()
{
	return ancho; 
}



int GameObject::GetPosicionY()
{
	return posicionY; 
}

void GameObject::SetAlto(int setalto)
{
	alto = setalto;
}

void GameObject::SetAncho(int setancho)
{
	ancho = setancho;
}

GameObject::GameObject()
{
	posicionX = 0;
	posicionY = 0;
	alto = 0;
	ancho = 0;
}

GameObject::~GameObject()
{

}