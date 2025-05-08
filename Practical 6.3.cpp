#include <iostream>
using namespace std;
int main() {
    int n, m;
    cout << "Enter size of first array (n): ";
    cin >> n;
    cout << "Enter size of second array (m): ";
    cin >> m;
    int* arr1 = new int[n];
    int* arr2 = new int[m];
   cout << "Enter " << n << " sorted elements for first array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
cout << "Enter " << m << " sorted elements for second array:\n";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    int* mergedArr = new int[n + m];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }
    while (i < n) {
        mergedArr[k++] = arr1[i++];
    }
    while (j < m) {
        mergedArr[k++] = arr2[j++];
    }
    cout << "Merged sorted array:\n";
    for (int i = 0; i < n + m; i++) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;
    delete[] arr1;
    delete[] arr2;
    delete[] mergedArr;
     cout<<"---Name=Sakshi Kadegiya---"<<endl;
    cout<<"---id=24CE046---";
    return 0;
}

