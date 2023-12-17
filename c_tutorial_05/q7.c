#include<stdio.h>

int main ()
{
    float x;
    printf("Enter value :");
    scanf("%f",&x);

    if(x>0)
        {
          printf("y=1");
        }
    else if (x<0)
        {
            printf("y=-1");
        }
    else
        {
            printf("y=0");
        }
    return   0;
}
