#pragma once
#include <iostream>
#include <string>
using namespace std;

int reverse_print(int num) {
    string number = to_string(num);
    for (int i = number.length() - 1; i >= 0; i--) {
        cout << number[i];
    }
    return 0;
}