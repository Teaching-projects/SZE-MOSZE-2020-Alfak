#pragma once
#include <string.h>
#include <iostream>
#include "character.h"


#ifndef GAME_H
#define GAME_H


class Game
{
public:
	//Konstruktor ami 2 karaktert v�r
	Game(Characters A, Characters B);

	//Ez a met�dus futtatja le a harcot a megadott 2 karakter k�z�tt. A megadott feladathoz k�pest minim�lis k�l�nbs�g, hogy ki lehet v�lasztani a kezd� karaktert 0 vagy 1 �s hogy ki�rjuk a k�r�ket. Mod 2 vel d�ntj�k el melyik k�r van(0 illetve p�ros sz�m vagy p�ratlan sz�m alapj�n)
	void Fight();

	//Priv�t adattagok
private:
	Characters A; //Az egik karakter
	Characters B; //A m�sik karakter.

};

#endif // !GAME_H