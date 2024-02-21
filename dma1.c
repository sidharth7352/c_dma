//dynamic memory allocation of 5 integers..

#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p,i;
p=malloc(sizeof(int)*5);
printf("enter the integers...\n");
for(i=0;i<5;i++)
scanf("%d",&p[i]);

for(i=0;i<5;i++)
printf("%d ",p[i]);
printf("\n");
}
