#include<stdio.h>
int main()
{
 
float num;
int choice;

printf("1:feet to meter, 2:meter to feet\n");
printf("enter the choice:");
scanf("%d",&choice);

if(choice==1){

   printf("enter the feet:");
   scanf("%f",&num);
   printf("Meters:%.3f\n",num/3.28);     // 1 meter=(num/3.28)feet

}

else{

  printf("the num in meter:");
  scanf("%f",&num);
  printf("feet:%.3f\n",num*3.28);       // 1 feet=(num*3.28) meter
    
}

return 0;

}
