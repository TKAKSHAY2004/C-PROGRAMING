#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=20;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}
