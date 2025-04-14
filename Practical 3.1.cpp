#include <iostream>
#include <vector>
using namespace std;

class Employee {
private:
    string name;
    double basicSalary;
    double bonus;

public:

    Employee(string n, double salary, double b = 1000.0)
        : name(n), basicSalary(salary), bonus(b) {}


    inline double totalSalary() const {
        return basicSalary + bonus;
    }

    void display() const {
        cout << "\nName: " << name
             << "\nBasic Salary: $" << basicSalary
             << "\nBonus: $" << bonus
             << "\nTotal Salary: $" << totalSalary() << endl;
    }
};

int main() {
    vector<Employee> staff;
    int choice;

    do {
        cout << "\n--- Payroll Management System ---\n";
        cout << "1. Add Employee\n2. Show All Employees\n3. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            double salary, bonus;
            char customBonus;

            cin.ignore();
            cout << "Enter Employee Name: ";
            getline(cin, name);
            cout << "Enter Basic Salary: ";
            cin >> salary;

            cout << "Custom Bonus? (y/n): ";
            cin >> customBonus;
            if (customBonus == 'y' || customBonus == 'Y') {
                cout << "Enter Bonus: ";
                cin >> bonus;
                staff.emplace_back(name, salary, bonus);
            } else {
                staff.emplace_back(name, salary);
            }

            cout << "Employee added successfully!\n";
        }
        else if (choice == 2) {
            if (staff.empty()) {
                cout << "No employee records.\n";
            } else {
                for (const auto& emp : staff) {
                    emp.display();
                }
            }
        }
        else if (choice != 3) {
            cout << "Invalid choice.\n";
        }
    } while (choice != 3);

    cout << "Exiting payroll system.\n";
        cout<<"---Name=Sakshi Kadegiya---"<<endl;
    cout<<"---Id=24CE046---";
    return 0;
}

