#include <bits/stdc++.h>
using namespace std;
int main(){
    int par[5], impar[5], np = 0, ni = 0;
    for(int k = 0; k < 15; k++){
        int v;
        cin >> v;
        if(v % 2 == 0){
            par[np++] = v;
            if(np == 5){
                for(int i = 0; i < 5; i++) cout << "par[" << i << "] = " << par[i] << endl;
                np = 0;
            }
        } else {
            impar[ni++] = v;
            if(ni == 5){
                for(int i = 0; i < 5; i++) cout << "impar[" << i << "] = " << impar[i] << endl;
                ni = 0;
            }
        }
    }
    for(int i = 0; i < ni; i++) cout << "impar[" << i << "] = " << impar[i] << endl;
    for(int i = 0; i < np; i++) cout << "par[" << i << "] = " << par[i] << endl;
}
