#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    printf("%d hora(s)\n", t / 3600);
    printf("%d minuto(s)\n", (t % 3600) / 60);
    printf("%d segundo(s)\n", t % 60);
}
