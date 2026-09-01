#include <iostream>
#include <string>

class Book {

public:
    std::string title;
    std::string author;
    Book (std::string t, std::string a){
        title = t;
        author = a;
    }
};

int main() {

    Book book1("Make It Stick", "Peter C. Brown");

    std::string author, title;
    std::cout << "Book Details\nTitle: " << book1.title;
    std::cout << "\nAuthor: " << book1.author;


    return 0;
}