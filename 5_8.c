#include <stdio.h>
int main()
{
    int i,n;
    printf("enter a number\n");
    scanf("%d",&n);
    
        printf(" squares of the first %d natural number :",n);

    for (i = 1; i <= n; i++)
    {
        printf("\n%d",i*i);
    }
    return 0;
}