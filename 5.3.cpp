//area y perimetro de un rectangulo
#include<stdio.h>
char line[100];
float height,width,area,perimeter;
int main(){
	printf("Enter heigth and width: ");
	fgets(line,sizeof(line),stdin);
	sscanf(line,"%f %f",&height,&width);
	if(width==height){
		printf("It isn't rectagle, is a square ");
		
	}else{
		area=height*width;
		perimeter=(height*2)+(width*2);
		printf(" The area is: %.2f\n The perimeter is: %.2f ",area,perimeter);
	
	}
	return 0; 
	}


