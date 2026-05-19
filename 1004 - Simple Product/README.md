# 1004 - Simple Product

**Plataforma:** Beecrowd  
**Dificuldade:** Iniciante  
**Link:** https://judge.beecrowd.com/pt/problems/view/1004

## Descrição

Leia dois inteiros A e B em linhas separadas e imprima o produto deles no formato `PROD = (A * B)`.

## Entrada

Dois inteiros A e B em linhas separadas.

```
3
9
```

## Saída

```
PROD = 27
```

## Soluções

### Java

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();
        System.out.println("PROD = " + (a * b));
    }
}
```

### C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    cout << "PROD = " << a * b << endl;
}
```

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |

## Lógica

A operação é simples: multiplicar dois inteiros e imprimir o resultado com o prefixo `PROD = `. O cuidado aqui é com o tipo de dado: o enunciado informa que A e B podem ser grandes, então uso `long long` em C++ e `long` em Java para evitar overflow em casos extremos.

A leitura é feita linha a linha (um número por linha), então tanto `cin >> a >> b` em C++ quanto `nextLong()` duas vezes em Java funcionam corretamente.
