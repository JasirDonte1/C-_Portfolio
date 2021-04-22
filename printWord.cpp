/*
 Jasir Massey-Campbell
 Assignment 1B
 October 2018
 C++ Programming (COS-213-GS007)
 
 
 This program uses a switch statement to return a number in word form i.e. "two" when given that number in number form. 
 */

#include <iostream>
using namespace std;

void PrintWord(int);

int main(int argc, const char * argv[]) {
    
    int userInput = 6;      //I set at 6 because while loop will keep asking for a number between 1-5
   
    while (userInput > 5 || userInput < 0){
        cout << "Enter a whole number 1 - 5 inclusive." << endl;
        cin >> userInput;
    }
    PrintWord(userInput);
    
    return 0;
}

void PrintWord(int input){
    
    string answer;
    
    if (input == 1){
        answer = "one";
    }else if  (input == 2){
        answer = "two";
    }else if  (input == 3){
        answer = "three";
    }else if  (input == 4){
        answer = "four";
    }else if  (input == 5){
        answer = "five";
    }
    
    cout << "You entered the number " << answer << endl;
   
}


/*
 Output ::
 
 Enter a whole number 1 - 5 inclusive.
 4
 You entered the number four
 
 */
