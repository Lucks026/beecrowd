# 1007 - Difference

**Plataforma:** Beecrowd  
**Dificuldade:** Iniciante  
**Link:** https://judge.beecrowd.com/pt/problems/view/1007

## Descrição

Leia 4 inteiros A, B, C e D. Calcule e imprima a diferença entre o produto de A e B e o produto de C e D: `DIFF = (A×B) - (C×D)`.

## Entrada

```
5
6
7
8
```

## Saída

```
DIFF = -26
```

## Soluções

### Java

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        System.out.println("DIFF = " + ((a * b) - (c * d)));
    }
}
```

### C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "DIFF = " << (a * b) - (c * d) << endl;
}
```

## Lógica

Dois produtos são calculados separadamente — (A×B) e (C×D) — e depois subtraídos. O resultado pode ser negativo, o que é totalmente válido. Usando `int` padrão pois os valores do enunciado não excedem o limite de 32 bits.

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
