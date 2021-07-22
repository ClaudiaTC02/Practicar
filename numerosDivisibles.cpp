#include <iostream>
//------------------------------------------------------------------------------------------------------------------
//funcion
void numerosDivisibles(int *original, int tamO, int *divisores, int tamD, int *lista2, int *lista3, int *lista4, int &contador2, int &contador3, int &contador4)
{
    for (int j = 0; j < tamO; j++)
    { //inicio for
        //para dos
        if (original[j] % divisores[0] == 0)
        {
            lista2[contador2++] = original[j];
        }
        //para tres
        if (original[j] % divisores[1] == 0)
        {
            lista3[contador3++] = original[j];
        }
        //para cuatro
        if (original[j] % divisores[2] == 0)
        {
            lista4[contador4++] = original[j];
        }
    } //acabo for
}
//------------------------------------------------------------------------------------------------------------------
int main()
{
    int listaOriginal[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int listaDivisores[] = {2, 3, 4};
    int lista2[100];
    int lista3[100];
    int lista4[100];
    int contador2 = 0;
    int contador3 = 0;
    int contador4 = 0;
    numerosDivisibles(&listaOriginal[0], 8, &listaDivisores[0], 3, &lista2[0], &lista3[0], &lista4[0], contador2, contador3, contador4);
    std::cout << "Divisbles por 2 \n";

    std::cout << "Divisbles por 2 \n";

    for (int i = 0; i < contador2; i++)
    {
        std::cout << lista2[i] << "\n";
    }

    std::cout << "Divisbles por 3 \n";

    for (int i = 0; i < contador3; i++)
    {
        std::cout << lista3[i] << "\n";
    }

    std::cout << "Divisbles por 4 \n";

    for (int i = 0; i < contador4; i++)
    {
        std::cout << lista4[i] << "\n";
    }

    return 0;
}