
#include <iostream>
//------------------------------------------------------------------------------------------------------------------
//funcion
void tablas(int *resultados, int &contador)
{
    int producto = 0;
    for (int i = 0; i < 5; i++)
    { //3
        for (int j = 0; j < 11; j++)
        { //5
            producto = i*j;
            resultados[contador++] = producto;
            for (int k = 0; k < contador; k++)
            {
                if (resultados[k - 1] == producto)
                {
                    std::cout<<"Hola "<<producto<<"\n";
                    contador--;
                    break;
                }
            }
        }
    }
}

//------------------------------------------------------------------------------------------------------------------
int main()
{
    int lista[1000];
    int contador = 0;
    tablas(&lista[0], contador);
    std::cout << "el contador: " << contador << "\n";
    for (int i = 0; i < contador; i++)
    {
        std::cout << lista[i] << "\n";
    }
    return 0;
}
