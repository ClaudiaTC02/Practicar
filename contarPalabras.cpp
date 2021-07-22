#include <iostream>
#include <cstring>

int contarPalabras(char *frase, int longitud)
{
    //ejemplo Hola gente
    //        0123456789
    //longitud 10
    int cont = 0;
    int i = 0;
    while (i < longitud)
    {
        //mientras i sea menor a la longitud e igual a un espacio i incrementa en 1 cada vez
        //ejemplo: la primer vez no cumple esto
        //ejemplo: cuando i = 4 viene aquí e incrementa la i a 5
        while (frase[i] == ' ')
        {
            i++;
        }
        //ejemplo: cont = 1
        //ejemplo: cont = 2
        cont++;
        //mientras i sea menor a la longitud y diferente de un espacio i incrementa en 1 cada vez
        //ejemplo: se queda aquí hasta que i es 4 y vuelve al primer paso
        //ejemplo: la i incremeneta hasta 10 y se cierra el bucle
        while (frase[i] != ' ')
        {
            i++;
        }
    }
    return cont;
}

int main()
{
    using namespace std;
    int longitud;
    char frase[1000];
    cout << "Ingrese una frase para contar las palabras que tiene: "<< "\n";
    //metodo para obtener la frase en una lista
    gets(frase);
    //metodo para saber la longitud de la frase
    longitud = strlen(frase);
    int resultado = contarPalabras(&frase[0], longitud);
    cout << "La cantidad de palabras es: " << resultado;

    return 0;
}
