#include <stdio.h>
int main()
{
    int i, N;
    
    printf("ENTER A NUMBER\n");
    scanf("%d",&N);
    

        printf("first %d even number :",N);

    for (i = 1; i <= N; i++)
    {
        printf("\n%d",2*i);
    }
    return 0;
}