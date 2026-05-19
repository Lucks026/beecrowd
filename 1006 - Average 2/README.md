# 1006 - Average 2

**Plataforma:** Beecrowd  
**Dificuldade:** Iniciante  
**Link:** https://judge.beecrowd.com/pt/problems/view/1006

## Descrição

Leia 3 valores reais A, B e C e calcule a média ponderada: `(A×2 + B×3 + C×5) / 10`.

## Entrada

```
2.0
3.0
5.0
```

## Saída

```
MEDIA = 4.0
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
        double media = (a * 2 + b * 3 + c * 5) / 10.0;
        System.out.printf("MEDIA = %.1f%n", media);
    }
}
```

### C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    printf("MEDIA = %.1f\n", (a * 2 + b * 3 + c * 5) / 10.0);
}
```

## Lógica

Média ponderada: cada nota tem um peso diferente (A=2, B=3, C=5). A soma dos pesos é 10, então divide-se por 10.0. Diferente da média simples do 1005, aqui os valores têm importâncias distintas — conceito muito usado em sistemas de avaliação e machine learning.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
