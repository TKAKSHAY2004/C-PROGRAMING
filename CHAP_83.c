void main()
{
    float length,breadth,heigth, volume;
 
    printf("Enter the length of cuboid=");
    scanf("%f", &length);
    printf("Enter the breadth of cuboid=");
    scanf("%f", &breadth);
    printf("Enter the heigth of cuboid=");
    scanf("%f", &heigth);
    volume =length*breadth*heigth;
    printf("volume of cuboid = %6.2f \n",volume);
}
