
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string org, zaszyf, funkcja, tekst;
    int przesuniecie, i, max;
    tekst = "Wybierz funkcje:\n1: Szyfrowanie:\n2: Deszyfrowanie:\n3: KONIEC:\n";
    cout << tekst;
    do {
        cin >> funkcja;
        if (funkcja == "1") {
            cout << "Podaj tekst do szyfrowania:\n";
            getline(cin, zaszyf);
            cin >> org;
            cout << "Podaj przesuniecie:\n";
            cin >> przesuniecie;
            getline(cin, zaszyf);
            max = org.size();
            zaszyf.resize(max);
            for (i = 0; i < max; i++)
                zaszyf[i] = (org[i] + przesuniecie) % 256;
            cout << "Tekst zaszyfrowany: " << zaszyf << "\n\n";
            cin.ignore();
        }
        else if (funkcja == "2") {
            cout << "Podaj tekst do odszyfrowania:\n";
            cin >> org;
            cout << "Podaj przesuniecie:\n";
            cin >> przesuniecie;
            max = org.size();
            zaszyf.resize(max);
            for (i = 0; i < max; i++)
                zaszyf[i] = (org[i] - przesuniecie) % 256;
            cout << "Tekst odszyfrowany: " << zaszyf << "\n\n";
        }
        cout << tekst;
    } while (funkcja != "3");
    return 0;
}
