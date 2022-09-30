#include <stdio.h>

void Sdiff(int *set3, int *set1, int *set2, int *s1, int *s2, int *s3)
{
    int i, j, k = 0;
    for (i = 0; i < *s1; i++)
    {
        for (j = 0; j < *s2; j++)
        {
            if (set1[i] == set2[j])
            {
                break;
            }
        }
        if (j == *s2)
        {
            set3[k] = set1[i];
            k++;
        }
    }
    for (i = 0; i < *s2; i++)
    {
        for (j = 0; j < *s1; j++)
        {
            if (set2[i] == set1[j])
            {
                break;
            }
        }
        if (j == *s1)
        {
            set3[k] = set2[i];
            k++;
        }
    }
    *s3 = k;
}

void display(int U[], int size)
{
    printf("After Symmetric difference :\n{");
    for (int i = 0; i < size; i++)
    {
        if (i == size-1)
        {
            printf("%d",U[i]);
            
        }
        else
            printf("%d,",U[i]);
    }
    printf("}");
}
int main()
{
    int s1, s2, s3 = 0;
    int set1[100000], set2[100000], set3[100000];

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

    Sdiff(set3, set1, set2, &s1, &s2, &s3);

    display(set3, s3);

    return 0;
}