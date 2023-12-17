#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three integer value;\n");
    scanf("%d %d %d",&a,&b,&c);



    if((a>0)&&(b>0)&&(c>0))
    {
       if(a>b)
        {
            if(c>a)
             {
                if ((c*c)==((a*a)+(b*b)))
                {
                    printf("%d=%d+%d These values are the sides of the right-angled triangle",(c*c),(a*a),(b*b));
                }
                else
                {
                    printf("These values are not the sides of the right-angled triangle");
                }
             }
             else if ((a*a)==((c*c)+(b*b)))
                {
                  printf("%d=%d+%d These values are the sides of the right-angled triangle",(a*a),(c*c),(b*b));
                }
                else
                {
                    printf("These values are not the sides of the right-angled triangle");
                }
        }
           else if (b>c)
             {
                if ((b*b)==((a*a)+(c*c)))
                    {
                        printf("%d=%d+%d These values are the sides of the right-angled triangle",b*b,a*a,c*c);
                    }
                else
                    {
                        printf("These values are not the sides of the right-angled triangle");
                    }
             }
          else if ((c*c)==((a*a)+(b*b)))
               {
                    printf("%d=%d+%d These values are the sides of the right-angled triangle",c*c,a*a,b*b);
               }
          else
                {
                    printf("These values are not the sides of the right-angled triangle");
                }
             }
       else
        {
           printf("These values are not the sides of the right-angled triangle");
        }
    return 0;
}
