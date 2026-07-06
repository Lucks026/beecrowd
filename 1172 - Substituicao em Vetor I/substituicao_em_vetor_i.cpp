#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i = 0; i < 10; i++){
        int x;
        cin >> x;
        if(x <= 0) x = 1;
        cout << "X[" << i << "] = " << x << endl;
    }
}
