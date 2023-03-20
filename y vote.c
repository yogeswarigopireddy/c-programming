#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("Enter your age: ");
scanf("%d", &a);
if(a>=18)
{
printf("You are eligible to vote");
}
else
{
printf("You are not eligible to vote\n");
b=18-a;
printf("You still have %d years to go",b);
}
getch();
return 0;
}
