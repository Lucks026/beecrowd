# 1011 - Sphere

**Plataforma:** Beecrowd  
**Dificuldade:** Iniciante  
**Link:** https://judge.beecrowd.com/pt/problems/view/1011

## Descrição

Leia o raio de uma esfera e calcule o volume usando a fórmula `V = (4/3) × π × R³`.

## Entrada

```
3.00
```

## Saída

```
VOLUME = 113.0973
```

## Soluções

### Java

```java
import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double r = sc.nextDouble();
        double volume = (4.0 / 3.0) * Math.PI * r * r * r;
        System.out.printf("VOLUME = %.4f%n", volume);
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
    printf("VOLUME = %.4f\n", (4.0 / 3.0) * acos(-1.0) * r * r * r);
}
```

## Lógica

A fórmula do volume da esfera envolve três pontos críticos: usar `4.0/3.0` (ponto flutuante, não inteiro), elevar R à terceira potência (`r * r * r`), e usar um valor preciso de π. Em Java, `Math.PI` resolve isso. Em C++, o clássico `acos(-1.0)` retorna π com precisão máxima do tipo `double`. Saída com 4 casas decimais.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
