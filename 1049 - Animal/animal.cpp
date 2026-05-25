#include <bits/stdc++.h>
using namespace std;
int main(){
    string t1, t2, t3;
    getline(cin, t1);
    getline(cin, t2);
    getline(cin, t3);
    if(t1 == "vertebrado"){
        if(t2 == "ave"){
            if(t3 == "carnivoro") cout << "aguia" << endl;
            else cout << "pomba" << endl;
        } else {
            if(t3 == "onivoro") cout << "homem" << endl;
            else cout << "vaca" << endl;
        }
    } else {
        if(t2 == "inseto"){
            if(t3 == "hematofago") cout << "pulga" << endl;
            else cout << "lagarta" << endl;
        } else {
            if(t3 == "hematofago") cout << "sanguessuga" << endl;
            else cout << "minhoca" << endl;
        }
    }
}
