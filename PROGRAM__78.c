#include <stdio.h>
int main() {
    volatile int num1 = 14;
    int num2 = 12;
    num2 = num1;
    num1 = num1 + 1;
    printf("%d %d\n", num1,num2);
    return 0;
}
