//dynamic memory allocation for 1 integer
#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p;
p=malloc(sizeof(int));
printf("enter an integer..\n");
scanf("%d",p);
printf("%d\n",*p);
}
