#include <iostream>
#include <string>
#include "m_header.h"

using namespace std;

int main(int argc, const char * argv[]) {
    string name;
    string input_next;
    // insert code here...
    cout << "Hello, World! But hey what's your name?\n";
    cin >> name;
    printName(name);
    //begin local file creation
    cout << "Since this is your first time running this tool, can we create a file to store your preferences and data?(y\n)\n";
    cin >> input_next;
    if(input_next == "y"){
        
    }
    
    return 0;
}

void printName(string name){
    cout << "Hello "+name+"!\n";
}
//this function is responsible for creating a data file that
//will store all the data from this misc tool
int createDataFile(){
    return 0;
}
