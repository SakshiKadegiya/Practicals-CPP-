#include <iostream>
using namespace std;

template <typename T>
void display(T arr[], int size) {
    cout << "Elements: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

template <typename T>
void reverse(T arr[], int size) {
    for (int i = 0; i < size / 2; i++)
        swap(arr[i], arr[size - i - 1]);
}

template <typename T>
T findMax(T arr[], int size) {
    T maxVal = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > maxVal)
            maxVal = arr[i];
    return maxVal;
}

int main() {
    int choice, n;

    do {
        cout << "\n1.Int  2.Float  3.Char  4.Exit\nChoose data type: ";
        cin >> choice;
        if (choice == 4) break;

        cout << "Enter size: ";
        cin >> n;

        if (choice == 1) {
            int* arr = new int[n];
            cout << "Enter " << n << " integers:\n";
            for (int i = 0; i < n; i++) cin >> arr[i];

            display(arr, n);
            reverse(arr, n);
            cout << "Reversed: ";
            display(arr, n);
            cout << "Max: " << findMax(arr, n) << endl;
            delete[] arr;
        }
        else if (choice == 2) {
            float* arr = new float[n];
            cout << "Enter " << n << " floats:\n";
            for (int i = 0; i < n; i++) cin >> arr[i];

            display(arr, n);
            reverse(arr, n);
            cout << "Reversed: ";
            display(arr, n);
            cout << "Max: " << findMax(arr, n) << endl;
            delete[] arr;
        }
        else if (choice == 3) {
            char* arr = new char[n];
            cout << "Enter " << n << " characters:\n";
            for (int i = 0; i < n; i++) cin >> arr[i];

            display(arr, n);
            reverse(arr, n);
            cout << "Reversed: ";
            display(arr, n);
            cout << "Max: " << findMax(arr, n) << endl;
            delete[] arr;
        }
        else {
            cout << "Invalid choice.\n";
        }
    } while (true);

    cout << "Exiting...\n";
        cout<<"---Name=Sakshi Kadegiya---"<<endl;
    cout<<"---Id=24CE046---";
    return 0;
}

