#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum;
    scanf("%d",&n);

    int a=0 ,b=1;
    for(int i=3 ; i<=n ;i++){
        sum = a+b;
        a=b;
        b=sum;
    }
    printf("%d",sum);
    return 0;
}
