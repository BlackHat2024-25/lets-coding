#include<stdio.h>
int main(){

int limit, i,n;

printf("enter the number for table :");
scanf("%d",&n);

printf("enter the limit of table :");
scanf("%d", &limit);

for ( i = 1; i <= limit; i++)
{
    printf("%d * %d = %d\n",n,i, n * i);
}
return 0;
}


