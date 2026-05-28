#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    if(x > y) swap(x, y);
    int soma = 0;
    for(int i = x + 1; i < y; i++){
        if(i % 2 != 0) soma += i;
    }
    cout << soma << endl;
}
