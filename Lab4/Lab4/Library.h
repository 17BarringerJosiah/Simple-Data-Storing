// Header guard to prevent multiple inclusion of the Library header file
#ifndef LIBRARY_H
#define LIBRARY_H

// Including necessary libraries and header files
#include <string>
#include <vector>
#include "Book.h"

// Declaration of the Library class
class Library {
private:
    // Private member variables
    std::string libraryName;        // Name of the library
    std::string libraryLocation;    // Location of the library
    int maxBooksInList;             // Maximum number of books allowed in the library
    std::vector<Book> booksList;    // List of books in the library

public:
    // Constructors
    Library();                              // Default constructor
    Library(std::string name, std::string location, int maxBooks); // Parameterized constructor

    // Getter and setter functions for library name
    std::string getLibraryName() const;     // Getter for library name
    void setLibraryName(std::string name);  // Setter for library name

    // Getter and setter functions for library location
    std::string getLibraryLocation() const;     // Getter for library location
    void setLibraryLocation(std::string location);  // Setter for library location

    // Getter and setter functions for maximum number of books allowed
    int getMaxBooksInList() const;          // Getter for maximum number of books allowed
    void setMaxBooksInList(int maxBooks);   // Setter for maximum number of books allowed

    // Function to add a book to the library
    void addBook(const Book& book);

    // Function to sort the books in the library
    void sortBooks();

    // Function to count the total number of books in the library
    int countBooksInList() const;

    // Function to calculate the number of hardbound books in the library
    int calcNumberHardbound() const;

    // Function to calculate the number of paperback books in the library
    int calcNumberPaperback() const;

    // Function to list information about the library and its available books
    void listLibraryInfo() const;
};

// End of header guard
#endif



