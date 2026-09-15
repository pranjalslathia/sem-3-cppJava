#include <iostream>
#include <string>

class Book{
    
public:
    static int totalBooks;
    int bookID;
    std::string bookName;
    double price;
    Book(){
        std::cout << "\nBook Name: ";
        getline(std::cin, bookName);
        std::cout << "Book Price: ";
        std::cin >> price;
        std::cout << "Book ID: ";
        std::cin >> bookID;
        totalBooks++;

        std::cin.ignore();
    }
    Book operator >(Book b){
        if (price > b.price)
        {
            return *this;
        }
        else{
            return b;
        }
    } 
    inline double discountPrice(){
        return price -= (price * 0.1);
    } 
    friend void costlierBookDetail(Book b);
};

int Book::totalBooks = 0;

void costlierBookDetail(Book b){
        std::cout << "Book ID: " << b.bookID << std::endl;
        std::cout << "Book Name: " << b.bookName << std::endl;
        std::cout << "Price: " << b.price << std::endl;
    } 
int main(){
    Book b1, b2, b3;
    std::cout << "  \nCostlier Book: " << std::endl;
    Book costlier = b1>b2;
    costlierBookDetail(costlier);

    std::cout << "\nTotal Books: " << Book::totalBooks << std::endl;

    b3.discountPrice();
    std::cout <<"\nBook Name: " << b3.bookName << std::endl;
    std::cout << "ID: " << b3.bookID << std::endl;
    std::cout << "Discounted Price: " << b3.price << std::endl;
    

    return 0;
}