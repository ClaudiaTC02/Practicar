#include <iostream>
//------------------------------------------------------------------------------------------------------------------
//funcion
void numerosDivisibles(int *original, int tamO, int *divisores, int tamD)
{
    for (int i = 0; i < tamD; i++)
    {
        std::cout << "Divisible por " << divisores[i] << " : " << "\n";
        for (int j = 0; j < tamO; j++)
        {
            if (original[j] % divisores[i] == 0)
            {
                std::cout << original[j] << "\n";
            }
        }
    }
}
//------------------------------------------------------------------------------------------------------------------
int main()
{
    int listaOriginal[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int listaDivisores[] = {2, 3, 4};
    numerosDivisibles(&listaOriginal[0], 8, &listaDivisores[0], 3);
    return 0;
}
