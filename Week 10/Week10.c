#include<stdio.h>
#include<stdlib.h>
void discrotation(int n, int s, int d, int i)
{
 if(n!=1)
{
    discrotation(n-1,s,i,d);
    printf("So move the disc from %d to %d\n",s,d);
	discrotation(n-1,i,d,s);
}
 else
   {
     printf("So move the disc from %d to %d \n", s,d);
   }

}

int main(void)
{
  int n = 6;
  discrotation(n,2,1,3);
  return 0;
}
