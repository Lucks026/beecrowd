# 1008 - Salary

**Plataforma:** Beecrowd  
**Dificuldade:** Iniciante  
**Link:** https://judge.beecrowd.com/pt/problems/view/1008

## Descrição

Leia o número de um funcionário, as horas trabalhadas e o valor por hora. Calcule e imprima o salário.

## Entrada

```
25
100
5.50
```

## Saída

```
NUMBER = 25
SALARY = U$ 550.00
```

## Soluções

### Java

```java
import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        int number = sc.nextInt();
        int hours = sc.nextInt();
        double rate = sc.nextDouble();
        System.out.println("NUMBER = " + number);
        System.out.printf("SALARY = U$ %.2f%n", hours * rate);
    }
}
```

### C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    int number, hours;
    double rate;
    cin >> number >> hours >> rate;
    cout << "NUMBER = " << number << endl;
    printf("SALARY = U$ %.2f\n", hours * rate);
}
```

## Lógica

Multiplicação direta de horas pelo valor/hora. O detalhe importante é o prefixo `U$` (dólar) na saída — diferente do `R$` de outros problemas. Salário formatado com 2 casas decimais usando `%.2f`.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |

## Java vs C++

Em C++ misturei cout e printf na mesma solucao: usei cout para o NUMBER (inteiro simples) e printf para o SALARY (precisa de %.2f). Podia ter usado so printf para os dois, mas preferi deixar assim para mostrar que da pra misturar quando faz sentido.

Em Java usei println para o NUMBER e printf para o SALARY. O Locale.US no Scanner e necessario porque o valor por hora e um double com ponto decimal.
