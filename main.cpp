#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // N_ELEMENTS helyett NELEMENTS van
    int *b = new int[N_ELEMENTS];
    // A szöveget nem fogja megjeleníteni, mivel az '' egyetlen karakter kiiratásakor használatos
    std::cout << "1-100 ertekek duplazasa";
    // Ebben a for ciklusban hiányzik a feltétel és az inkrementáló rész
    for (int i = 0; i; i++)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:";
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    // for ciklusnál a feltétel után pontosvessző helyett csak sima vessző szerepel, illetve a b[i] után is lemaradt a pontosvessző
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;

    std::cout << "Véletlenül sem határidő után adom le a házit (5. feladat)" << std::endl;
}
