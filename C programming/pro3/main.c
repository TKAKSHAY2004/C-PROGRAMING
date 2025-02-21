#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    int j=5;

    while(i<=j){
        printf("%d %d \n",i,j);
        i=i+2;
        j=j-1;
    }
    return 0;
}
