#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int fact = 1;

    printf("Enter the number :");
    scanf("%d",&n);

    int i=1;
    while(i<=n){
        fact = fact*i;
        i++;
    }
    printf("Factorial : %d",fact);
    return 0;
}
