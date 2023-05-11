//
//  main.cpp
//  CPP_tuts
//
//  Created by Daniel Perez on 5/10/23.
//

#include <iostream>
#include <string>
#include "m_header.h"

using namespace std;

int main(int argc, const char * argv[]) {
    string name;
    // insert code here...
    cout << "Hello, World! But hey what's your name?\n";
    cin >> name;
    printName(name);
    return 0;
}

void printName(string name){
    cout << "Hello "+name+"!\n";
}
