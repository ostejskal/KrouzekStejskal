// PreteceniBufferu.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

/* soubor overflow.c */
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	char a[8] = "aaaaaaa";
	char b[8] = "bbbbbbb";
	printf(" Pred:\na = % s\nb = % s\n" , a, b);
	memcpy(b, " BBBBBBBBBBBB " , 12);
	printf(" Po:\na = % s\nb = % s\n " , a, b);
	return 0;
}



// Lukáš Lojda

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
