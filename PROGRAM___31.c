int main()
{
    int n, count, sum = 0;
    printf("RA2211042010057\n");
    printf("Enter the value of n(positive integer): ");
    scanf("%d",&n);

    count=1;
    while(count <= n){
    	sum = sum + count;
    	count++;
 }

 printf("Sum of first %d natural numbers is: %d",n, sum);

    return 0;
}
