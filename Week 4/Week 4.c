#include <stdio.h>
#include <math.h>

float converting(float num1);
int main(void) {
    int N=12;
    float a[N+1];
    float sum;
for(int i=0;i<=N;i++){
        a[i]=tan(converting(5*i));
}
sum = a[0] + a[N];

for (int i = 1; i < N; i++) {
        sum = sum + (2* a[i]);
}

sum= (converting(60)/(2*N))*sum;
printf("\nThe Exact area is %f and the Approximate nearly area is %f\n",log(2.0),area,);

}

float converting(float degree) {

   /* local variable declaration */
   float radian;
   radian = (((degree) *  M_PI) / 180.0 );
   return radian;
}
