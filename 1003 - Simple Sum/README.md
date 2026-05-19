# 1003 - Simple Sum

**Plataforma:** Beecrowd  
**Dificuldade:** Iniciante  
**Link:** https://judge.beecrowd.com/pt/problems/view/1003

## Descrição

Leia dois valores reais A e B e imprima a soma no formato `SOMA = X.X`.

## Entrada

```
3.0
4.5
```

## Saída

```
SOMA = 7.5
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
        System.out.printf("SOMA = %.1f%n", a + b);
    }
}
```

### C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b;
    cin >> a >> b;
    printf("SOMA = %.1f\n", a + b);
}
```

## Lógica

Leitura de dois valores reais e impressão da soma com exatamente 1 casa decimal. O ponto de atenção é usar `%.1f` para garantir o formato correto. Em Java é necessário definir `Locale.US` no Scanner para que o separador decimal seja o ponto — sem isso, em ambientes com locale brasileiro, a leitura pode falhar.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
