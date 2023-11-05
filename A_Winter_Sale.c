#include <stdio.h>
int main ()
{
double x,p;
scanf("%lf %lf",&x,&p);
double price=(100*p)/(100-x);
printf("%.2lf",price);

    return 0;
}