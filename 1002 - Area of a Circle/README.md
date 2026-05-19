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
