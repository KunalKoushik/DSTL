#include<stdio.h>
int main()
{
	int i,set[5];
	for(i=0;i<4;i++)
	{
		printf("Enter elements of set = ");
		scanf("%d",&set[i]);
	}
	printf("{Fie");
	for(i=0;i<4;i++)
	{	
	printf(",{%d}",set[i]);
	}
	for(i=0;i<3;i++)
	{
	printf(",{%d,%d}",set[0],set[i+1]);
	}
	for(i=0;i<2;i++)
	{
	printf(",{%d,%d}",set[1],set[i+2]);
	}
	for(i=0;i<1;i++)
	{
	printf(",{%d,%d}",set[2],set[i+3]);
	}
	for(i=0;i<2;i++)
	{
	printf(",{%d,%d,%d}",set[0],set[1],set[i+2]);
	}
		for(i=0;i<2;i++)
	{
	printf(",{%d,%d,%d}",set[i],set[2],set[3]);
	}
	printf("{");
		for(i=0;i<4;i++)
	{	
	printf("%d,",set[i]);
	}
printf("}}");
return 0;
}