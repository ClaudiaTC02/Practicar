#include <iostream>
#include <cstring>

int contarPalabras(char *frase, int longitud)
{
    int cont = 0;
    int i = 0;
    while (i < longitud)
    {
        while (i < longitud && frase[i] == ' ')
        {
            i = i + 1;
        }
        if (i < longitud)
        {
            cont = cont + 1;
        }
        while (i < longitud && frase[i] != ' ')
        {
            i = i + 1;
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
