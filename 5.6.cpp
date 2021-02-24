#include <cstdlib>
#include <iostream>

using namespace std;
int main(){

	int min,valor;
	printf("Ingrese el minutos:  ");
	scanf("%d",&min);
	valor=60;
	div_t resultado;
	resultado = div(min,valor);
	printf("El resultado es: %d hrs con %d mins",resultado.quot,resultado.rem);
	
    return 0;

}
