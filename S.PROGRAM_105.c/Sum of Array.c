#include <stdio.h>

int main() {
    int n,a[100],sum =0;
    printf("Enter the no.of elements in array: ");
    scanf("%d",&n);
    printf("Enter the value: ");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    printf("Sum of array: ");
    for(int i=0 ; i<n ; i++){
        sum = sum + a[i];
        
    }
    printf("%d",sum);

    return 0;
}
