#include <stdio.h>
void Intersection(int *set3, int set1[], int set2[], int s1, int s2, int *s3)
{
    int i, j, k = 0;
    for (i = 0; i < s2; i++)
    {
        for (j = 0; j < s1; j++)
        {
            if (set2[i] == set1[j])
            {
                set3[k] = set2[i];
                k++;
                break;
            }
        }
    }
    *s3 = k;
}

int main()
{
    int i, s1, s2, s3 = 0;
    int set1[100], set2[100], set3[100];

    printf("Enter size of set 1 : ");
    scanf("%d", &s1);
    for (i = 0; i < s1; i++)
    {
        printf("Enter %d element :", i);
        scanf("%d", &set1[i]);
    }

    printf("Enter size of set 2 : ");
    scanf("%d", &s2);
    for (i = 0; i < s2; i++)
    {
        printf("Enter %d element :", i);
        scanf("%d", &set2[i]);
    }

    Intersection(set3, set1, set2, s1, s2, &s3);

    printf("After Intersection : \n{");
    for (i = 0; i < s3; i++)
    {
        if (i == s3 - 1)
        {
            printf("%d}", set3[i]);
        }
        else
            printf("%d,", set3[i]);
    }
    return 0;
}