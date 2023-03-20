#include<stdio.h>
#include<conio.h>
int main()
{
float r, cir, pi=3.14;
printf("Enter the radius value: ");
scanf("%f", &r);
cir=2*pi*r;
printf("Circumference is: %f", cir);
getch();
return 0;
}
