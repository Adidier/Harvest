#pragma once
class GameObject
{
protected:
	int posicionX;
	int posicionY;
	int alto;
	int ancho;

public:
	GameObject();
	~GameObject();
	
	int GetPosicionX();
	int GetPosicionY();
	int GetAlto();
	int GetAncho();

	void SetPosicionX(int posx);
	void SetPosicionY(int posy);
	void SetAlto(int posalto);
	void SetAncho(int posancho);

};

