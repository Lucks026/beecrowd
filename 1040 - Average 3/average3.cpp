#include <bits/stdc++.h>
using namespace std;
int main(){
    double a, b, c;
    cin >> a >> b >> c;
    double media = (a*2 + b*3 + c*5) / 10.0;
    printf("Media: %.1f\n", media);
    if(media >= 5.0){
        cout << "Aluno aprovado." << endl;
    } else {
        double exame; cin >> exame;
        double final_ = (media + exame) / 2.0;
        cout << "Aluno em exame final." << endl;
        printf("Media final: %.1f\n", final_);
        if(final_ >= 5.0) cout << "Aluno aprovado." << endl;
        else cout << "Aluno reprovado." << endl;
    }
}
