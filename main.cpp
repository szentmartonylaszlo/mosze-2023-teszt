#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[NELEMENTS]; // változónév hiba
    std::cout << '1-100 ertekek duplazasa' // '' helyett ""
    for (int i = 0;) // ciklus szintaxis hiba
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // ciklus szintaxis hiba
    {
        std::cout << "Ertek:" // érték kiírása hiányzik
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // nincs megadva kezdõérték
    for (int i = 0; i < N_ELEMENTS, i++) // ciklus szintaxis hiba
    {
        atlag += b[i] // ; hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    // nincs felszabadítva a memória
    return 0;
}
