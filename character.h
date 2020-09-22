#pragma once
#include <string>
#include <iostream>



//A harcol� karakterek oszt�lya
class Characters
{
public:
	//Characters(); //Megengedi, hogy param�ter n�lk�l is lehessen p�ld�nyos�tani


	//Param�teres konstruktor N�v, �let, �t�s er�ss�
	Characters(const std::string name, int Hp,const int Dpr);
	
	//Vissza adja a karakter nev�t
	const std::string& Getname();

	//Vissza adja a karakter �let�t
	const int& GetHp();

	//Vissza adja a karakter �t�s er�ss�g�t
	const int& GetDpr();

	//Ezzel lehet �ll�tani adott karakter �let�t, a harcn�l is ez h�v�dik meg. Ha az �j �let kevesebb mint 0 teh�t negat�v �rt�k akkor az �let 0 lesz am�gy pedig az �j �rt�ket kapja meg.
	void SetHp(Characters &X);
	
	//Egyszer� tostring met�tus amivel egyben ki lehet �rni a karakter �rt�keit �gy szebb lesz a k�d �s k�nnyebb �tl�tni.
	std::string toString();

//Priv�t adattagok
private:

	const std::string name; //A karakter neve
	int Hp;  //A karakter �lete
	const int Dpr; //A karakter �t�s er�ss�ge, Dpr = damage per round
};

