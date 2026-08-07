#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int arr[] = {a, b, c};
    for(int i = 0; i < 2; i++)
        for(int j = i + 1; j < 3; j++)
            if(arr[j] < arr[i]){ int t = arr[i]; arr[i] = arr[j]; arr[j] = t; }
    printf("%d\n%d\n%d\n", arr[0], arr[1], arr[2]);
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}
