#include <stdio.h>
int main()
{
    int i,n;
    printf("enter number\n");
    scanf("%d",&n);
        printf("cubes of the first %d natural number are:",n);

    for (i = 1; i <=n; i++)
    {
        printf("\n%d",i*i*i);
    }
    return 0;
}