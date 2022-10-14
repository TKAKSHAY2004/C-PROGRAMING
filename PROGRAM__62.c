int main()
{

  float weight,height,BMI;
  printf("RA2211042010057\n");
  printf("Enter your body weight(in kg) : ");
  scanf("%f",&weight);
  printf("Enter your body height(in m) :");
  scanf("%f",&height);

  BMI= weight/(height*height);
  printf("BMI:%f",BMI);

  return 0;
}
