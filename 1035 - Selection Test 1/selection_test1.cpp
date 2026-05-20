#include <bits/stdc++.h>
using namespace std;
int main(){
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double media = (a + b + c + d) / 4.0;
    printf("Media: %.1f\n", media);
    if(media >= 7.0) cout << "Aluno aprovado." << endl;
    else if(media >= 5.0) cout << "Aluno em recuperacao." << endl;
    else cout << "Aluno reprovado." << endl;
}
