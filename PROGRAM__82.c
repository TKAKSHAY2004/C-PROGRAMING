#include <stdio.h>
int main() {
   int num1, num2, result; 
   result = (num1 = 6, num2 = num1 + 10, num1 +num2); 
   printf("result = %d\n", result);

    return 0;
}
