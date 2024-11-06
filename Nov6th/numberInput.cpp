//
//  numberInput.cpp
//  Nov6th
//
//  Created by Parsa Faraji on 11/6/24.
//

#include "numberInput.hpp"

string numberInput(double number) {
    stringstream stream;
    stream << fixed << setprecision(2) << number;
    string str = stream.str();
    return str;
}
