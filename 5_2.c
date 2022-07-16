#include <stdio.h>
int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
        printf("first %d natural number are:",n);

    for (i = 1; i <= n; i++)
    {
        printf("\n%d",i);
    }
    return 0;
}