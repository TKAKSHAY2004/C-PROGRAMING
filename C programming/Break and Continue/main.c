#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1 ; i<=10 ; i++){
        if(i % 4 == 0){
            break;
        }printf("%d\t",i);
    }
    //in break statement if condition get satisfies it will come out from the entire for loop
    printf("\n");

    for(int i=1 ; i<=10 ; i++){
        if(i % 4 == 0){
            continue;
        }printf("%d\t",i);
    }
    //in continue it will print only the condition which are not satisfies
    return 0;
}
