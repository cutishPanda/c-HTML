#include<stdio.h>
main(){

char ch;
printf("enter the char:");
ch=getche();
switch (ch){

case 'a' :
case 'e' :
case 'i' :
case 'o' :
case 'u' :
printf(" is a vowel\n");
    break;

default:
printf(" is a consonats");
}
return 0;
}





















