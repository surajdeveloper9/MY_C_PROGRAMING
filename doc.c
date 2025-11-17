to find sum of two number
// Online C compiler to run C program online
#include <stdio.h>
int main() {
    // to add two number
    int a,b,s;
    s=a+b;
    printf("sum of two numberis s");

    return 0;
}
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
 //simple intrest
#include <stdio.h>
int main() {
    float p,t,r,si;
    printf("enter the value of princple");
    scanf("%d",p);
    printf("enter the time");
    scanf("%d",t);
    printf("enter the rate of intrest");
    scanf("%d",r);
    si=(p*t*r)/100;
    printf("simple intrest is= %.2f",si);
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

