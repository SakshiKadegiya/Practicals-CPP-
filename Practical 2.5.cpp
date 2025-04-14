#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Loan {
private:
    int loanID;
    string applicantName;
    double amount;
    double interestRate;
    int tenureMonths;

public:
    Loan(int id, string name, double amt, double rate, int months)
        : loanID(id), applicantName(name), amount(amt), interestRate(rate), tenureMonths(months) {}

    double calculateEMI() const {
        double R = interestRate / (12 * 100);
        double T = tenureMonths;
        return amount * R * pow(1 + R, T) / (pow(1 + R, T) - 1);
    }

    void display() const {
        cout << "\nLoan ID: " << loanID
             << "\nName: " << applicantName
             << "\nAmount: $" << amount
             << "\nInterest Rate: " << interestRate << "%"
             << "\nTenure: " << tenureMonths << " months"
             << "\nMonthly EMI: $" << calculateEMI() << "\n";
    }

    int getLoanID() const { return loanID; }
};

class LoanSystem {
private:
    vector<Loan> loans;

public:
    void addLoan() {
        int id, months;
        string name;
        double amt, rate;

        cout << "Enter Loan ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Applicant Name: ";
        getline(cin, name);
        cout << "Enter Loan Amount: ";
        cin >> amt;
        cout << "Enter Annual Interest Rate (%): ";
        cin >> rate;
        cout << "Enter Tenure (in months): ";
        cin >> months;

        loans.emplace_back(id, name, amt, rate, months);
        cout << "Loan added successfully!\n";
    }

    void displayAllLoans() const {
        if (loans.empty()) {
            cout << "No loan records available.\n";
            return;
        }
        for (const auto& loan : loans)
            loan.display();
    }
};

int main() {
    LoanSystem system;
    int choice;

    do {
        cout << "\n--- Loan Management System ---\n";
        cout << "1. Add Loan\n2. Show All Loans\n3. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: system.addLoan(); break;
            case 2: system.displayAllLoans(); break;
            case 3: cout << "Exiting system.\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 3);
    cout<<"---Name=Sakshi Kadegiya---"<<endl;
    cout<<"---Id=24CE046---";

    return 0;
}
