#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long fat = 1;
    for(int i = 2; i <= n; i++){
        fat *= i;
    }
    cout << fat << endl;
}
