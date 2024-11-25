#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // N_ELEMENTS helyett NELEMENTS van
    int *b = new int[NELEMENTS];
    // A szöveget nem fogja megjeleníteni, mivel az '' egyetlen karakter kiiratásakor használatos
    std::cout << '1-100 ertekek duplazasa'
    // Ebben a for ciklusban hiányzik a feltétel és az inkrementáló rész
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    // for ciklusnál a feltétel után pontosvessző helyett csak sima vessző szerepel
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
