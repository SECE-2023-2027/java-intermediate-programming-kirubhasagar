#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string productId;
    string productName;
    double price;
    int stockQuantity;

public:
    Product(string id, string name, double p, int stock) {
        productId = id;
        productName = name;
        price = (p < 0) ? 0.0 : p;
        stockQuantity = (stock < 0) ? 0 : stock;
    }

    string getProductId() {
        return productId;
    }

    string getProductName() {
        return productName;
    }

    double getPrice() {
        return price;
    }

    int getStockQuantity() {
        return stockQuantity;
    }

    void setProductId(string id) {
        productId = id;
    }

    void setProductName(string name) {
        productName = name;
    }

    void setPrice(double p) {
        price = (p < 0) ? 0.0 : p;
    }

    void setStockQuantity(int stock) {
        stockQuantity = (stock < 0) ? 0 : stock;
    }

    void applyDiscount(double percentage) {
        price -= price * percentage / 100;
    }
};

int main() {
    int n;
    cin >> n;

    Product** products = new Product*[n];

    for (int i = 0; i < n; i++) {
        string id, name;
        double price, discount;
        int stock;

        cin >> id >> name >> price >> stock >> discount;

        products[i] = new Product(id, name, price, stock);
        products[i]->applyDiscount(discount);
    }

    for (int i = 0; i < n; i++) {
        cout << products[i]->getProductId() << " "
             << products[i]->getProductName() << " "
             << products[i]->getPrice() << " "
             << products[i]->getStockQuantity() << endl;
    }

    return 0;
}