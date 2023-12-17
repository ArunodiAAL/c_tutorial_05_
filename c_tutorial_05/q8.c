#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    float p,q,x1,x2,x3,x4;

    printf("Enter a,b,c for ax^2 + bx + c = 0:\n");
    scanf("%f %f %f",&a,&b,&c);

    p=sqrt((b*b)-(4*a*c));
    q= (b*b)-(4*a*c);
    x1=((-b)+p)/(2*a);
    x2=((-b)-p)/(2*a);
    x3=sqrt((-c)/a);
    x4=(-c)/b;


    if((a==0)&&(b==0))
    {
        printf("No Solutions");
    }
    else if(a==0)
            {
                if(c==0)
                {
                     printf("x=0");
                }
                else
                {
                   printf("x=%f,x4") ;
                }

            }
    else if ((a!=0)&&(b==0))
    {
        if (((a<0)&&(c<0))||((a>0)&&(c>0)))
        {
         printf("There are no real roots");
        }
        else
        {
          printf("There is a root x=%f",x3);
        }
    }
    else if(q<0)
    {
        printf("There are no roots");
    }
    else
    {
        printf("There are two real roots. \nThey are x1=%.2f and x2=%.2f",x1,x2);
    }
    return 0;
}

