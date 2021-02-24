#include<stdio.h>
#include<conio.h>
int main(){
	int h,m,res,res2;
	printf("Ingrese las horas: ");
	scanf("%d",&h);
	printf("Ingrese los minutos: ");
	scanf("%d",&m);
	res=h*60;
	res2=res+m;
	printf("Un total de %d minutos",res2);
	
	return 0;
}
