#include <iostream>
using namespace std;
class Employee {
public:
    virtual double calculatePay() {
        return 0.0;
    }
};
class Manager : public Employee {
public:
    double calculatePay() override {
        return 5000.0; 
    }
};
class Engineer : public Employee {
public:
    double calculatePay()  override {
        return 4000.0; 
    }
};
int main() {
    Manager manager;
    Engineer engineer;
    cout << "Manager's monthly pay: $" << manager.calculatePay() <<endl;
    cout << "Engineer's monthly pay: $" << engineer.calculatePay() <<endl;
    Employee* employee1 = &manager;
    Employee* employee2 = &engineer;
    cout << "Employee 1's monthly pay: $" << employee1->calculatePay() <<endl;
    cout << "Employee 2's monthly pay: $" << employee2->calculatePay() <<endl;
    return 0;
}
