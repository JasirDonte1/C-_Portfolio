//
//  main.cpp
// division calculator
//

#include <iostream>
using namespace std;
class DivByZero{
public:
    int numerator;
    int denomonator;
    
    int quotient();
};

int main(int argc, const char * argv[]) {
    int answer;
 
    DivByZero divCalculator;
    try{
        answer = divCalculator.quotient();
        if (answer != 0){throw answer;}
    }
    catch(int answer){
        cout << "= " << answer << endl;
    }
    return 0;
}

int DivByZero::quotient(){
    try {
        cout << "Set numerator" << endl;
        cin >> numerator;
        cout << "Set denomontor" << endl;
        cin >> denomonator;
        if (denomonator == 0)
        {
            int x = denomonator;
            throw x;
            
        }
    }
    catch (int x ) {
        cout << "Cant divide by zero" << endl;
    }
    int toReturn = 0;
    if (denomonator==0){toReturn = 0;}
    else if (denomonator != 0){toReturn = numerator/denomonator;}
    
    return toReturn;
}
