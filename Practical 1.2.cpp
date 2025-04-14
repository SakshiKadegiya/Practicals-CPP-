
#include <iostream>
#include <vector>
using namespace std;

class Product {
public:
    int id;
    string name;
    int qty;
    double price;

    Product(int i, string n, int q, double p) : id(i), name(n), qty(q), price(p) {}

    double value() const {
        return qty * price;
    }

    void display() const {
        cout << "ID: " << id << " | " << name << " | Qty: " << qty << " | $" << price << endl;
    }
};

class Inventory {
    vector<Product> products;

public:
    void add(int id, string name, int qty, double price) {
        products.emplace_back(id, name, qty, price);
    }

    void update(int id, int change) {
        for (auto& p : products)
            if (p.id == id) {
                p.qty += change;
                return;
            }
        cout << "Product not found.\n";
    }

    void show() const {
        for (const auto& p : products) p.display();
    }

    double totalValue() const {
        double total = 0;
        for (const auto& p : products) total += p.value();
        return total;
    }
};

int main() {
    Inventory inv;
    inv.add(1, "Shampoo", 10, 5.99);
    inv.add(2, "Soap", 20, 1.49);

    inv.update(1, 5);
    inv.show();

    cout << "Total Inventory Value: $" << inv.totalValue() << endl;

    cout<<"---Name=Sakshi Kadegiya---";
    cout<<"\n---Id=24CE046---";
    return 0;
}
