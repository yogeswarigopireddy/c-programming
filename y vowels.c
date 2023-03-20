#include<stdio.h>
#include<conio.h>
void main()
{
char ab;
clrscr();
printf("Enter a character: ");
scanf("%c", &ab);
if(ab=='a'||ab=='e'||ab=='i'||ab=='o'||ab=='u'||ab=='A'||ab=='E'||ab=='I'||ab=='O'||ab=='U');
{
printf("Vowel");
}
else
{
printf("Consonant");
}
getch();
}
