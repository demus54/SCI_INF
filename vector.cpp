#include "vector.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


vector::vector()
{
	rozmiar = 10;
	tablica = new int[rozmiar];
	for (int i = 0; i < rozmiar; i++)
	{
		cin >> tablica[i];
	}
}




vector::vector(int rozmiar)
{
	if (rozmiar < 0)
	{
		cout << "zly rozmiar" << endl;
	}
	
	else
	{
		this->rozmiar = rozmiar;
		tablica = new int[rozmiar];
		for (int i = 0; i < rozmiar; i++)
		{
			cin >> tablica[i];
		}
	}
}






vector::vector(int min, int max, int rozmiar)
{
	if (rozmiar < 0)
	{
		cout << "zly rozmiar" << endl;
	}
	else
	{
		srand(time(NULL));
		this->rozmiar = rozmiar;
		int zakres = max - min;
		tablica = new int[rozmiar];
		for (int i = 0; i < rozmiar; i++)
		{
			tablica[i] = rand() % zakres + min;
		}
	}

}


vector::~vector()
{
	delete[] tablica;
}






void vector::wypisz()
{
	cout << "=================================\n";
	cout << "ten obiekt ma " << rozmiar << " elementow\n";
	cout << "=================================\n";
	cout << "lista elementow:\n";
	for (int i = 0; i < rozmiar; i++)
	{
		cout << "element[" << i << "] ma wartosc " << tablica[i] << endl;
	}

}





void vector::dodaj(int element)
{
	rozmiar++;
	int* tempTab = new int[rozmiar];
	for (int i = 0; i < rozmiar - 1; i++)
	{
		tempTab[i] = tablica[i];
	}
	tempTab[rozmiar - 1] = element;
	delete[] tablica;
	tablica = tempTab;
}






void vector::wstaw(int element, int miejsce)
{
	if (element >= 0 && element < rozmiar)
	{
		int* tempTab = new int[rozmiar + 1];
		for (int i = 0; i < miejsce; i++)
		{
			tempTab[i] = tablica[i];
		}
		tempTab[miejsce] = element;
		for (int i = miejsce; i < rozmiar; i++)
		{
			tempTab[i + 1] = tablica[i];
		}
		rozmiar++;
		delete[] tablica;
		tablica = tempTab;
	}
	else
	{
		cout << "miejsce spoza zakresu vectora\n";
	}
}




void vector::usun()
{
	rozmiar--;
	int* tempTab = new int[rozmiar];
	for (int i = 0; i < rozmiar; i++)
	{
		tempTab[i] = tablica[i];
	}
	delete[] tablica;
	tablica = tempTab;
}





void vector::usun(int miejsce)
{
	if (miejsce >= 0 && miejsce < rozmiar)
	{
		rozmiar--;
		int * tempTab = new int[rozmiar];
		for (int i = 0; i < miejsce; i++)
		{
			tempTab[i] = tablica[i];
		}
		for (int i = miejsce; i < rozmiar; i++)
		{
			tempTab[i] = tablica[i + 1];
		}
		delete[] tablica;
		tablica = tempTab;
	}
}

int vector::getobj()
{
	return 0;
}


int vector::getrozmiar()
{
	return rozmiar;
}



int vector::getobj(int miejsce)
{
	if (miejsce <= rozmiar)
	{
		return tablica[miejsce];
	}
	else
	{
		cout << "zly indeks tablicy\n";
		return INT_MIN;
	}
}
