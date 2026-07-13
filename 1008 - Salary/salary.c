#include <stdio.h>

int main(){
    int number, hours;
    double rate;
    scanf("%d %d %lf", &number, &hours, &rate);
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", hours * rate);
    return 0;
}
