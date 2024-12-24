#include <iostream>
#include <string>
using namespace std;


class Employee {
protected:
    string name;  
    int id;      
    int salary;  
public:
    Employee(string n, int i, int s) : name(n), id(i), salary(s) {}
    virtual void displayDetails() = 0; 
    virtual ~Employee() {}
};


class Manager : public Employee {
    int rating; 
public:
    Manager(string n, int i, int s, int r) : Employee(n, i, s), rating(r) {}
    void displayDetails() override {
        int bonus = (salary * rating * 10) / 100; 
        int totalEarnings = salary + bonus;
        cout << "Employee: " << name << " (ID: " << id << ")" << endl;
        cout << "Role: Manager" << endl;
        cout << "Base Salary: " << salary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Earnings: " << totalEarnings << endl;
    }
};


class Developer : public Employee {
    int extraHours; 
public:
    Developer(string n, int i, int s, int h) : Employee(n, i, s), extraHours(h) {}
    void displayDetails() override {
        int overtimeCompensation = extraHours * 500; // $500 per extra hour
        int totalEarnings = salary + overtimeCompensation;
        cout << "Employee: " << name << " (ID: " << id << ")" << endl;
        cout << "Role: Developer" << endl;
        cout << "Base Salary: " << salary << endl;
        cout << "Overtime Compensation: " << overtimeCompensation << endl;
        cout << "Total Earnings: " << totalEarnings << endl;
    }
};

int main() {
    int employeeType;
    cout << "Enter Employee Type (1 for Manager, 2 for Developer): ";
    cin >> employeeType;

    if (employeeType == 1) {
    
        string name;
        int id, salary, rating;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Rating (1-5): ";
        cin >> rating;

       
        if (salary >= 10000 && salary <= 1000000 && rating >= 1 && rating <= 5) {
            Manager m(name, id, salary, rating);
            m.displayDetails();
        } else {
            cout << "Invalid input constraints." << endl;
        }
    } else if (employeeType == 2) {
     
        string name;
        int id, salary, extraHours;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Extra Hours (0-100): ";
        cin >> extraHours;

        
        if (salary >= 10000 && salary <= 1000000 && extraHours >= 0 && extraHours <= 100) {
            Developer d(name, id, salary, extraHours);
            d.displayDetails();
        } else {
            cout << "Invalid input constraints." << endl;
        }
    } else {
        
        cout << "Invalid employee type." << endl;
    }

    return 0;
}
