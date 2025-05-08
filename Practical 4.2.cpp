#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n = "", int a = 0) {
        name = n;
        age = a;
    }
    void displayPerson() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
protected:
    int employeeID;
public:
    Employee(string n = "", int a = 0, int id = 0) : Person(n, a) {
        employeeID = id;
    }
    void displayEmployee() const {
        displayPerson();
        cout << "Employee ID: " << employeeID << endl;
    }
};

class Manager : public Employee {
private:
    string department;
public:
    Manager(string n = "", int a = 0, int id = 0, string dept = "") : Employee(n, a, id) {
        department = dept;
    }
    void displayManager() const {
        displayEmployee();
        cout << "Department: " << department << endl;
    }
    int getEmployeeID() const {
        return employeeID;
    }
};

int main() {
    int n;
    cout << "Enter number of managers: ";
    cin >> n;

    Manager* managerArray = new Manager[n];

    for (int i = 0; i < n; ++i) {
        string name, department;
        int age, id;

        cout << "\nEnter details for Manager " << i + 1 << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Employee ID: ";
        cin >> id;
        cout << "Department: ";
        cin >> department;

        managerArray[i] = Manager(name, age, id, department);
    }

    cout << "\nDisplaying Manager details:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "\nManager " << i + 1 << ":" << endl;
        managerArray[i].displayManager();
    }

    delete[] managerArray;
    cout<<"---Name=Sakshi Kadegiya---"<<endl;
    cout<<"---id=24CE046---";
    return 0;
}

