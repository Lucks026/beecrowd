# 1002 - Area of a Circle

**Plataforma:** Beecrowd  
**Dificuldade:** Iniciante  
**Link:** https://judge.beecrowd.com/pt/problems/view/1002

## Descrição

Leia um valor de ponto flutuante R (raio) e calcule a área de um círculo usando a fórmula `A = π × R²`.

## Entrada

Um valor real R.

```
2.00
```

## Saída

Área com 4 casas decimais no formato `A=valor`.

```
A=12.5664
```

## Soluções

### Java

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double r = sc.nextDouble();
        double area = Math.PI * r * r;
        System.out.printf("A=%.4f%n", area);
    }
}
```

### C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    double r;
    cin >> r;
    printf("A=%.4f\n", acos(-1.0) * r * r);
}
```

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |

## Lógica

A fórmula da área do círculo é `A = π × R²`. O ponto de atenção aqui é o valor de π: em Java uso `Math.PI`, que já tem precisão suficiente. Em C++ uso `acos(-1.0)`, que é um truque clássico para obter π sem depender de constantes da biblioteca.

A saída exige exatamente 4 casas decimais — em Java uso `printf("A=%.4f")` e em C++ uso `printf("A=%.4f\n")`. Repare que não há espaço entre `A=` e o valor, detalhe que causa erro se ignorado.
