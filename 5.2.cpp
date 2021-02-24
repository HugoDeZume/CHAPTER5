#include<stdio.h>
#include<conio.h>
#define PI 3.1416
#include<math.h>
int main(){
	float r,v;
	printf("Ingrese el valor del radio de la esfera: ");
	scanf("%f",&r);	
	r=(pow(r,3))*PI*4/3;
	printf("%f",r);
	
	return 0;
}
