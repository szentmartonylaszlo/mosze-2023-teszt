#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[NELEMENTS]; // v�ltoz�n�v hiba
    std::cout << '1-100 ertekek duplazasa' // '' helyett ""
    for (int i = 0;) // ciklus szintaxis hiba
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // ciklus szintaxis hiba
    {
        std::cout << "Ertek:" // �rt�k ki�r�sa hi�nyzik
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // nincs megadva kezd��rt�k
    for (int i = 0; i < N_ELEMENTS, i++) // ciklus szintaxis hiba
    {
        atlag += b[i] // ; hi�nyzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    // nincs felszabad�tva a mem�ria
    return 0;
}
