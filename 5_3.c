#include <stdio.h>
int main()
{
    int i,N;
    printf("ENTER A NUMBER\n");
    scanf("%d",&N);
        printf("first %d natural number in reverse order :",N);

    for (i = N; i >=1; i--)
    {
        printf("\n%d",i);
    }
    return 0;
}