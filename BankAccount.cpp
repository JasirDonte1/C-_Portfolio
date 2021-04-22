
#include <vector>
#include <iostream>
using namespace std;

class Bank_Account{      //creates class Bank Account
public:
    Bank_Account(double);
    Bank_Account();
    bool check(double);
    void credit(double);
    void debit (double);
    void debit ();
    double getBalance();
    void setBalance(double);
private:
    
    double account_balance;
    
};
class Savings_Account: public Bank_Account{  //creates child of Bank Account: Savings Account
public:
    Savings_Account(double, double);
    double calculateInterest();
    double rate;
    
};
class Checking_Account: public Bank_Account{ //creates child of Bank Account: Checking
public:
    double fee;
    Checking_Account(double,double);
    void credit(double toAdd){               //if credit or debit in Checking is called, it subtracts fee
        toAdd = toAdd - fee;
        setBalance(getBalance() + toAdd);
    }
    void debit(double toSubtract){
        bool bCheck = check(getBalance() - toSubtract + fee);
        if(bCheck == true){
            toSubtract = toSubtract + fee;
            setBalance(getBalance() - toSubtract);
        }
    }
};


int main(int argc, const char * argv[]) {
    vector <Bank_Account> BankAccountList;
    Savings_Account savingsAccount1(100, .04); //Savings account created
    BankAccountList.push_back(savingsAccount1); //account added to vector
    cout << "Balance: " << savingsAccount1.getBalance() << endl; //base class function used
    
    
    
    return 0;
}
Checking_Account::Checking_Account(double balance, double setFee){
    
    fee = setFee;
    bool bCheck = check(balance);
    if (bCheck == true){
        setBalance(balance);   //makes sure account balance is not <= 0
    }else{
        setBalance(0);
    }
    
}
Savings_Account::Savings_Account(double balance, double setRate){
    rate = setRate;
    bool bCheck = check(balance); //bCheck = balance check 
    if (bCheck == true){
        setBalance(balance);
        credit(calculateInterest());
    }else{
        setBalance(0);
    }
}

double Savings_Account::calculateInterest(){
    double value = rate*getBalance();
 //   setBalance(getBalance()+value);   //sets new balance after function is called
    return value;
}

Bank_Account::Bank_Account(){
    account_balance = 0;
}
Bank_Account::Bank_Account(double balance){
    
    bool bCheck = check(balance);
    if (bCheck == true){
        account_balance = balance;
    }else{
        account_balance = 0;
    }
    
}
bool Bank_Account::check(double checkBalance){ //checks to make sure peforemed actions wont result in zero balance
    bool check = true;
    try {
        if (checkBalance < 0)
        {
            throw checkBalance;
        }
    }
    catch (double checkBalance ) {
        cout << "Initial balance is invaliad" << endl;
        check = false;
    }
    return check;
}
void Bank_Account::credit(double toAdd){
    account_balance = account_balance+toAdd;
}
void Bank_Account::debit(double toSubtract){
    bool check = true;
    try {
        if (toSubtract > account_balance)
        {
            throw toSubtract;
        }
    }
    catch (double toSubtract ) {
        cout << "The balance is less than the debit amount" << endl;
        check = false;
    }
    if (check == true){
        account_balance = account_balance - toSubtract;
    }
}
void Bank_Account::debit(){
    double wAmount;
    cout << "How much money would you like to withdraw?" << endl;
    cin >> wAmount;
    account_balance = account_balance - wAmount;
}


double Bank_Account::getBalance(){
    return account_balance;
}
void Bank_Account::setBalance(double setBalance){
    account_balance = setBalance;
}

