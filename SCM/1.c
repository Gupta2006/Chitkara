#include <stdio.h>

int main(){
    printf("For Addition Press 1\n");
    printf("For Subtraction Press 2\n");
    printf("For Multiplication Press 3\n");
    printf("For Divison Press 4\n");
    printf("Enter the Operation to be perform :\n");
    int e;
    scanf("%d",&e);
    printf("Enter the numbers:\n");
    float a,b;
    scanf("%f %f",&a,&b);
    if(e==1){
        printf("The sum of numbers %f and %f is %f",a,b,a+b);
    }
    else if (e==2)
    {
        printf("The subtraction of numbers %f and %f is %f",a,b,a-b);
    }
    else if (e==3)
    {
        printf("The multiplication of numbers %f and %f is %f",a,b,a*b);
    }
    else if (e==4)
    {
        printf("The division of numbers %.2f and %.2f is %.2f",a,b,a/b);
    }
    else{
        printf("No vaid input");
    }
    return 0;
}