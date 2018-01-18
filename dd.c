#include<stdio.h>
void main()
{
int a;
printf("Enter any year");
scanf("%d",&a);
if((a%4==0 && a%100 !=0) || (a%40==0))
printf("it is a leap year");
else
printf("it is  not leap year");
getch();
}
