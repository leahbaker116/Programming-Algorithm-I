/* 
Leah Baker
October 3rd 2017 
CSCI 20
    This program will take basic information on books from the user sush as title, author,
    and copyright year. It will then output this information to the user. */

#include <iostream>
#include <string>
using namespace std;

class BookInfo{  //This is where I set up the class for book info 
    public: 
        void setTitle (string t) { //Book title functions
            Title = t;
        }
        string getTitle () {
            return Title;
        }
        
        void setAuthor (string a) { //Book author functions 
            Author = a;
        }
        string getAuthor () {
            return Author;
        }
        
        void setCopyrightYear (string y) { //Year of copyright functions
            CopyrightYear = y;
        }
        string getCopyrightYear () {
            return CopyrightYear;
        }
        
        void Print() {  //This function will print out the user inputed info
            cout<<"Book Title: "<<Title<<endl;
            cout<<"Author: "<<Author<<endl;
            cout<<"Copyright Year: "<<CopyrightYear<<endl<<endl<<endl;
        }
        
    private: //These are the varibles declared within the class
        string Title; 
        string Author;
        string CopyrightYear;
};

int main()
{
string book_title; //Varibles that I declared in the main 
string book_author;
string book_year; //I made this string rather than int to use getline 

cout<<"Book One"<<endl;  //User input for book 1
    cout<<"Enter a book title: ";
    getline (cin, book_title); //I used getline so the title could have spaces
    BookInfo book1;
    book1.setTitle(book_title);
    
    cout<<"Enter the book author: "; 
    getline (cin, book_author);
    book1.setAuthor(book_author);
    
    cout<<"Enter the book copyright year: ";
    getline (cin, book_year);
    book1.setCopyrightYear(book_year);

cout<<"Book Two"<<endl; //User input for book 2
    cout<<"Enter a book title: ";
    getline (cin, book_title);
    BookInfo book2;
    book2.setTitle(book_title);
    
    cout<<"Enter the book author: ";
    getline (cin, book_author);
    book2.setAuthor(book_author);
    
    cout<<"Enter the book copyright year: ";
    getline (cin, book_year);
    book2.setCopyrightYear(book_year);
    
cout<<"Book Three"<<endl; //User input for book 3
    cout<<"Enter a book title: ";
    getline (cin, book_title);
    BookInfo book3;
    book3.setTitle(book_title);
    
    cout<<"Enter the book author: ";
    getline (cin, book_author);
    book3.setAuthor(book_author);
    
    cout<<"Enter the book copyright year: ";
    getline (cin, book_year);
    book3.setCopyrightYear(book_year);
    
cout<<"Book Four"<<endl; //User input for book 4
    cout<<"Enter a book title: ";
    getline (cin, book_title);
    BookInfo book4;
    book4.setTitle(book_title);
    
    cout<<"Enter the book author: ";
    getline (cin, book_author);
    book4.setAuthor(book_author);
    
    cout<<"Enter the book copyright year: ";
    getline (cin, book_year);
    book4.setCopyrightYear(book_year);
    
cout<<"Book Five"<<endl; //User input for book 5
    cout<<"Enter a book title: ";
    getline (cin, book_title);
    BookInfo book5;
    book5.setTitle(book_title);
    
    cout<<"Enter the book author: ";
    getline (cin, book_author);
    book5.setAuthor(book_author);
    
    cout<<"Enter the book copyright year: ";
    getline (cin, book_year);
    book5.setCopyrightYear(book_year);
    
    
    book1.Print(); //These call the print function to output what the user put in
    book2.Print();
    book3.Print();
    book4.Print();
    book5.Print();
}

/*
Here are my outputs

Book Title: It
Author: Stephen King
Copyright Year: 1986


Book Title: pride and prejudice
Author: Jane Austen
Copyright Year: 1813


Book Title: Freakonomics
Author: Stephen J. Dubner and Steven Levitt
Copyright Year: 2005


Book Title: A Game of Thrones
Author: George RR Martin 
Copyright Year: 1996


Book Title: Harry Potter and the Sorcerer's Stone
Author: J. K. Rowling
Copyright Year: 1997
*/
