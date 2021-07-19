#include<iostream>
//------------------------------------------------------------------------------------------------------------------
// funcion para calcular resto
int calcularResto (int Dni){
    int res = Dni%23;
    return res;
}
//------------------------------------------------------------------------------------------------------------------
int main(){
    //variables
    int numeroDNI;
    int resto;
    char letrasDNI[] = {'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E'};
    char resultado;
    //------------------
    std::cout << "Dame tu número de DNI para calcular la letra \n";
    std::cin >> numeroDNI;
    std::cout << "El DNI introducido es: "<<numeroDNI<<"\n";
    resto = calcularResto(numeroDNI);
    resultado = letrasDNI[resto];
    std::cout << "Tu letra del DNI es: "<<resultado<<"\n";
}
