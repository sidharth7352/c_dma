#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p,i,n;
printf("enter the no.of elements we want to enter..\n");
scanf("%d",&n);
p=malloc(sizeof(int)*n);
printf("enter the %d array elements..\n",n);
for(i=0;i<n;i++)
scanf("%d",&p[i]);

printf("array elements are..\n");
for(i=0;i<n;i++)
printf("%d ",p[i]);
}
