#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("Enter a number: ");
scanf("%d", &a);
if(a<0)
{
printf("Number is negative");
}
else
{
printf("Number is positive");
}
getch();
return 0;
}
