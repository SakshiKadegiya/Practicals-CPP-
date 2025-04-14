#include <iostream>
#include <string>

using namespace std;

long long sumOfDigits(const string& n) {
    long long sum = 0;
    for (char c : n) {
        sum += c - '0';
    }
    return sum;
}

int superDigit(long long n) {
    if (n < 10) return n;

    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return superDigit(sum);
}

int main() {
    string n;
    int k;

    cout << "Enter number n: ";
    cin >> n;
    cout << "Enter multiplier k: ";
    cin >> k;

    long long initialSum = sumOfDigits(n);
    long long combinedSum = initialSum * k;

    int result = superDigit(combinedSum);

    cout << "Super Digit: " << result << endl;
    cout<<"---Name=Sakshi Kadegiya---"<<endl;
    cout<<"---id=24CE046---";

    return 0;
}

