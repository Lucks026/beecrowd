#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    const char *meses[] = {"", "January", "February", "March", "April",
        "May", "June", "July", "August", "September",
        "October", "November", "December"};
    printf("%s\n", meses[n]);
    return 0;
}
