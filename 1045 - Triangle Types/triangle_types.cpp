#include <bits/stdc++.h>
using namespace std;
int main(){
    double a, b, c; cin >> a >> b >> c;
    if(a < b+c && b < a+c && c < a+b){
        double arr[] = {a,b,c}; sort(arr,arr+3);
        double x=arr[0], y=arr[1], z=arr[2];
        if(z*z == x*x+y*y) cout << "Retangulo" << endl;
        else if(z*z > x*x+y*y) cout << "Obtusangulo" << endl;
        else cout << "Acutangulo" << endl;
    } else cout << "Invalido" << endl;
}
