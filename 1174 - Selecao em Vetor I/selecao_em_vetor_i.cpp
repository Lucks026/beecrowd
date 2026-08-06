#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i = 0; i < 100; i++){
        double v;
        cin >> v;
        if(v <= 10) printf("A[%d] = %.1f\n", i, v);
    }
}
