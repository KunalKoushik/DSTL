#include <stdio.h>
void findcart(int set1[], int set2[], int s1, int s2)
{
    printf("Cartesian product is : \n{");
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            if ((i == s1 - 1) && (j == s2 - 1))
            {
                printf("{%d,%d}}", set1[i], set2[j]);
            }
            else
                printf("{%d,%d},", set1[i], set2[j]);
        }
    }
}

int main()
{
    int s1, s2;
    int set1[100], set2[100], set3[100];

    printf("Enter size of set 1 : ");
    scanf("%d", &s1);
    for (int i = 0; i < s1; i++)
    {
        printf("Enter %d element :", i);
        scanf("%d", &set1[i]);
    }

    printf("Enter size of set 2 : ");
    scanf("%d", &s2);
    for (int i = 0; i < s2; i++)
    {
        printf("Enter %d element :", i);
        scanf("%d", &set2[i]);
    }

    findcart(set1, set2, s1, s2);
    return 0;
}