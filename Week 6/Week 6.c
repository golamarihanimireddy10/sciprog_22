#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

    int n=5,p=3,q=4;
    int A[n][p];
    int B[p][q];
    int C[n][q];
    memset(C, 0, sizeof(C));
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            A[i][j]=i+j;
        }
    }

    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            B[i][j]=i-j;
        }
    }

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<q;j++)
            {
                C[i][j]=0;
                for(int k=0;k<p;k++){
                        C[i][j]+=A[i][k]*B[k][j];
            }
            }
            }

 printf("\nThe matrix A is \n");
 for(int i=0;i<n;i++){
    for(int j=0;j<p;j++){
      printf("%d\t ",A[i][j]);
     }printf("\n");
    }

     printf("\nThe matrix B is \n");
 for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
      printf("%d\t ",B[i][j]);
     }printf("\n");
    }

     printf("\nThe matrix C is \n");


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
            {
            printf("%d\t",C[i][j]);
            }
        printf("\n");
}

return 0;
}
