// Including the Book header file
#include "Book.h"
// Including necessary library for input/output operations
#include <iostream>

// Default constructor for the Book class
Book::Book() : bookTitle(""), bookAuthor(""), bookCopyrightYear(0), isHardbound(false) {}

// Parameterized constructor for the Book class.
// Class represents a book with attributes such as title, author, copyright year, and whether it's hardbound or not.
Book::Book(std::string title, std::string author, int year, bool hardbound) :
    bookTitle(title), bookAuthor(author), bookCopyrightYear(year), isHardbound(hardbound) {}

// Getter function to retrieve the book title
std::string Book::getBookTitle() const {
    return bookTitle;
}

// Setter function to set the book title
void Book::setBookTitle(std::string title) {
    bookTitle = title;
}

// Getter function to retrieve the book author
std::string Book::getBookAuthor() const {
    return bookAuthor;
}

// Setter function to set the book author
void Book::setBookAuthor(std::string author) {
    bookAuthor = author;
}

// Getter function to retrieve the book copyright year
int Book::getBookCopyrightYear() const {
    return bookCopyrightYear;
}

// Setter function to set the book copyright year
void Book::setBookCopyrightYear(int year) {
    bookCopyrightYear = year;
}

// Getter function to check if the book is hardbound
bool Book::getIsHardbound() const {
    return isHardbound;
}

// Setter function to set whether the book is hardbound
void Book::setIsHardbound(bool hardbound) {
    isHardbound = hardbound;
}

// Function to display information about the book
void Book::listBookInfo() const {
    std::cout << "Title: " << bookTitle << std::endl;             // Displaying the book title
    std::cout << "Author: " << bookAuthor << std::endl;           // Displaying the book author
    std::cout << "Copyright Year: " << bookCopyrightYear << std::endl;
    // Displaying the book copyright year
    std::cout << "Hardbound: " << (isHardbound ? "Yes" : "No") << std::endl;
    // Displaying whether the book is hardbound or not
}
