#include <bits/stdc++.h>
using namespace std;
int main(){
    double arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    double a = arr[2], b = arr[1], c = arr[0];
    if(a >= b + c){
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if(a * a == b * b + c * c) cout << "TRIANGULO RETANGULO" << endl;
        else if(a * a > b * b + c * c) cout << "TRIANGULO OBTUSANGULO" << endl;
        else cout << "TRIANGULO ACUTANGULO" << endl;
        if(a == b && b == c) cout << "TRIANGULO EQUILATERO" << endl;
        else if(a == b || b == c) cout << "TRIANGULO ISOSCELES" << endl;
    }
}
