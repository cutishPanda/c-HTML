#include<stdio.h>
int main(){

float a,b,c;

printf("side1=");
scanf("%f",&a);

printf("side2=");
scanf("%f",&b);

printf("side3=");
scanf("%f",&c);

((a||b||c)!=0 && (a+b)>c && (b+c)>a && (c+a)>b)?
printf("tringle") : printf("not tringle");
	return 0;


}