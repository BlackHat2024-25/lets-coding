#include<stdio.h>

void checkEvenOrNot(int num)
{
    if(num % 2 ==0)

    goto even;

    else 
    goto odd;

    even:
    printf("%d is even",num);
    return;

    odd:
    printf("%d is odd", num);
}
int main(){
    int num;

    printf("enter a number");
    scanf("%d", &num);

    checkEvenOrNot(num);
    return 0;
}