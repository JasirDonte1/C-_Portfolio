/*
Jasir Massey-Campbell
Assignment 1A
C++ Programming (COS-213-GS007)
 
This program takes user input and compares each of the inputs to each other while storing the value of the largest number in a double.
 */


#include <iostream>
#include <string>
using namespace std;

double isBigger(double, double);

int main(int argc, const char * argv[]) {
    
    double checkingNum;       //user input will always go into checkin Num
    double largestNum = 0.0;         // checking num is compared to largest num to store bigger number
    
    cout << "Enter 15 numbers" << endl;
    
    for (int x=0; x < 15; x++){        //for loop is hard coded to loop 15 times
        
        cin >> checkingNum;             //checking Num stores user input
        
        if (x == 0){                     //largestNum is initialized with the first input
            largestNum = checkingNum;
        }else{                                      //isBigger function is called and returns the larger number between the current largestNum and the checkinNum
            
            largestNum = isBigger(largestNum, checkingNum);
        }
        
    }
    
    cout << "The largest number is " << largestNum << endl;   //at end of loop, statement prints the number stored in largestNum var
    
    return 0;
}

double isBigger(double x, double y){
    double largestNumber = x;
    
    if (x < y){                    //if x is less than y, y is new largest number
        largestNumber = y;
    }
    
    return largestNumber;    //returns the largest number between x and y
}




/*
 Output::
 
 Enter 15 numbers
 10
 3
 7
 9
 22
 12
 17
 34
 1
 6
 32
 30
 11
 14
 20
 The largest number is 34
 
 */
