#include <iostream>
#include <string>

using namespace std;

class Book {
    public:
        string title, author;
};

class EBook:public Book{

    public:
    string format;
    int fileSize;

    void display(){
    cout << "Book Details:" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Format: " << format << endl;
        cout << "File Size: " << fileSize << endl;
        cout << "------------" << endl;
    }
};

int main(){
    EBook ebooks[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter book " << i+1 << " details: " << endl;
        cout << "Title: ";
        getline(cin >> ws, ebooks[i].title);
        cout << "Author: ";
        getline(cin >> ws, ebooks[i].author);
        cout << "Format: ";
        getline(cin >> ws, ebooks[i].format);
        cout << "size: ";
        cin >> ebooks[i].fileSize;
        cout << "-------------------" << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        ebooks[i].display();
    }
    

    
    return 0;
}