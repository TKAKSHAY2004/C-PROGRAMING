#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;

    int n;

    scanf("%d",&n);

    for(int i=0; i<=n ; i++){
        sum = sum + i;
    }
    printf("%d",sum);
    return 0;
}
