# 1001 - Extremely Basic

**Plataforma:** Beecrowd  
**Dificuldade:** Iniciante  
**Link:** https://judge.beecrowd.com/pt/problems/view/1001

## Descrição

Leia dois inteiros A e B e imprima a soma deles no formato `X = (A + B)`.

## Entrada

Dois inteiros A e B em linhas separadas.

```
10
9
```

## Saída

```
X = 19
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
        System.out.println("X = " + (a + b));
    }
}
```

### C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    cout << "X = " << a + b << endl;
}
```

## Resultado

| Linguagem | Status   |
|-----------|----------|
| C++       | Accepted |
| Java      | Accepted |
