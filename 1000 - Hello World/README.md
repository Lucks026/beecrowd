# 1000 - Hello World!

**Plataforma:** Beecrowd  
**Dificuldade:** Iniciante  
**Link:** https://judge.beecrowd.com/pt/problems/view/1000

## Descrição

Imprimir a mensagem `Hello World!` na saída padrão.

## Entrada

Nenhuma entrada.

## Saída

```
Hello World!
```

## Soluções

### Java

```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello World!");
    }
}
```

### C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Hello World!" << endl;
}
```

## Resultado

| Linguagem | Status   | Tempo  |
|-----------|----------|--------|
| C++20     | Accepted | 0.000s |
| Java      | Accepted | -      |

## Java vs C++

Em C++ sao basicamente tres linhas: include, using namespace e o cout. Em Java da pra ver o quanto a linguagem e verbosa — tem que declarar a classe, o metodo com toda aquela assinatura enorme, e ainda usar System.out.println no lugar de um simples cout. O resultado na tela e identico, mas o trabalho nao e.

Para compilar e rodar localmente:
- C++: `g++ hello_world.cpp -o hello && ./hello`
- Java: `javac Main.java && java Main`
