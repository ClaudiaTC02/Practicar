#include <iostream>
//------------------------------------------------------------------------------------------------------------------
//funcion
void tablas(int *resultados, int &contador){
    int listas[1000];
    int tam = 0;
    for (int i = 0; i < 4; i++)
    {   //3
        for (int j = 0; j < 11; j++)
        {   //5
            tam++;
            std::cout<<i<<" x "<<j<< " = ";
            for (int k = 0; k < tam; k++)
            {
                if (resultados[k] != i*j)
                {
                    resultados[contador++] = i*j;
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
    std::cout<<"el contador: "<<contador<<"\n";
    for (int i = 0; i < contador; i++)
    {
        std::cout<<lista[i]<<"\n";
    }
    return 0;
}
