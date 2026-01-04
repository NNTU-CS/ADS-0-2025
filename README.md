# ADS-0 Тренировочный репозиторий курса АиСД

![GitHub pull requests](https://img.shields.io/github/issues-pr/NNTU-CS/ADS-0-2025)
![GitHub closed pull requests](https://img.shields.io/github/issues-pr-closed/NNTU-CS/ADS-0-2025)

<!---![Relative date](https://img.shields.io/date/1685566800) -->


### Задача

> Написать реализацию алгоритма Евклида (НОД)

Реализацию алгоритма вычисления наибольшего общего делителя (НОД) двух целых чисел необходимо поместить между двумя фигурными скобками функции **gcd**, определенной в файле **src/alg.cpp**

```cpp
int gcd(int a,int b) {
   ...
}
```

Параметры **a** и **b** являются числами, НОД которых мы считаем.


*Примечание*

Функцию **gcd** можно использовать следующим образом:

```cpp
#include <iostream>
#include "alg.h"

int main() {
    std::cout << gcd(10,15) << std::endl;
    return 0;
}

```

