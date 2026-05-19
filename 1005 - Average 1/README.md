# 1005 - Average 1

**Plataforma:** Beecrowd  
**Dificuldade:** Iniciante  
**Link:** https://judge.beecrowd.com/pt/problems/view/1005

## Descrição

Leia 4 valores reais e calcule a média aritmética simples, imprimindo no formato `MEDIA = X.X`.

## Entrada

```
5.0
6.0
7.0
8.0
```

## Saída

```
MEDIA = 6.5
```

## Soluções

### Java

```java
import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        double c = sc.nextDouble();
        double d = sc.nextDouble();
        System.out.printf("MEDIA = %.1f%n", (a + b + c + d) / 4.0);
    }
}
```

### C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    printf("MEDIA = %.1f\n", (a + b + c + d) / 4.0);
}
```

## Lógica

Soma dos 4 valores dividida por 4.0 (ponto flutuante). Dividir por `4` inteiro em vez de `4.0` pode gerar truncamento em algumas linguagens — por isso uso `4.0` explicitamente. Saída com 1 casa decimal usando `%.1f`.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |

## Java vs C++

Os dois ficaram bem parecidos nesse problema. A unica diferenca real e o Locale.US no Scanner do Java, necessario para leitura de decimais com ponto. Em C++ o cin resolve sem configuracao.

Vale notar que dividir por 4 (inteiro) em vez de 4.0 nao causaria problema aqui porque as variaveis ja sao double — a divisao seria promovida automaticamente. Mas prefiro deixar 4.0 explicito para nao depender de comportamento implicito da linguagem.
