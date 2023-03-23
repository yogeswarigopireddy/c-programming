#include <stdio.h>

int main()
{
    int num, rev = 0, rem, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(i = num; i != 0; i /= 10) 
	{
        rem = i % 10; 
        rev = rev * 10 + rem; 
    }
    
    printf("Reverse of %d is %d", num, rev);
    return 0;
}

