#pragma once
#include "sdl.h"
#include "GameObject.h"
#include <string>

class Imagen : public GameObject
{
private:
	std::string rutaImagen;
	SDL_Surface* imagen;
public:
	void CargarImagen(const std::string &ruta);
	SDL_Surface* GetImagen();
	void Dibujar();
};

