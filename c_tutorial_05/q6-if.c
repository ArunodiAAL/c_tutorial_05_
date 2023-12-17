#include<stdio.h>

int main()
{
    int jno,lno;
    float basic_pay;
    float gross_salary;
    float house_rent;
    float net_salary,tax;

    printf("Enter job number:");
    scanf("%d",&jno);
    printf("\nEnter level number:");
    scanf("%d",&lno);

    if (lno==1)

    {
        printf("\nEnter Basic salary:");
        scanf("%f",&basic_pay);
        house_rent=(basic_pay*25)/100;

        gross_salary=basic_pay+house_rent+1000+500;

       if (gross_salary<2000)
        {
          printf("The net salary is %.2f",net_salary);
        }
        else if ((gross_salary>=2000)&&(gross_salary<4000))
        {
             tax=((gross_salary*3)/100);
             net_salary=gross_salary-tax;
             printf("The net salary is %.2f",net_salary);
        }
        else if ((gross_salary>=4000)&&(gross_salary<6000))
        {
             tax=((gross_salary*5)/100);
             net_salary=gross_salary-tax;
             printf("The net salary is %.2f",net_salary);
        }
        else if (gross_salary>=6000)
        {
             tax=((gross_salary*8)/100);
             net_salary=gross_salary-tax;
             printf("The net salary is %.2f",net_salary);
        }

    }
    else if (lno==2)
    {
         printf("\nEnter Basic salary:");
         scanf("%f",&basic_pay);
         house_rent=(basic_pay*25)/100;
         gross_salary=basic_pay+house_rent+750+200;

        if (gross_salary<2000)
        {
          printf("The net salary is %.2f",net_salary);
        }
        else if ((gross_salary>=2000)&&(gross_salary<4000))
        {
            tax=((gross_salary*3)/100);
             net_salary=gross_salary-tax;
             printf("The net salary is %.2f",net_salary);
        }
        else if ((gross_salary>=4000)&&(gross_salary<6000))
        {
             tax=((gross_salary*5)/100);
             net_salary=gross_salary-tax;
             printf("The net salary is %.2f",net_salary);
        }
        else if (gross_salary>=6000)
        {
             tax=((gross_salary*8)/100);
             net_salary=gross_salary-tax;
             printf("The net salary is %.2f",net_salary);
        }

    }
    else if (lno==3)
    {
         printf("\nEnter Basic salary:");
        scanf("%f",&basic_pay);
        house_rent=(basic_pay*25)/100;
        gross_salary=basic_pay+house_rent+500+100;

        if (gross_salary<2000)
        {
          printf("The net salary is %.2f",net_salary);
        }
        else if ((gross_salary>=2000)&&(gross_salary<4000))
        {
            tax=((gross_salary*3)/100);
             net_salary=gross_salary-tax;
             printf("The net salary is %.2f",net_salary);
        }
        else if ((gross_salary>=4000)&&(gross_salary<6000))
        {
             tax=((gross_salary*5)/100);
             net_salary=gross_salary-tax;
             printf("The net salary is %.2f",net_salary);
        }
        else if(gross_salary>=6000)
        {
             tax=((gross_salary*8)/100);
             net_salary=gross_salary-tax;
             printf("The net salary is %.2f",net_salary);
        }

    }
    else if (lno==4)
    {
         printf("\nEnter Basic salary:");
         scanf("%f",&basic_pay);
         house_rent=(basic_pay*25)/100;
         gross_salary=basic_pay+house_rent+250;

        if (gross_salary<2000)
        {
          printf("The net salary is %.2f",net_salary);
        }
        else if ((gross_salary>=2000)&&(gross_salary<4000))
        {
             tax=((gross_salary*3)/100);
             net_salary=gross_salary-tax;
             printf("The net salary is %.2f",net_salary);
        }
        else if ((gross_salary>=4000)&&(gross_salary<6000))
        {
            tax=((gross_salary*5)/100);
             net_salary=gross_salary-tax;
             printf("The net salary is %.2f",net_salary);
        }
        else if (gross_salary>=6000)
        {
             tax=((gross_salary*8)/100);
             net_salary=gross_salary-tax;
             printf("The net salary is %.2f",net_salary);
        }

    }
    else
    {
        printf("Invalid level no");
    }

return 0;
}
