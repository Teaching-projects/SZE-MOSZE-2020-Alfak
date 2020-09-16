

#include <string.h>
#include <iostream>
// A met�dusokat lehetne k�l�n file-ba rakni de szerintem �gy jobban lehet l�tni, hogy melyik oszt�ly mit tud. Esetleg az oszt�lyokat k�l�n header-be lehet rakni a jobb �tl�that�s�ghoz.
//A harcol� karakterek oszt�lya
class Characters
{
public:
	Characters() {	//Megengedi, hogy param�ter n�lk�l is lehessen p�ld�nyos�tani

	}
	//Param�teres konstruktor N�v, �let, �t�s er�ss�
	Characters(std::string name, int Hp, int Dpr) {
		this->name = name;
		this->Dpr = Dpr;
		this->Hp = Hp;
	}
	//Tesztel�shez l�trehozott karakter kre�l� f�gv�ny aminek a seg�ts�g�vel fut�s k�zben tudjuk megadni a karakterek �rt�keit. Az alapfeladathoz nem sz�ks�ges 
	void Create() {
		std::string name;
		int Hp;
		int Dpr;
		std::cout << "Name: ";
		std::cin >> name;
		std::cout << "HP: ";
		std::cin >> Hp;
		std::cout << "DPR: ";
		std::cin >> Dpr;
		std::cout << "\n";
		this->name = name;
		this->Dpr = Dpr;
		this->Hp = Hp;


	}
	//Vissza adja a karakter nev�t
	std::string Getname() {
		return name;
	}
	//Vissza adja a karakter �let�t
	int GetHp() {
		return Hp;
	}
	//Vissza adja a karakter �t�s er�ss�g�t
	int GetDpr() {
		return Dpr;
	}
	//Ezzel lehet �ll�tani adott karakter �let�t, a harcn�l is ez h�v�dik meg. Ha az �j �let kevesebb mint 0 teh�t negat�v �rt�k akkor az �let 0 lesz am�gy pedig az �j �rt�ket kapja meg.
	void SetHp(int NewHp) {
		if (NewHp < 0) {
			Hp = 0;
		}
		else {
			Hp = NewHp;
		}

	}
	//Egyszer� tostring met�tus amivel egyben ki lehet �rni a karakter �rt�keit �gy szebb lesz a k�d �s k�nnyebb �tl�tni.
	void toString() {
		std::cout << "Name: " << Getname() << " HP: " << GetHp() << " DPR: " << GetDpr() << std::endl;
	}

	//Priv�t adattagok
private:
	std::string name; //A karakter neve
	int Hp;  //A karakter �lete
	int Dpr; //A karakter �t�s er�ss�ge, Dpr = damage per round
};

// A j�t�k oszt�ly 
class Game
{
public:
	//Konstruktor ami 2 karaktert v�r
	Game(Characters A, Characters B) {
		this->A = A;
		this->B = B;
	}
	//Ez a met�dus futtatja le a harcot a megadott 2 karakter k�z�tt. A megadott feladathoz k�pest minim�lis k�l�nbs�g, hogy ki lehet v�lasztani a kezd� karaktert 0 vagy 1 �s hogy ki�rjuk a k�r�ket. Mod 2 vel d�ntj�k el melyik k�r van(0 illetve p�ros sz�m vagy p�ratlan sz�m alapj�n)
	void Fight() {
		//Elind�l a j�t�k
		std::cout << "Game start" << "\n" << std::endl;
		//ez lesz a sz�mol�
		int i;
		//Ki �rja a kezd� �rt�keit a karaktereknek
		A.toString();
		B.toString();
		//Itt lehet v�lasztani melyik karakter legyen az els� aki t�mad, Felt�telezz�k, hogy j� bementet kapunk am�gy input ellen�rz�s k�ne. Hab�r itt csak 2 �rt�k van de az i egyben k�r sz�mol� is ami el�g nagy lehet ez�rt int a t�pusa.
		std::cout << "Choose starter. |0 is " << A.Getname() << "|  |1 is " << B.Getname() << "|" << std::endl;
		std::cin >> i;
		//Itt megy az oda vissza pofozgat�s am�g az egyik �lete el nem �ri a 0-�t
		while (A.GetHp() > 0 && B.GetHp() > 0)
		{
			if (i % 2 == 0) {
				std::cout << "Round: " << i + 1 << " " << A.Getname() << " -> " << B.Getname() << std::endl;
				B.SetHp(B.GetHp() - A.GetDpr());
				A.toString();
				B.toString();
				std::cout << "\n" << std::endl;
			}
			else {
				std::cout << "Round: " << i + 1 << " " << B.Getname() << " -> " << A.Getname() << std::endl;
				A.SetHp(A.GetHp() - B.GetDpr());
				A.toString();
				B.toString();
				std::cout << "\n" << std::endl;
			}

			i++;


		}
		//Megn�zi hogy ki vesztett �s ki�rja, lehetne k�l�n met�dus is, lehet k�s�bb az is lesz ha a feladathoz kell.
		if (A.GetHp() == 0) {
			std::cout << A.Getname() << " DIED " << B.Getname() << " WINS\n" << std::endl;
		}
		else {
			std::cout << B.Getname() << " DIED " << A.Getname() << " WINS\n" << std::endl;
		}
	}




	//Priv�t adattagok
private:
	Characters A; //Az egik karakter
	Characters B; //A m�sik karakter.

};







