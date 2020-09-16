

#include <iostream>
#include "Classes.h" //A classes azaz az oszt�lyokat tartalmaz� fejl�c, most csak egy van mert nincs sok oszt�ly, ha sok lesz akkor t�bb header-be lesz bontva
#include <string>

//Alf�k megold�sa
//alternat�v fut�si lehet�s�gekhez bent hagytuk a programban kommentk�nt a tesztel�sn�l haszn�lt dolgokat, sose lehet tudni, ha majd nem kell a v�gs� verzi�n�l ebb�l semmi akkor kivessz�k addig j� lehet m�g a tesztekhez.


int main(int argc, char* argv[])
{
    

    // A k�t p�lda karakter l�trehoz�sa az oszt�lyban megadott konstruktor alapj�n Param�terek: N�v, �let, �t�s er�
    //Characters A("Maple",150,10);
    //Characters B("Sally",45,30);

    //argumentum ellen�rz�s. Ha valaki megadja az �sszes argumentumot az ind�t�sn�l akkor ezek sz�ma 7(a program neve+2*3 param�ter: n�v,hp,dpr)
    if (argc < 7) {
        std::cout << "Please give all of the arguments when you start the programe It will work. Or change the comments in the programe if you are a pussycat, it works just as well. #the programmer " << std::endl; //ha valaki nem adn� meg akkor a program nem hal meg.
        return 1;                                                                                                                                                                                     //vicces �zenet ami jelzi a hib�t, ha kell a kommentek kiszed�s�vel lehet m�s fut�st is ind�tani
    }
    //Ha megvan mind a 7 adat akkor l�trej�nnek a karakterek �s fut a program ahogy kell, a stoi az�rt kell mert arz argv t�mb alapvet�en karaktert�mb �s kell t�pus konvert�l�s a m�k�d�shez.
    else {
        Characters A((std::string)argv[1], std::stoi(argv[2]), std::stoi(argv[3]));
        Characters B((std::string)argv[4], std::stoi(argv[5]), std::stoi(argv[6]));
        Game NewGame(A, B); //A j�t�k oszt�ly p�ld�nya "elind�t" egy �j j�t�kot A �s B karakterrel. A karakterek sorrendje nem fontos mert az alap feladatot kieg�sz�tett�k azzal, hogy a fut�sn�l v�lasztani lehet hogy melyik karakter kezdje az �t�st.
        NewGame.Fight();    //Elind�tja a j�t�k Fight met�dus�t( A �s B karakter felv�tolt �t�se)
    }
    
    /*Characters A;
    Characters B;
    std::cout << "create player 1\n";
    A.Create();
    std::cout << "create player 2\n";                       //   Tesztel�sn�l haszn�lt karakter l�trehoz�shoz sz�ks�ges k�dr�sz. Ha nem a p�lda adatokat haszn�ljuk hanem saj�t karaktereket akarunk l�trehozni. Nem a feladat szoros r�sze csak a jobb tesztel�s miatt kellett.     
    B.Create();
    std::cout << "player 1: ";
    A.toString();
    std::cout << "player 2: ";
    B.toString();*/
  /*  Game NewGame(A, B); //A j�t�k oszt�ly p�ld�nya "elind�t" egy �j j�t�kot A �s B karakterrel. A karakterek sorrendje nem fontos mert az alap feladatot kieg�sz�tett�k azzal, hogy a fut�sn�l v�lasztani lehet hogy melyik karakter kezdje az �t�st.
    NewGame.Fight();    //Elind�tja a j�t�k Fight met�dus�t( A �s B karakter felv�tolt �t�se)*/
    
    return 0;
}



