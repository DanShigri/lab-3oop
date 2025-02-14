#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    string name;
    double monthlySalary;
    double taxPercentage;

public:
    void get_data();
    double Salary_after_tax();
    void update_tax_percentage(double newTaxPercentage);
    void display_salary();
};

#endif

