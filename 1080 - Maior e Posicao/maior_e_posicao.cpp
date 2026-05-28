#include <bits/stdc++.h>
using namespace std;
int main(){
    int maior, x, pos = 1;
    cin >> maior;
    for(int i = 2; i <= 100; i++){
        cin >> x;
        if(x > maior){
            maior = x;
            pos = i;
        }
    }
    cout << maior << endl;
    cout << pos << endl;
}
