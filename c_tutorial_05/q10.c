
#include<stdio.h>

int main()
{
    char name[50];
    float mass,height,bmi_value;

    printf("Enter the name of a citizen:");
    scanf("%s",&name);
    printf("\nEnter mass of a citizen(kg):");
    scanf("%f",&mass);
    printf("\nEnter height off a citizen(m):");
    scanf("%f",&height);

    bmi_value=(mass/(height*height));
    printf("\nYour BMI value is %.2f",bmi_value);

    if (bmi_value < 18.5)
    {
        printf("\nRisk of developing problems such as nutritional deficiency and osteoporosis");
    }
    else if ((bmi_value<=18.5)&&(bmi_value<23))
    {
        printf("\nLow Risk");
    }
    else if ((bmi_value<23)&&(bmi_value<27.5))
    {
        printf("\nModerate risk of developing heart disease,high blood pressure,stroke,diabets");
    }
    else
    {
        printf("\nHigh risk of developing heart disease,high blood pressure,stroke,diabetes");
    }

return 0;
}



