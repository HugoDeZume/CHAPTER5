#include<conio.h>
#include<stdio.h>
int main(){
	int c,f;
	printf("Ingrese grados centigrados:  ");
	scanf("%d",&c);
	f=(c*9/5)+32;
	printf("La conversion a grados fahrenheit es: %d",f);
	
	return 0;
}
