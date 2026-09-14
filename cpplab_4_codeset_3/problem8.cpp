#include <iostream>
#include <string>

class Book {
    
    public:
    int book_ID;
    std::string title;
    int copies;
    
    void set_data()
    {
        std::cout << "Book Id: ";
        std::cin >> book_ID;
        std::cout << "No of Copies: ";
        std::cin >> copies;
        std::cout << "Title: ";
        std::cin >> title;
        getline(std::cin, title);
    }

    void exchange(Book &other){
        int tempID = book_ID;
        std::string tempTitle = title;
        int tempCopies = copies;
        book_ID = other.book_ID;
        title = other.title;

        other.book_ID = tempID;
        other.title = tempTitle;
        other.copies = tempCopies;
    }
   void Display()
    {
        std::cout << "Book Details: \n";
        std::cout << "Title: " << title << std::endl;
        std::cout << "ID: " << book_ID << std::endl;
        std::cout << "Copies: " << copies << std::endl;
    }
};
Book findMax(Book b1,Book b2){
    if (b1.copies>b2.copies)
    {
        return b1;
    }
    else{
        return b2;
    }
    
}

int main(){
    Book b1, b2, b3;

    b1.set_data();
    b2.set_data();
    b1.exchange(b2);
    b3 = findMax(b1,b2);
    std::cout<<"ID: "<<b3.book_ID<<" Title: "<<b3.book_ID<<" has most copies" << std::endl;

    return 0;
}