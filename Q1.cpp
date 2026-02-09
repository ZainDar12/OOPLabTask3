#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    float price;
public:
    Book() {
        title = "Untitled";
        author = "Anonymous";
        price = 0.0;
    }
    
    Book(string t, string a ="Unknown", float p = 0.0) {
        title = t;
        author = a;
        price = p;
    }
    
    Book(const Book &b) {
        title = b.title;
        author = b.author;
        price = b.price;
    }
    
    void displayDetails() {
        cout << "Title:  " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price:  $" << price << endl;
    }
};

int main() {
    Book book1;
    book1.displayDetails();
    cout << endl;
    Book book2("The Great Gatsby", "F. Scott Fitzgerald", 12.99);
    book2.displayDetails();
    cout << endl;
    Book book3("1984");
    book3.displayDetails();
    cout << endl;
    Book book4 = book2;
    book4.displayDetails();
    return 0;
}
