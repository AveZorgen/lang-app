#include <iostream>
#include "calc.h"
#include "gram.h"

int main()
{
    std::string expression = "9- 2 * (1 + 2) / 1 ; 10 * 20 / 10; 30 - 40";
    Calc clc;
    std::vector<int> res = clc.eval(expression);
    std::cout << "Result :" << std::endl;
    int i = 0;
    for (auto var: res)
    {
        std::cout << i << ":" << var << std::endl;
        i++;
    }

    Gram grm;
    std::string console = grm.eval("func f(x,y) { a = x + y; c = a * z; return c - a; } z = 2 * 4; b = f(z, 3); d = input(); println(z, b); print(d*3);");
    std::cout << console << std::endl;
    return 0;
}
