
#include <iostream>
using namespace std;

class SavingsAccount{
public:
    static double annualInterestRate;
    static void modifyInterestRate();
    double calculateMonthlyInterest();
    void setBalance(double);
    double calculateBalance();
private:
    double savingsBalance;
    
    
};



int main() {
    double savings1, savings2, interest;
    char changeRateAnswer;
    cout << "Enter the savings amount for 2 accounts, John and James" << endl;
    cout << "Enter balance for account 1:" << endl;
    cin >> savings1;
    cout << "Enter balance for account 2:" << endl;
    cin >> savings2;
    cout << "Enter annual interest rate:"<< endl;
    cin >> interest;
    
    SavingsAccount account1, account2;
    account1.setBalance(savings1);
    account2.setBalance(savings2);
    
    
    
    cout << "The interest for account 1 would be " << account1.calculateMonthlyInterest() << "and the balance after one month would be " << account1.calculateBalance() << endl << endl << "Would you like to change the interest rate? (Y or N): "<< endl;
    cin >> changeRateAnswer;
    
    if (changeRateAnswer == 'Y'){
        while (changeRateAnswer != 'N')
        {
            account1.modifyInterestRate();
            account1.calculateMonthlyInterest();
            account2.calculateMonthlyInterest();
            
            cout << "The interest for account 1 would be " << account1.calculateMonthlyInterest() << "and the balance after one month would be " << account1.calculateBalance() << endl << endl << "Would you like to change the interest rate? (Y or N): "<< endl;
            
            cin >> changeRateAnswer;
        }
    }
    cout << "Goodbye!" << endl;

    return 0;
}

void SavingsAccount::modifyInterestRate(){
    double interest;
    cin >> interest;
    annualInterestRate = interest;
}


void SavingsAccount::setBalance(double input){
    savingsBalance = input;
}



double SavingsAccount::calculateMonthlyInterest(){
    return savingsBalance * annualInterestRate / 12;
}
double SavingsAccount::calculateBalance(){
    return calculateMonthlyInterest() + savingsBalance;
}


