// Header guard to prevent multiple inclusion of the Book header file
#ifndef BOOK_H
#define BOOK_H

// Including necessary library for string operations
#include <string>

// Declaration of the Book class
class Book {
private:
    // Private member variables
    std::string bookTitle;           // Title of the book
    std::string bookAuthor;          // Author of the book
    int bookCopyrightYear;           // Copyright year of the book
    bool isHardbound;                // Indicates whether the book is hardbound or not

public:
    // Constructors
    Book();                                     // Default constructor
    Book(std::string title, std::string author, int year, bool hardbound); // Parameterized constructor

    // Getters and Setters for private member variables
    std::string getBookTitle() const;            // Getter for book title
    void setBookTitle(std::string title);        // Setter for book title

    std::string getBookAuthor() const;           // Getter for book author
    void setBookAuthor(std::string author);      // Setter for book author

    int getBookCopyrightYear() const;            // Getter for book copyright year
    void setBookCopyrightYear(int year);         // Setter for book copyright year

    bool getIsHardbound() const;                 // Getter for book hardbound status
    void setIsHardbound(bool hardbound);         // Setter for book hardbound status

    // Function to display book information
    void listBookInfo() const;
};

// End of header guard
#endif



