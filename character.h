#pragma once

#include <string.h>
#include <iostream>
#ifndef CHARACTER_H
#define CHARACTER_H


//A harcol� karakterek oszt�lya
class Characters
{
public:
	Characters() {} //Megengedi, hogy param�ter n�lk�l is lehessen p�ld�nyos�tani


	//Param�teres konstruktor N�v, �let, �t�s er�ss�
	Characters(std::string name, int Hp, int Dpr);
	
	//Vissza adja a karakter nev�t
	std::string Getname();

	//Vissza adja a karakter �let�t
	int GetHp();

	//Vissza adja a karakter �t�s er�ss�g�t
	int GetDpr();

	//Ezzel lehet �ll�tani adott karakter �let�t, a harcn�l is ez h�v�dik meg. Ha az �j �let kevesebb mint 0 teh�t negat�v �rt�k akkor az �let 0 lesz am�gy pedig az �j �rt�ket kapja meg.
	void SetHp(int NewHp);
	
	//Egyszer� tostring met�tus amivel egyben ki lehet �rni a karakter �rt�keit �gy szebb lesz a k�d �s k�nnyebb �tl�tni.
	void toString();

//Priv�t adattagok
private:
	std::string name; //A karakter neve
	int Hp;  //A karakter �lete
	int Dpr; //A karakter �t�s er�ss�ge, Dpr = damage per round
};

#endif // !CHARACTER_H