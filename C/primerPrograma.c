#include<stdio.h>
int main()
{
    //imprimir en pantalla
    printf("Hola mundo");
    //variables
    char letra = 'A';

    //asi se imprime una variable
    printf(" La letra es %c", letra);

    //Entrada y salida
    int entrada_salida;
    printf("Ingresa un número: ");
    scanf("%d", &entrada_salida);
    printf("numero = %d", entrada_salida);

    return 0;
}
