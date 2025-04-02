#include <iostream>
#include "Employee.h"
using namespace std;

void testConstructor() {
    Employee emp1("andrew", "samaha", 3000);
    Employee emp2("angelina", "maalouf", -5000);

    cout << emp1.getFirstName() << " " << emp1.getLastName() << "'s Monthly Salary: $" << emp1.getMonthlySalary() << " ";
    if (emp1.getMonthlySalary() == 3000) cout << "pass\n"; else cout << "fail\n";

    cout << emp2.getFirstName() << " " << emp2.getLastName() << "'s Monthly Salary: $" << emp2.getMonthlySalary() << " ";
    if (emp2.getMonthlySalary() == 0) cout << "pass\n"; else cout << "fail\n";
}

void testYearlySalary() {
    Employee emp1("andrew", "samaha", 3000);
    Employee emp2("angelina", "maalouf", 4000);

    cout << emp1.getFirstName() << " " << emp1.getLastName() << "'s Yearly Salary: $" << emp1.getYearlySalary() << " ";
    if (emp1.getYearlySalary() == 3000 * 12) cout << "pass\n"; else cout << "fail\n";

    cout << emp2.getFirstName() << " " << emp2.getLastName() << "'s Yearly Salary: $" << emp2.getYearlySalary() << " ";
    if (emp2.getYearlySalary() == 4000 * 12) cout << "pass\n"; else cout << "fail\n";
}

void testCopyConstructor() {
    Employee emp1("andrew", "samaha", 3000);
    Employee emp3(emp1);

    cout << emp3.getFirstName() << " " << emp3.getLastName() << "'s (Copied) Monthly Salary: $" << emp3.getMonthlySalary() << " ";
    if (emp3.getMonthlySalary() == 3000) cout << "pass\n"; else cout << "fail\n";
}

void testGiveRaise() {
    Employee emp1("andrew", "samaha", 3000);
    Employee emp2("angelina", "maalouf", 4000);

    cout << emp1.getFirstName() << " " << emp1.getLastName() << "'s Monthly Salary: $" << emp1.getMonthlySalary() << " ";
    if (emp1.getMonthlySalary() == 3000) cout << "pass\n"; else cout << "fail\n";

    cout << emp2.getFirstName() << " " << emp2.getLastName() << "'s Monthly Salary: $" << emp2.getMonthlySalary() << " ";
    if (emp2.getMonthlySalary() == 4000) cout << "pass\n"; else cout << "fail\n";

    emp1.giveRaise(10);
    emp2.giveRaise(10);

    cout << "       ----giving raise of 10%----\n";

    cout << emp1.getFirstName() << " " << emp1.getLastName() << "'s New Monthly Salary: $" << emp1.getMonthlySalary() << " ";
    if (emp1.getMonthlySalary() == 3000 * 1.1) cout << "pass\n"; else cout << "fail\n";

    cout << emp2.getFirstName() << " " << emp2.getLastName() << "'s New Monthly Salary: $" << emp2.getMonthlySalary() << " ";
    if (emp2.getMonthlySalary() == 4000 * 1.1) cout << "pass\n"; else cout << "fail\n";
}

void testMinimalEmployeeSalary() {
    Employee employees[] = {
        Employee("andrew", "samaha", 3000),
        Employee("angelina", "maalouf", 4000),
        Employee("anthony", "andrewson", 2000),
        Employee("joseph", "lee", 5000),
        Employee("george", "davis", 2500),
        Employee("nisrine", "maalouf", 4500),
        Employee("kevin", "brown", 1000),
        Employee("nareg", "jakmakelian", 10),
        Employee("jad", "clark", 6000),
        Employee("walter", "white", 3200)
    };

    int min_salary = employees[0].getMonthlySalary();

    for (int i = 1; i < 10; i++) {
        if (employees[i].getMonthlySalary() < min_salary) {
            min_salary = employees[i].getMonthlySalary();
        }
    }

    cout << "Minimum salary: $" << min_salary << " ";
    if (min_salary == 10) cout << "pass\n"; else cout << "fail\n";
}

int main() {
    cout << "--------------------------- Test Constructor ---------------------------\n";
    testConstructor();

    cout << "\n------------------------- Test Yearly Salary --------------------------\n";
    testYearlySalary();

    cout << "\n----------------------- Test Copy Constructor ------------------------\n";
    testCopyConstructor();

    cout << "\n------------------------- Test Give Raise ----------------------------\n";
    testGiveRaise();

    cout << "\n----------------- Test Minimal Employee Salary -----------------------\n";
    testMinimalEmployeeSalary();

    return 0;
}
