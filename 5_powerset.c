#include<stdio.h>
#include<math.h>
void powerset(int *set1, int* set2,int *s1,int *s2){
    
}

void display(int *U, int size)
{
    printf("Power Set is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",U[i]);
    }
}
int main()
{
    int s1, s2;
    int set1[100000], set2[100000] ;

    printf("Enter size of set 1 : ");
    scanf("%d", &s1);
    for (int i = 0; i < s1; i++)
    {
        printf("Enter %d element :", i);
        scanf("%d", &set1[i]);
    }
    s2 = pow(2,s1);
    
    display(set2, s2);

    return 0;
}