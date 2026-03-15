#include <iostream>
#include <string>
using namespace std;

struct Book {
    int bookID;
    string isbn;
    string title;
    int publishedYear;
    string authors[5];  
    int authorCount;
    double price;
};

void displayBook(Book b) {
    cout << "Book ID:        " << b.bookID << endl;
    cout << "ISBN:           " << b.isbn << endl;
    cout << "Title:          " << b.title << endl;
    cout << "Published Year: " << b.publishedYear << endl;
    cout << "Authors:        ";
    for (int i = 0; i < b.authorCount; i++) {
        cout << b.authors[i];
        if (i < b.authorCount - 1) cout << ", ";
    }
    cout << endl;
    cout << "Price:          $" << b.price << endl << endl;
}

void displayBookByISBN(Book books[], int size, string isbn) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (books[i].isbn == isbn) {
            displayBook(books[i]);
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Book with ISBN " << isbn << " not found." << endl;
    }
}

void displayAllBooks(Book books[], int size) {
    cout << "=== All Books ===" << endl;
    for (int i = 0; i < size; i++) {
        displayBook(books[i]);
    }
}

int main() {
    Book books[5];

    books[0] = {1, "978-0-13-468599-1", "The C++ Programming Language", 2013,
                {"Bjarne Stroustrup"}, 1, 59.99};

    books[1] = {2, "978-0-13-235088-4", "Clean Code", 2008,
                {"Robert C. Martin"}, 1, 39.99};

    books[2] = {3, "978-0-20-163361-5", "The Pragmatic Programmer", 2019,
                {"David Thomas", "Andrew Hunt"}, 2, 49.99};

    books[3] = {4, "978-0-59-651798-1", "Head First Design Patterns", 2020,
                {"Eric Freeman", "Elisabeth Robson"}, 2, 54.99};

    books[4] = {5, "978-0-13-110362-7", "The C Programming Language", 1988,
                {"Brian Kernighan", "Dennis Ritchie"}, 2, 34.99};

    displayAllBooks(books, 5);


    cout << "\n=== Search by ISBN ===" << endl << endl;
    string searchISBN;
    cout << "Enter ISBN to search: ";
    cin >> searchISBN;
    displayBookByISBN(books, 5, searchISBN);

    return 0;
}


