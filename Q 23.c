#include <stdio.h>
#include <conio.h>
main()
{
    int i, n, d, sum;
    printf("Armstrong numbers : "); 
    for(i=2; i<=1000; i++)
    {
        sum = 0; 
        n = i; 
        while(n)
        {
            d = n % 10;
            sum = sum + (d * d * d); 
            n = n / 10;
        }
        if (sum == i) 
            printf("%d	", i);
    }
    getch();
}

