int main()
{
	int bytes;

	double kilobytes;
        printf("RA2211042010057\n");
	printf("Enter number of bytes:");

	scanf("%d",&bytes);

	kilobytes=bytes/1024.00;

	printf("Kilobytes: %.2lf",kilobytes);

	return 0;
}
