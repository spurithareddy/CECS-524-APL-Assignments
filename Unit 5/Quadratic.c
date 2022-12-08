#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    while(1)
    {
        double a ,b,c,rl,im;
        printf("Enter a b c values: ");
        scanf("%lf %lf %lf", &a, &b, &c);
        if(a==0&&b==0&&c==0)
        {
            printf("3 equations were solved\n");
            exit(0);
        }
         if(b*b-4*a*c>0)
         {
             printf("Roots are real\n");
             printf("Root 1: %lf\n",(-b+sqrt((b*b)-4*a*c))/(2*a));
             printf("Root 2: %lf\n",(-b-sqrt((b*b)-4*a*c))/(2*a));

         }

         else if(b*b-4*a*c==0)
         {
              printf("One real root\n");
              printf("Root 1:%lf\n",(-b)/(2*a));
         }


         else if(b*b-4*a*c<0)
         {
            printf("Roots are Imaginary\n");
            rl=-b/(2*a);
            im= sqrt(-((b*b)-4*a*c))/2*a;
            if(b==0)
            {
                printf("Root 1:+i*%lf\n",im);
                printf("Root 2:-i*%lf\n",im);
            }
            else
            {
                printf("Root 1:%lf+i*%lf\n",rl,im);
                printf("Root 2:%lf-i*%lf\n",rl,im);
            }


          }
    }
    return 0;

}
