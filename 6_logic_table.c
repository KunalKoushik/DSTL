#include <stdio.h>
int main()
{
    int a, b, temp;

    printf("\tA\tB\tA.B\tA+B\tA'\n");
    for (int i = 0; i < 4; i++)
    {
        temp = i;
        a = i % 2;
        temp /= 2;
        b = temp % 2;
        printf("\n\t%d\t%d\t%d\t%d\t%d\n", b, a, a && b, a || b, !b);
    }
    
    return 0;
}