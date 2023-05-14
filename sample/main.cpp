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
    res = grm.eval("a = 2 - (3*2); b = 12 / a;");
    i = 0;
    for (auto var: res)
    {
        std::cout << i << ":" << var << std::endl;
        i++;
    }
    return 0;
}
