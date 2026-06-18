#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    long long y;
    cin >> x >> y;
    int cont = 1;
    for(long long i = 1; i <= y; i++){
        if(cont <= x - 1){
            cout << i << " ";
            cont++;
        } else {
            cout << i << endl;
            cont = 1;
        }
    }
}
