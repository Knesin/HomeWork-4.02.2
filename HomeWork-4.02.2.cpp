﻿#include <iostream>
#include "foo.h"

int main()
{
    int a = 0;
    int b = 1;
    if (a = 1) {// семантическая ошибка (a == 0)
        B != 0;// синтаксическая ошибка (надо писать b) // семантическая ошибка (b = 0) 
    }
    std::сout << "Hello World!\n"; // синтаксическая ошибка (русская с)
    b = foo(); // ошибка линковки (не определена функция inf foo();
    std::cout << b;
}
