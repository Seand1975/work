#include <stdio.h>
int main(){
    char operators;
    double first,second;
    printf("Enter operator to be used\n");
    scanf("%c",&operators);
    printf("Enter values :");
    scanf("%lf%lf",&first,&second);

    switch(operators){
case '+':
    printf("%lf + %lf = %lf",first,second,(first + second));
    break;
    case '-':
    printf("%lf - %lf = %lf",first,second,(first - second));
    break;
    case '*':
    printf("%lf * %lf = %lf",first,second,(first * second));
    break;
    case '/':
        if(second != 0)
    printf("%lf / %lf = %lf",first,second,(first / second));
    break;
    default:
        printf("Invalid operator");

    }
    return 0;
}
