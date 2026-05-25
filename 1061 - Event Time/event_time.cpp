#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    string lixo;
    int d1, h1, m1, s1, d2, h2, m2, s2;
    cin >> lixo >> d1;
    cin >> h1 >> c >> m1 >> c >> s1;
    cin >> lixo >> d2;
    cin >> h2 >> c >> m2 >> c >> s2;
    int total = (d2*86400 + h2*3600 + m2*60 + s2) - (d1*86400 + h1*3600 + m1*60 + s1);
    int dias = total / 86400; total %= 86400;
    int horas = total / 3600; total %= 3600;
    int minutos = total / 60;
    int segundos = total % 60;
    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;
}
