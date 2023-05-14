#pragma once
#include "calc.h"
#include "gram.h"
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Collections;

namespace C {
    public ref class CalcNet{
        Calc* calc;
        Gram* gram;
    public:
        CalcNet() { calc = new Calc; }
        System::String^ eval(System::String^ expression){
            std::string s_tmp = "";
            std::string s = msclr::interop::marshal_as<std::string>(expression);

            std::vector<int> res = calc->eval(s);
            for (auto var: res)
            {
                s_tmp += std::to_string(var) + ", ";
            }
            res = gram->eval(s);
            for (auto var: res)
            {
                s_tmp += std::to_string(var) + ", ";
            }
            System::String^ s_res = gcnew System::String(s_tmp.c_str());
            return s_res;
        }
    };
}



