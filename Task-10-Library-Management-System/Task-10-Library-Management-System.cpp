#include <iostream>
#include <fstream>
using namespace std;

struct Date {
    int day, month, year;
};

class Book {
private:
    int bookID;
    string title;
    string author;
    bool isIssued;
    Date issueDate;

public:
    Book() {
        bookID = 0;
        title = "";
        author = "";
        isIssued = false;
        issueDate = {0,0,0};
    }

    void input() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore();

        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Author: ";
        getline(cin, author);
    }

    void display() {
        cout << "ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;

        if (isIssued) {
            cout << "Status: Issued on "
                 << issueDate.day << "/"
                 << issueDate.month << "/"
                 << issueDate.year << endl;
        } else {
            cout << "Status: Available" << endl;
        }
        cout << "----------------------" << endl;
    }

    void issueBook(Date d) {
        if (!isIssued) {
            isIssued = true;
            issueDate = d;
            cout << "Book Issued Successfully!" << endl;
        } else {
            cout << "Already Issued!" << endl;
        }
    }

    void returnBook() {
        if (isIssued) {
            isIssued = false;
            issueDate = {0,0,0};
            cout << "Book Returned Successfully!" << endl;
        } else {
            cout << "This book was not issued." << endl;
        }
    }

    int getID() {
        return bookID;
    }

    bool operator==(Book b) {
        return this->bookID == b.bookID;
    }

    void save(ofstream &file) {
        file << bookID << endl;
        file << title << endl;
        file << author << endl;
        file << isIssued << endl;
        file << issueDate.day << " "
             << issueDate.month << " "
             << issueDate.year << endl;
    }
};

int main() {
    int capacity = 5;
    int count = 0;

    Book* library = new Book[capacity];

    int choice;

    do {
        cout << "\n===== Library Menu =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display All Books" << endl;
        cout << "3. Issue Book" << endl;
        cout << "4. Return Book" << endl;
        cout << "5. Save to File" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            if (count < capacity) {
                library[count].input();
                count++;
            } else {
                cout << "Library Full!" << endl;
            }
        }

        else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                library[i].display();
            }
        }

        else if (choice == 3) {
            int id;
            cout << "Enter Book ID to issue: ";
            cin >> id;

            Date d;
            cout << "Enter issue date (dd mm yyyy): ";
            cin >> d.day >> d.month >> d.year;

            for (int i = 0; i < count; i++) {
                if (library[i].getID() == id) {
                    library[i].issueBook(d);
                }
            }
        }

        else if (choice == 4) {
            int id;
            cout << "Enter Book ID to return: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (library[i].getID() == id) {
                    library[i].returnBook();
                }
            }
        }

        else if (choice == 5) {
            ofstream file("library.txt");

            for (int i = 0; i < count; i++) {
                library[i].save(file);
            }

            file.close();
            cout << "Data saved to file!" << endl;
        }

    } while (choice != 0);

    delete[] library;

    return 0;
}