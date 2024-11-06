//
//  stringStream.cpp
//  Nov6th
//
//  Created by Parsa Faraji on 11/6/24.
//

#include "stringStream.hpp"
#include <iostream>
using namespace std;
#include <iomanip>
#include <sstream>

string numberInput(double number) {
    stringstream stream;
    stream << fixed << setprecision(2) << number;
    string str = stream.str();
    cout << str << endl;
}
