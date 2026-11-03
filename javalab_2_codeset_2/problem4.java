import java.util.ArrayList;

class Book{
    String title, author;
    int isbn;
    float price;

    Book(int isbn, String title, String author, float price){
        this.isbn = isbn;
        this.title = title;
        this.author = author;
        this.price = price;
    }

    public void addBook(ArrayList<Book> bookList){
        bookList.add(this);
    }

    public void popBook(int isbn, ArrayList<Book> bookList){
        for(int i = 0; i < bookList.size(); i++){
            if (bookList.get(i).isbn == isbn) {
                bookList.remove(i);
            }
        }
    }

    public static Book searchBook(int isbn, ArrayList<Book> bookList){
        for (Book book : bookList) {
            if (book.isbn == isbn) {
                return book;
            }
        }
        return null;
    }
    
    public static void displayAllBooksDetails(ArrayList<Book> bookList) {
        System.out.println("\nBooks Details:");
        System.out.println("----------------");
        for (Book book : bookList) {
            System.out.println("\nBook Id: " + book.isbn);
            System.out.println("Book Title: " + book.title);
            System.out.println("Book Author: " + book.author);
            System.out.println("Price: " + book.price);
        }
        
    }
}

public class problem4 {
    public static void main(String[] args){
        ArrayList<Book> books = new ArrayList<>();

        Book book1 = new Book(1, "Farenheit 451", "Slade Sharma", 1000);
        Book book2 = new Book(2, "Haunting Adeline", "V. M. karlton", 300);
        Book book3 = new Book(3, "Cursed Child", "J. K. Rollings", 2000);
        
        books.add(book1); // ArrayList class method
        book2.addBook(books);; // Custom class method
        book3.addBook(books);

       Book searchedBook = Book.searchBook(1, books);
       System.out.println("Searched using isbn(1): " + searchedBook.title);
       

        Book.displayAllBooksDetails(books);
        book3.popBook(3, books);
        System.out.println("\nAfter deletion");
        Book.displayAllBooksDetails(books);
    }
}