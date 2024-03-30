#include<stdio.h>
#include<string.h>

int main(){
char name[] = "deep";
    // int number[] = {2,4,5,6,7,5,5,45,45,4};
    // int array_length = sizeof(number)/sizeof(number[0]);
    int array_length = strlen(name);
    printf("the length of the 'numbers' array is: %d\n",array_length);
    return 0;
}

