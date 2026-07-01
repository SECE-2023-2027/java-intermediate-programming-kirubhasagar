#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
    string empName;
    int empSalary;

    public:
    Employee(string name, double salary)
    {
        this->empName = name;
        this->empSalary = salary;
    }

    virtual double calculateSalary()
    {
        return empSalary;
    }
};

class Manager : public Employee
{
private:
    double bonus;

public:
    Manager(string name, double baseSalary, double bonus) : Employee(name, baseSalary)
    {
        this->bonus = bonus;
    }

    double calculateSalary() override
    {
        return Employee::calculateSalary() + bonus;
    }
};

int main()
{
    string name,mname;
    double basesalary,msalary,bonus;
    cout<<"Enter employee name: ";
    cin>>name;
    cout<<"Enter base salary: ";
    cin>>basesalary;
    Employee emp(name, basesalary);

    cout<<"Enter manager name: ";
    cin>>mname;
    cout<<"Enter base salary: ";
    cin>>msalary;
    cout<<"Enter bonus: ";
    cin>>bonus;
    Manager mgr(mname, msalary, bonus);

    cout << "Employee Salary: " << emp.calculateSalary() << endl;
    cout << "Manager Salary: " << mgr.calculateSalary() << endl;
    return 0;
}
