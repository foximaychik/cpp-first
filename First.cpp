﻿#include <iostream>
using namespace std;
#include <string>

int main()
{
    string name = "";
    cout << "Write your name: \n";
    cin >> name;
    cout << "Hello, " + name + "!";
    return 0;
}
