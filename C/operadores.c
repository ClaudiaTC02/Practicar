#include<stdio.h>
int main(){
    //operadores
    //suma
    int numero_a= 4;
    int numero_b= 2;
    int suma = numero_a + numero_b;
    printf("El resultado de la suma es: %d \n" , suma);

    //resta
    float a = 3.1, b = 1.2, resta = a-b;
    printf("El resultado de la resta es: %fl \n" , resta);

    //multiplicacion, división y resto
    int mult = numero_a * numero_b, dividir = numero_a/numero_b, resto = numero_a%numero_b;
    printf("El resultado de la multiplicación es: %d \n" , mult);
    printf("El resultado de la división es: %d \n", dividir);
    printf("El resto de la división es: %d \n", resto);
    
    //operadores lógicos
    int x = 5, y = 8;
    int rpta = x>y;
    // 0 falso
    // 1 verdadero
    printf("respuesta : %d \n" , rpta);
    
    //tamaño de datos
    double ej;
    printf("tamaño de datos = %lu bytes" , sizeof(ej));

    return 0;
}