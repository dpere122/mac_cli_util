#include <iostream>
#include <string>
#include <fstream>
#include "m_header.h"
#include "document.h"
#include "stringbuffer.h"
#include "writer.h"
#define RAPIDJSON_HAS_STDSTRING 1
using namespace rapidjson;
using namespace std;

int main(int argc, const char * argv[]) {
    string name;
    string input_next;
    // insert code here...
    cout << "Hello, World! But hey what's your name?\n";
    cin >> name;
    printName(name);
    //begin local file creation
    cout << "Since this is your first time running this tool, can we create a file to store your preferences and data?(y/n)\n";
    cin >> input_next;
    if(input_next == "y"){
        initDataFile(name);
    }
    cin >> input_next;
    if(input_next == "exit"){
        return 0;
    }
    
    return 0;
}

void printName(string name){
    cout << "Hello "+name+"!\n";
}
//this function is responsible for creating a data file that
//will store all the data from this misc tool
int initDataFile(string userName){
    ofstream dataFile("CLI_DAT.json");
    Document document;
    document.SetObject();
    Value uName;
    uName.SetString(userName.c_str(),document.GetAllocator());
    document.AddMember("UserName",uName,document.GetAllocator());
    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    document.Accept(writer);
    string jsonString = buffer.GetString();
    cout << jsonString;
    return 0;
}
