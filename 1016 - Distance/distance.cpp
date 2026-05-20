#include <bits/stdc++.h>
using namespace std;
int main(){
    double v, a, t;
    cin >> v >> a >> t;
    v = v / 3.6;
    printf("%.3f m\n", v * t + (a * t * t) / 2.0);
}
