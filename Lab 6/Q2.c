#include <stdio.h>

int main() {
    int num, isPrime=1;
    printf("Enter the number you want to check: ");
    scanf("%d", &num);
    if(num==1 ||num ==0)
        printf("Not a prime number");
    for(int i=2; i<num;i++){
        if(num%i==0)
            isPrime =0;
    }
    if (isPrime ==0)
        printf("Number is not a prime");
    else
        printf("Number is a prime");
   
}
