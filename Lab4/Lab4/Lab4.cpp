#include <iostream>
#include "Library.h"
#include "Book.h"

int main() {
    Library library;

    std::string name, location;
    int maxBooks;

    // Get library name
    std::cout << "Library Name: ";
    std::getline(std::cin, name);
    library.setLibraryName(name);

    // Get library location
    std::cout << "Library Location (city state): ";
    std::getline(std::cin, location);
    library.setLibraryLocation(location);

    // Get maximum number of books
    std::cout << "Maximum books allowed in the book list (3 to 6 inclusive): ";
    std::cin >> maxBooks;
    library.setMaxBooksInList(maxBooks);
    std::cin.ignore(); // Ignore newline character

    // Display library information before entering menu
    std::cout << "\n" << library.getLibraryName() << std::endl;
    std::cout <<  library.getLibraryLocation() << std::endl;

    char choice;
    do {
        // Display menu
        std::cout << "\nMenu:\n";
        std::cout << "A. Add a Book\n";
        std::cout << "L. List the Libarary and Book information\n";
        std::cout << "Q. Quit the program\n";
        std::cout << "Selection: ";
        std::cin >> choice;
        std::cin.ignore(); // Ignore newline character

        switch (toupper(choice)) {
        case 'A': {
            if (library.countBooksInList() < library.getMaxBooksInList()) {
                std::string title, author;
                int year;
                bool hardbound;

                // Get book information
                std::cout << "\nBook title (blank not allowed): ";
                std::getline(std::cin, title);

                std::cout << "Book author (blank not allowed): ";
                std::getline(std::cin, author);

                std::cout << "Copyright Year (4-digits between 1900-2023 inclusive): ";
                std::cin >> year;

                std::cout << "Book Hardbound (1=Yes / 0=No): ";
                std::cin >> hardbound;

                Book newBook(title, author, year, hardbound);
                library.addBook(newBook);
            }
            else {
                std::cout << "Cannot add more books. Library is full." << std::endl;
            }
            break;
        }
        case 'L': {
            std::cout << std::endl << library.getLibraryName() << std::endl << std::endl;
            library.listLibraryInfo();
            std::cout << "\nHardbound Books: " << library.calcNumberHardbound() << std::endl;
            std::cout << "Paperback Books: " << library.calcNumberPaperback() << std::endl;
            break;
        }
        case 'Q': {
            std::cout << "Exiting program...\n";
            break;
        }
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (toupper(choice) != 'Q');

    return 0;
}



