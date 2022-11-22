#include <stdio.h>
int gcd(int n1, int n2);
int main() {
    int n1, n2;
    printf("Enter the two positive integers for finding the Greatest Common Divisor: ");
    scanf("%d %d", &n1, &n2);
    if(n2==0){
        printf("G.C.D of %d and %d is %d.", n1, n2, n1);
    }
    else{
    printf("G.C.D of %d and %d is %d.", n1, n2, gcd(n1, n2));
    }
    return 0;
}

int gcd(int n1, int n2) {
    int temp;
    while (n2 != 0){
    temp=n2;
    n2=n1%n2;
    n1=temp;
    }
    return n1;
}
