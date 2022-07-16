#include <stdio.h>
int main()
{
    int i,N;
    printf("ENTER A NUMBER\n");
    scanf("%d",&N);
    
        printf("first %d even number in reverse order :",N);

    for (N; N>=1; N--)
    {
        printf("\n%d",2*N);
    }
    return 0;
}