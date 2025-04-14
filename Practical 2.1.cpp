#include <iostream>
#include <vector>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void updateDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }

    void display(int index) const {
        cout << "Rectangle " << index << ": "
             << "Length = " << length << ", Width = " << width
             << ", Area = " << area()
             << ", Perimeter = " << perimeter() << endl;
    }
};

int main() {
    vector<Rectangle> rectangles;
    int choice;

    do {
        cout << "\n--- Rectangle Manager ---\n";
        cout << "1. Add Rectangle\n2. Update Rectangle\n3. Display All\n4. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            double l, w;
            cout << "Enter length and width: ";
            cin >> l >> w;
            rectangles.emplace_back(l, w);
        } else if (choice == 2) {
            int index;
            double l, w;
            cout << "Enter rectangle index to update: ";
            cin >> index;
            if (index >= 0 && index < rectangles.size()) {
                cout << "Enter new length and width: ";
                cin >> l >> w;
                rectangles[index].updateDimensions(l, w);
            } else {
                cout << "Invalid index.\n";
            }
        } else if (choice == 3) {
            for (int i = 0; i < rectangles.size(); ++i)
                rectangles[i].display(i);
        }

    } while (choice != 4);
    cout<<"---Name=Skashi Kadegiya---";
    cout<<"---Id=24CE046---";

    return 0;
}

