# 1009 - Salary with Bonus

**Plataforma:** Beecrowd  
**Dificuldade:** Iniciante  
**Link:** https://judge.beecrowd.com/pt/problems/view/1009

## Descrição

Leia o nome de um funcionário, seu salário fixo e o total de vendas. O bônus é 15% das vendas. Imprima o salário total.

## Entrada

```
Joao
500.00
1230.30
```

## Saída

```
TOTAL = R$ 684.54
```

## Soluções

### Java

```java
import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        String name = sc.next();
        double salary = sc.nextDouble();
        double sales = sc.nextDouble();
        double total = salary + (sales * 0.15);
        System.out.println("TOTAL = R$ " + String.format(Locale.US, "%.2f", total));
    }
}
```

### C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    string name;
    double salary, sales;
    cin >> name >> salary >> sales;
    printf("TOTAL = R$ %.2f\n", salary + sales * 0.15);
}
```

## Lógica

O nome é lido mas não é impresso — serve apenas para identificar o funcionário internamente. O bônus é 15% do valor de vendas (`sales * 0.15`), somado ao salário fixo. Resultado formatado com 2 casas decimais e prefixo `R$`.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
