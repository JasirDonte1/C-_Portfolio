/*
Skills used: operator overloading, classes and object 
*/


#include <sstream>
#include <iostream>
using namespace std;

class RationalNumber{
public:
    RationalNumber();
    RationalNumber(int numer, int denom){
        numerator = numer;
        denomonator = denom;
    };
    RationalNumber operator+( const RationalNumber);
    RationalNumber operator-( const RationalNumber);
    RationalNumber operator/( const RationalNumber);
    RationalNumber operator*( const RationalNumber);
    RationalNumber operator=( const RationalNumber);

    bool isDone = false;
    
    string toRationalString();
    double toDouble();
    
    void simplify();
    void setDenomonator(int);
    void setNumerator(int);
    int getNumerator();
    int getDenomonator();
    
private:
    int numerator;
    int denomonator;
};

int main(int argc, const char * argv[]) {
    
    int x = 5;        //sets values for fractions 1 and 2
    int y = 16;
    int a = 1;
    int b = 4;
    RationalNumber fraction1, fraction2;
    fraction1.setNumerator(x);
    fraction1.setDenomonator(y);
    fraction2.setNumerator(a);
    fraction2.setDenomonator(b);
    
    cout << "Addition" << endl;
    RationalNumber fraction3 = fraction1 + fraction2;
    cout << fraction3.toRationalString() << endl;
    cout << "Subtract" << endl;
    RationalNumber fraction4 = fraction1 - fraction2;
    cout << fraction4.toRationalString()<< endl;
    cout << "Multiply" << endl;
    RationalNumber fraction5 = fraction1 * fraction2;
    cout << fraction5.toRationalString()<< endl;
    cout << "Division" << endl;
    RationalNumber fraction6 = fraction1 / fraction2;
    cout << fraction6.toRationalString()<< endl;
    cout << fraction6.toDouble()<< endl;
    return 0;
}


RationalNumber::RationalNumber(){
    if(denomonator==0){denomonator=1;}
}

string RationalNumber::toRationalString(){
    stringstream ss;
    string sNumerator = to_string(numerator);
    string sDenomonator = to_string(denomonator);
    string sFraction = sNumerator + "/" + sDenomonator;
    return sFraction;
}

double RationalNumber::toDouble(){
    double dFraction;
    dFraction = (double)numerator/(double)denomonator;
    return dFraction;
}

RationalNumber RationalNumber::operator+(const RationalNumber x){
    int multiplier1 = denomonator, multiplier2 = x.denomonator;
    RationalNumber newFraction;
    newFraction.numerator = (numerator * multiplier2) + (x.numerator * multiplier1);
    newFraction.denomonator = denomonator * x.denomonator;
    newFraction.simplify();
    return newFraction;
}
RationalNumber RationalNumber::operator-(const RationalNumber x){
    int multiplier1 = denomonator, multiplier2 = x.denomonator;
    RationalNumber newFraction;
    newFraction.numerator = (numerator * multiplier2) - (x.numerator * multiplier1);
    newFraction.denomonator = denomonator * x.denomonator;
    newFraction.simplify();
    return newFraction;
}
RationalNumber RationalNumber::operator*(const RationalNumber x){
    RationalNumber newFraction;
    newFraction.numerator = numerator * x.numerator ;
    newFraction.denomonator = denomonator * x.denomonator;
    newFraction.simplify();
    return newFraction;
}
RationalNumber RationalNumber::operator/(const RationalNumber x){
    RationalNumber newFraction;
    newFraction.numerator = numerator * x.denomonator ;
    newFraction.denomonator = denomonator * x.numerator;
    newFraction.simplify();
    return newFraction;
}
RationalNumber RationalNumber::operator=(const RationalNumber x){
    RationalNumber newFraction;
    newFraction.numerator =  x.numerator ;
    newFraction.denomonator = x.denomonator;
    return newFraction;
}


void RationalNumber::simplify(){
    if(isDone==false){
        if(denomonator%2==0 && numerator%2==0){    //condtion that both numbers are even
            while(denomonator%2==0 && numerator%2==0){
                denomonator = denomonator/2;
                numerator = numerator/2;
            }
        }
        
        if(denomonator%3==0 && numerator%3==0){
            while(denomonator%3==0 && numerator%3==0){
                denomonator = denomonator/3;
                numerator = numerator/3;
            }
            simplify();
            
        }
        if(denomonator%5==0 && numerator%5==0){
            while(denomonator%5==0 && numerator%5==0){
                denomonator = denomonator/5;
                numerator = numerator/5;
            }
            simplify();
        }
        if(denomonator%7==0 && numerator%7==0){
            while(denomonator%7==0 && numerator%7==0){
                denomonator = denomonator/7;
                numerator = numerator/7;
            }
            simplify();
        }
        
        isDone = true;
        
    }
}

void RationalNumber::setNumerator(int num){
    numerator = num;
}
void RationalNumber::setDenomonator(int den){
    denomonator = den;
}

int RationalNumber::getNumerator(){
    return numerator;
}

int RationalNumber::getDenomonator(){
    return denomonator;
}




