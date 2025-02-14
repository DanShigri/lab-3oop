#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    Employee emp1, emp2, emp3;

    emp1.get_data();
    emp2.get_data();
    emp3.get_data();

    emp1.display_salary();
    emp2.display_salary();
    emp3.display_salary();

    double newTaxRate;
    cout << "Enter new tax percentage for employee 1: ";
    cin >> newTaxRate;
    emp1.update_tax_percentage(newTaxRate);
    emp1.display_salary();

    cout << "Enter new tax percentage for employee 2: ";
    cin >> newTaxRate;
    emp2.update_tax_percentage(newTaxRate);
    emp2.display_salary();

    cout << "Enter new tax percentage for employee 3: ";
    cin >> newTaxRate;
    emp3.update_tax_percentage(newTaxRate);
    emp3.display_salary();

    return 0;
}

