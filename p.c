//WAP A PROGRAMM IN C TO PRINT THE POWER SET OF A SET.
#include<stdio.h>
#include<math.h>
//FUNCTION MADE BY USER.
void pow_set(int *set,int n1)
{
    int pow_set_size=pow(2,n1);
    int count,j;
    for(count=0;count<pow_set_size;count++)
    {
     for(j=0;j<n1;j++)
        {
            if(count &(1<<j))
            {
                printf("THE ELEMENTS ARE:\n");
                printf("%d \t",set[j]);
            }
                printf("\n ");
        }
    }
}
//MAIN FUNCTION.
int main(){
    int set[100],i,n1;
    printf("ENTER THE SEZE OF SET:\n");
    scanf("%d",&n1);
    printf("ENTER THE ELEMENT OF SET:\n");
    for(i=0;i<n1;i++)
    scanf("%d",&set[i]);
    pow_set(set,n1);
    return 0;
}
//PROGRAMM FINISH