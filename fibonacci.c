#include<stdio.h>
int fib(int n) {
    if(n ==0) {
        return 0;
    } else if (n ==1) {
        return 1;
    } else if (n < 0) {
        return 0;
    } else {
        return n * fib(n-1);
    }
}

int main() {
    int number,output;
    printf("Enter a number: ");
    scanf("%d",&number);
    output=fib(number);
    printf("%d",output);
    return 0;
}