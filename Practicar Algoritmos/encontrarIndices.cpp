#include<iostream>
//------------------------------------------------------------------------------------------------------------------
//Dado un array devolver el indice de los números que sumen un objetivo dado. 
//------------------------------------------------------------------------------------------------------------------
//Funcion
void encontrarIndices(int *numeros, int tam, int objetivo, int &contador, int *indices){
    for (int i = 0; i < tam; i++)
    {
        for (int j = i+1; j < tam; j++)
        {
            if (numeros[i] + numeros[j] == objetivo)
            {
                indices[contador++] = i;
                indices[contador++] = j;
            }
            
        }
        
    }
    
}
//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------
int main()
{
    using namespace std;
    int numeros[] = {2,7,11,15};
    int tam = 4;
    int indices[1000];
    int objetivo = 9;
    int contador = 0;
    encontrarIndices(&numeros[0], tam, objetivo, contador, &indices[0]);
    for (int i = 0; i < contador; i++)
    {
        cout<<indices[i]<<"\n";
    }
    
    return 0;
}
