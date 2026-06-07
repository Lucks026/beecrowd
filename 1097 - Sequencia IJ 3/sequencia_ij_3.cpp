#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i = 1; i <= 9; i += 2){
        int jStart = i + 6;
        for(int j = jStart; j >= jStart - 2; j--){
            cout << "I=" << i << " J=" << j << endl;
        }
    }
}
