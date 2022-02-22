#pragma once
class vector
{
public:
	vector();
	vector(int rozmiar);
	vector(int min, int max, int rozmiar);
	~vector();
	void wypisz();
	void dodaj(int element);
	void wstaw(int element, int miejsce);
	void usun();
	void usun(int miejsce);
	int getobj();
	int getrozmiar();
	int getobj(int miejsce);
	int getrozmiar(int miejsce);
private:
	unsigned int rozmiar;
	int *tablica;
};
