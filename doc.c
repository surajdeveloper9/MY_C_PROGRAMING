// Online C compiler to run C program
#include <stdio.h>

int main() {
    // Write C code here
    printf("welcome all dear buddies");

    return 0;
}
// for nd sum of two numbers 
 #include <stdio.h>
int main() {
    int a,b,sum;
    printf("enter the value of a \n");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    sum=a+b;
printf("sum of two number is %d",sum);
    return 0;
}
// To find simple interest 
 #include <stdio.h>
int main() {
    float principal, rate, time, simpleInterest;
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    simpleInterest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", simpleInterest);
    return 0;
}
// to exchange  float to int
#include <stdio.h>
int main() {
    float f;
    int i;
    printf("enter a float value:");
    scanf("%f",&f);
    i=(int)f;
    printf("integer value is:%d\n",i);
    return 0;
}

