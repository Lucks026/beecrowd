#include <stdio.h>

int main(){
    double v[3];
    scanf("%lf %lf %lf", &v[0], &v[1], &v[2]);
    for(int i = 0; i < 2; i++)
        for(int j = i + 1; j < 3; j++)
            if(v[j] < v[i]){ double t = v[i]; v[i] = v[j]; v[j] = t; }
    double a = v[2], b = v[1], c = v[0];
    if(a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if(a * a == b * b + c * c) printf("TRIANGULO RETANGULO\n");
        else if(a * a > b * b + c * c) printf("TRIANGULO OBTUSANGULO\n");
        else printf("TRIANGULO ACUTANGULO\n");
        if(a == b && b == c) printf("TRIANGULO EQUILATERO\n");
        else if(a == b || b == c) printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
