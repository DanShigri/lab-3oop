#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double monthlySalary;
    double taxPercentage;

public:
    void get_data() {
        cout << "Enter employee's name: ";
        getline(cin, name);
        cout << "Enter monthly salary: $";
        cin >> monthlySalary;
        cout << "Enter tax percentage: ";
        cin >> taxPercentage;
    }

    double Salary_after_tax() {
        double taxAmount = (taxPercentage / 100) * monthlySalary;
        double salaryAfterTax = monthlySalary - taxAmount;
        return salaryAfterTax;
    }

    void update_tax_percentage(double newTaxPercentage) {
        taxPercentage = newTaxPercentage;
    }

    void display_salary() {
        double salary = Salary_after_tax();
        cout << name << "'s salary after " << taxPercentage << "% tax: $" << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.get_data();

    emp.display_salary();

    double newTaxRate;
    cout << "Enter new tax percentage to update: ";
    cin >> newTaxRate;
    emp.update_tax_percentage(newTaxRate);

    emp.display_salary();

    return 0;
}

