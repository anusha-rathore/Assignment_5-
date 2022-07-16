#include <stdio.h>
int main()
{
    int i,n;
    printf("enter number\n");
    scanf("%d",&n);
  
        printf("table of %d :",n);

    for (i = 1; i <= n; i++)
    {
        printf("\n%d X %d = %d",n,i,n*i);
    }
    return 0;
}