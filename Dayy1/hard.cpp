#include <iostream>
using namespace std;


class Account {
protected:
    int balance; 
public:
    Account(int bal) : balance(bal) {}
    virtual void calculateInterest() = 0; 
    virtual ~Account() {}
};


class SavingsAccount : public Account {
    double rate; 
    int time;    
public:
    SavingsAccount(int bal, double r, int t) : Account(bal), rate(r), time(t) {}
    void calculateInterest() override {
        double interest = (balance * rate * time) / 100.0;
        cout << "Savings Account Interest: " << interest << endl;
    }
};


class CurrentAccount : public Account {
    int maintenanceFee; 
public:
    CurrentAccount(int bal, int fee) : Account(bal), maintenanceFee(fee) {}
    void calculateInterest() override {
        balance -= maintenanceFee; 
        cout << "Balance after fee deduction: " << balance << endl;
    }
};


int main() {
    int accountType;
    cout << "Enter Account Type (1 for Savings, 2 for Current): ";
    cin >> accountType;

    if (accountType == 1) {
       
        int balance, time;
        double rate;
        cout << "Enter Balance: ";
        cin >> balance;
        cout << "Enter Interest Rate (%): ";
        cin >> rate;
        cout << "Enter Time (years): ";
        cin >> time;

       
        if (balance >= 1000 && balance <= 1000000 && rate >= 1 && rate <= 15 && time >= 1 && time <= 10) {
            SavingsAccount sa(balance, rate, time);
            sa.calculateInterest();
        } else {
            cout << "Invalid input constraints." << endl;
        }
    } else if (accountType == 2) {
      
        int balance, maintenanceFee;
        cout << "Enter Balance: ";
        cin >> balance;
        cout << "Enter Maintenance Fee: ";
        cin >> maintenanceFee;
        if (balance >= 1000 && balance <= 1000000 && maintenanceFee >= 50 && maintenanceFee <= 500) {
            CurrentAccount ca(balance, maintenanceFee);
            ca.calculateInterest();
        } else {
            cout << "Invalid input constraints." << endl;
        }
    } else {
       
        cout << "Invalid account type." << endl;
    }

    return 0;
}
