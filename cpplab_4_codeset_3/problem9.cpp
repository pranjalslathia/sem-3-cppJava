#include <iostream>
#include <string>

class Product {
public:
    std::string name;
    double price;
    int quantity;

    void set_data() {
        std::cout << "Enter Product Name: ";
        getline(std::cin >> std::ws, name);

        std::cout << "Enter Price: ";
        std::cin >> price;

        std::cout << "Enter Quantity: ";
        std::cin >> quantity;
    }

    Product Combined(Product *p2) {
        Product p3;

        p3.quantity = quantity + p2->quantity;
        p3.name = name + "+" + p2->name;

        return p3;
    }
};

Product Total(Product *p1, Product *p2) {
    if (p1->price * p1->quantity >=
        p2->price * p2->quantity) {

        return *p1;
    }
    else {
        return *p2;
    }
}

int main() {
    Product p1, p2, p3, p4;

    p1.set_data();
    p2.set_data();

    p3 = Total(&p1, &p2);

    std::cout << "Product Name: " << p3.name << std::endl;
    std::cout << "Price: " << p3.price << std::endl;
    std::cout << "Quantity: " << p3.quantity << std::endl;

    p4 = p1.Combined(&p2);

    std::cout << "Combined Inventory:" << std::endl;
    std::cout << "Name: " << p4.name << std::endl;
    std::cout << "Quantity: " << p4.quantity << std::endl;

    return 0;
}