#include "Item.h"

float Item::GetPrecio()
{
	return precio;
}
std::string Item::GetNombre()
{
	return nombre;
}

std::string Item::GetRutaImagen()
{
	return rutaImagen;
}


void Item::SetPrecio(const float &p)
{
	precio = p;
}

void Item::SetNombre(const std::string &n)
{
	nombre = n;
}

void Item::SetRutaImagen(const std::string &r)
{
	rutaImagen = r;
}
