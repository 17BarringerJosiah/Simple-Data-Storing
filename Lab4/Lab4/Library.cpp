// Including the Library header file
#include "Library.h"
// Including necessary libraries for sorting and input/output operations
#include <algorithm>
#include <iostream>

// Default constructor for the Library class
Library::Library() : libraryName(""), libraryLocation(""), maxBooksInList(0) {}

// Parameterized constructor for the Library class
// Represents a library with attributes such as name, location, maximum number of books allowed, and a list of books.
Library::Library(std::string name, std::string location, int maxBooks) :
    libraryName(name), libraryLocation(location), maxBooksInList(maxBooks) {}

// Getter function to retrieve the library name
std::string Library::getLibraryName() const {
    return libraryName;
}

// Setter function to set the library name
void Library::setLibraryName(std::string name) {
    libraryName = name;
}

// Getter function to retrieve the library location
std::string Library::getLibraryLocation() const {
    return libraryLocation;
}

// Setter function to set the library location
void Library::setLibraryLocation(std::string location) {
    libraryLocation = location;
}

// Getter function to retrieve the maximum number of books allowed in the library
int Library::getMaxBooksInList() const {
    return maxBooksInList;
}

// Setter function to set the maximum number of books allowed in the library
void Library::setMaxBooksInList(int maxBooks) {
    maxBooksInList = maxBooks;
}

// Function to add a book to the library
void Library::addBook(const Book& book) {
    if (booksList.size() < maxBooksInList) {
        booksList.push_back(book);
        sortBooks();
    }
    else {
        std::cout << "Cannot add more books. Library is full." << std::endl;
    }
}

// Function to sort the books in the library alphabetically by title
void Library::sortBooks() {
    std::sort(booksList.begin(), booksList.end(),
        [](const Book& left, const Book& right) {
            return left.getBookTitle() < right.getBookTitle();
        });
}

// Function to count the total number of books in the library
int Library::countBooksInList() const {
    return booksList.size();
}

// Function to calculate the number of hardbound books in the library
int Library::calcNumberHardbound() const {
    int count = 0;
    for (const Book& book : booksList) {
        if (book.getIsHardbound()) {
            count++;
        }
    }
    return count;
}

// Function to calculate the number of paperback books in the library
int Library::calcNumberPaperback() const {
    return countBooksInList() - calcNumberHardbound();
}

// Function to display information about the library and its available books
void Library::listLibraryInfo() const {
    if (booksList.empty()) {
        std::cout << "No books are available at this time." << std::endl;
    }
    else {
        std::cout << "Sample of books available to read:" << std::endl;
        for (const Book& book : booksList) {
            std::cout << "* " << book.getBookTitle() << " by " << book.getBookAuthor()
                << " Copyright-" << book.getBookCopyrightYear() << " ";
            if (book.getIsHardbound()) {
                std::cout << "Hardbound" << std::endl;
            }
            else {
                std::cout << "Paperback" << std::endl;
            }
        }
    }
}

