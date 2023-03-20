#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,ch;
printf("Enter a number: ");
scanf("%d", &a);
printf("Enter another number: ");
scanf("%d", &b);
printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division");
printf("\n\nEnter choice (1 to 4): ");
scanf("%d", &ch);
switch(ch)
{
case 1:
c=a+b;
printf("The sum of %d and %d is %d",a,b,c);
break;
case 2:
c=a-b;
printf("The difference between %d and %d is %d", a,b,c);
break;
case 3:
c=a*b;
printf("The product of %d and %d is %d",a,b,c);
break;
case 4:
c=a/b;
printf("The division between %d and %d is %d",a,b,c);
break;
default:
printf("Enter valid choice");
}
getch();
return 0;
}

