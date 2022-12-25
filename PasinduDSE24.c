#include<stdio.h>
void squre_area(int length){
	int area=length*length;
	printf("Squre area:%d\n",area);
}

void rectangle_area(int height,int width){
	int area=height*width;
	printf("Rectangle area:%d\n",area);
}

void circle_area(int redius){
	float area=3.14*(redius*redius);
	printf("circle area:%f\n",area);
}

int main(){
	int length;
	int height,width;
	int redius;
	
	printf("Enter the length:");
	scanf("%d",&length);
	printf("Enter the height:");
	scanf("%d",&height);
	printf("Enter the width:");
	scanf("%d",&width);
	printf("Enter the redius:");
	scanf("%d",&redius);
	
	squre_area(length);
	rectangle_area(height,width);
	circle_area(redius);
	
}