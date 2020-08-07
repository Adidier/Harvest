#include "Image.h"


void Imagen::CargarImagen(const std::string& ruta)
{
	imagen = SDL_LoadBMP(ruta.c_str());
	if (imagen == NULL)
	{
		printf("Unable to load image %s! SDL Error: %s\n", ruta.c_str(), SDL_GetError());
	}
}

SDL_Surface* Imagen::GetImagen()
{
	return imagen;
}