# 1010 - Simple Calculate

**Plataforma:** Beecrowd  
**Dificuldade:** Iniciante  
**Link:** https://judge.beecrowd.com/pt/problems/view/1010

## Descrição

Leia o código de um produto, a quantidade e o valor unitário. Calcule e imprima o valor total.

## Entrada

```
1
5
1.50
```

## Saída

```
CODIGO: 1 QUANTIDADE: 5 VALOR UNITARIO: R$ 1.50
VALOR TOTAL: R$ 7.50
```

## Soluções

### Java

```java
import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        int code = sc.nextInt();
        int qty = sc.nextInt();
        double unitPrice = sc.nextDouble();
        double total = qty * unitPrice;
        System.out.printf("CODIGO: %d QUANTIDADE: %d VALOR UNITARIO: R$ %.2f%n", code, qty, unitPrice);
        System.out.printf("VALOR TOTAL: R$ %.2f%n", total);
    }
}
```

### C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    int code, qty;
    double unitPrice;
    cin >> code >> qty >> unitPrice;
    printf("CODIGO: %d QUANTIDADE: %d VALOR UNITARIO: R$ %.2f\n", code, qty, unitPrice);
    printf("VALOR TOTAL: R$ %.2f\n", qty * unitPrice);
}
```

## Lógica

Multiplicação simples de quantidade pelo valor unitário. O principal desafio deste problema é o formato de saída: tudo na primeira linha com os três campos separados por espaço, e o total na segunda linha. Atenção ao `%.2f` para garantir sempre 2 casas decimais no valor monetário.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
