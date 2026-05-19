#include <bits/stdc++.h>
using namespace std;

int main(){
    int number, hours;
    double rate;
    cin >> number >> hours >> rate;
    cout << "NUMBER = " << number << endl;
    printf("SALARY = U$ %.2f\n", hours * rate);
}
