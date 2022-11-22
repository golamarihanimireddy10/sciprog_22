#include <stdio.h>
#include <math.h>

const double pi = 22.0 / 7.0;

int main(void) {

/* Declare variables */
   int i;
   float N=12;
   float a=0;
   float b=pi/3;
   float diff;
   float sum=tan(0)+tan(b);
   for(i=5;i<60;i=i+5){
    sum+=2*tan((i*pi)/180.0);
   }

   sum*=((b-a)/(2*N));

   printf("inum= %f\n",sum);
   printf("Log 2 Value is %lf\n",log(2.0));
   diff=sum-log(2.0);
   printf("The difference between Area and log 2 is = %f\n",diff);

}
