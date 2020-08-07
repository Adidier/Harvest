#pragma once
#include<string>
#include "Image.h"

class Item
{
private:
	float precio;
	std::string nombre;
	std::string rutaImagen;
	Imagen imagen;
public:
	float GetPrecio();
	std::string GetNombre();
	std::string GetRutaImagen();

	void SetPrecio(const float &p);
	void SetNombre(const std::string &n);
	void SetRutaImagen(const std::string &r);

};

