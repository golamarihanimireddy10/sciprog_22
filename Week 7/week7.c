#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int fact (int n);
int main(void){

  int i, order;
  double e=1, *t;
  printf("enter the polynomial order\n");

if(scanf("%d",&order)!=1){
  printf("You did not enter any number");
  return 1;
  }


  t=malloc(order*sizeof(double));
  for(i=0;i<order;i++)
         {
	  t[i] = 1.0/ (double) fact(i +1);
 	  printf("\ne t for order %d is %1.14f",order,t[i]);
	  e = e+t[i];
         }
free(t);
//printf("%f",exp(1.0));
printf("\n e is interpretaed as %.10lf with difference %.10lf",e,fabs(e-exp(1.0)));

  return 0;
}

int fact (int n) {
if (n<0){
  printf("n must be a positive number");
  return(-1);
  }
else if (n==0) return 1;
else return n*fact(n-1) ;

}
