
/*
Jasir Massey-Campbell
Assignment 5B
C++ Programming (COS-213-GS007)
 
This program is a simple program. It explores the uses of classes, encapsulation, polymophism, type changing and input streaming.
 
 This program creats a class called Array. This class holds one string value and two fucntions that set the string value. An array of the 'Array' class is created storing 5 ints then 5 strings. Then prints the values.
*/
 

#include <string>
#include <iostream>
using namespace std;

class Array{
public:
    string value;
    void storeValues(int);
    void storeValues(string);
};

int main(int argc, const char * argv[]) {
    Array stringArray[10];
    Array integerArray[10];
    
//Enter 5 integers to be stored in the variable integerArray
    cout << "Enter  5 integers." << endl;
    for(int x = 0; x<5; x++){
        int temp;
        cin >> temp;    //user input is temporarily stored in var temp.
        integerArray[x].storeValues(temp);  //class function
    }
    
//Enter 5 strings to be stored in the variable stringArray
    cout << "Enter  5 strings" << endl;
    for(int x = 0; x<5; x++){
        string temp;
        cin >> temp;
        stringArray[x].storeValues(temp);
    }
    
//print array values
    cout << "Print integer array values" << endl;
    for(int x = 0; x<5; x++){
        cout << integerArray[x].value << endl;
    }
    
    cout << endl << "Print string array values" << endl;
    for(int x = 0; x<5; x++){
        cout << stringArray[x].value << endl;
    }

    return 0;
}

void Array::storeValues(int num){
    value = to_string(num);
}
void Array::storeValues(string string){
    value = string;
}
        
