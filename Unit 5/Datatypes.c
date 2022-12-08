/* Online C Compiler and Editor */
#include <stdio.h>
#include<stdbool.h>
#include<complex.h>

int main()
{
    bool a=true;
    short int b=5;
    int c=0;
    long int d=908;
    long long int e=9087;
    float f=5.6;
    double g=6.67;
    long double h=4.07;
    char i='a';
    signed char j='f';
    unsigned char k='i';
    float _Complex l =5.3 + 7 * I;
    double _Complex m=9.897 + 7.908 * I;
    long double _Complex n=9.5437 + 1.453 * I;


    printf("Bool  Data Type: %d\n", a);
    printf("Short  Data Type: %d\n", b);
    printf("Int  Data Type: %d\n", c);
    printf("Long  Data Type: %d\n", d);
    printf("Long Long  Data Type: %ld\n", e);
    printf("Float  Data Type: %f\n", f);
    printf("Double  Data Type: %f\n", g);
    printf("Long Double Data Type: %Lf\n", h);
    printf("Char  Data Type: %c\n",i);
    printf("Signed Char Data Type:%c\n",j);
    printf("Unsigned Char Data Type:%c\n",k);
    printf("Float Complex  Data Type:");
    printf(" %f+  %f*I \n",creal(l),cimag(l));

   printf("Double Complex  Data Type:\n");
     printf(" %f+  %f*I \n",creal(m),cimag(m));

   printf("Long Double Complex  Data Type:\n");
   printf(" %f+ %f *I\n",creal(n),cimag(n));



    return 0;
}
