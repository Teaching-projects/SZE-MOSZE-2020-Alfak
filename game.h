#pragma once
#include "character.h"





class Game
{
public:
	//Konstruktor ami 2 karaktert v�r
	Game(const Characters& A, const Characters& B);

	//Ez a met�dus futtatja le a harcot a megadott 2 karakter k�z�tt. A megadott feladathoz k�pest minim�lis k�l�nbs�g, hogy ki lehet v�lasztani a kezd� karaktert 0 vagy 1 �s hogy ki�rjuk a k�r�ket. Mod 2 vel d�ntj�k el melyik k�r van(0 illetve p�ros sz�m vagy p�ratlan sz�m alapj�n)
	void Fight(Characters &A,Characters &B);

	//Priv�t adattagok
private:
	const Characters A; //Az egik karakter
	const Characters B; //A m�sik karakter.

};

