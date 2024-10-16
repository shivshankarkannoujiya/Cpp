#include<iostream>
#include<string>
#include<vector>


// !Defining a book structure
struct Book{
    int id; 
    std::string bookTitle;
    std::string author;
    bool isBorrowed;
};


// !function declaration
void addBook(std::vector<Book>& library);
void displayBooks(std::vector<Book>& library);
void borrowBook(std::vector<Book>& library);
void returnBook(std::vector<Book>& library);

int main(){
    
    std::vector<Book> library;
    int choice;

    do{
        std::cout<<std::endl;
        std::cout<<"======= LIBRARY MANAGEMENT SYSTEM ======="<<std::endl<<std::endl;
        std::cout<<"1. Add Books"<<std::endl;
        std::cout<<"2. View Books"<<std::endl;
        std::cout<<"3. Borrow Books"<<std::endl;
        std::cout<<"4. Return Books"<<std::endl;
        std::cout<<"5. Exit"<<std::endl;
        std::cout<<std::endl;

        std::cout<<"Enter Your Choice : ";
        std::cin>>choice;

        switch(choice){
            case 1:
                addBook(library);
                break;
            case 2:
                displayBooks(library);
                break;
            case 3: 
                borrowBook(library);
                break;
            case 4:
                returnBook(library);
                break;
            case 5:
                std::cout<<"Exiting..."<<std::endl;
                break;
            default:
                std::cout<<"Invalid Choice, Please try again."<<std::endl;
        }
    }while(choice != 5);
    return 0; 
}

// !Function Definition
void addBook(std::vector<Book>& library){
    Book newBook;
    std::cout<<"Enter book ID : ";
    std::cin>>newBook.id;
    std::cin.ignore(); //to ignore the newline character left by std::cin
    std::cout<<"Enter book title : ";
    std::getline(std::cin,newBook.bookTitle);
    std::cout<<"Enter book author : ";
    std::getline(std::cin,newBook.author);
    newBook.isBorrowed = false;
    library.push_back(newBook);
    std::cout<<"Book is added Successfully..."<<std::endl;
}


void displayBooks(std::vector<Book>& library){
    if(library.empty()){
        std::cout<<"No Books in Library !"<<std::endl;
        return;
    }
    std::cout<<"Available Books : "<<std::endl;
    for(const auto &book : library ){
        std::cout<<"ID : "<<book.id<<std::endl<<"Title : "<<book.bookTitle<<std::endl<<"Author : "<<book.author<<std::endl<<"Borrowed"<<(book.isBorrowed ? "YES" : "NO")<<std::endl;
    }
}

void borrowBook(std::vector<Book>& library){
    int id;
    std::cout<<"Enter book ID to Borrow : ";
    std::cin>>id;

    for(auto& book : library){
        if(book.id == id){
            if(!book.isBorrowed){
                book.isBorrowed = true;
                std::cout<<"You have Successfully borrowed the book"<<std::endl;
            }else{
                std::cout<<"The Book is already Borrowed"<<std::endl;
            }
            return;
        }
    }
    std::cout<<"Book ID is not Found !"<<std::endl;
}

void returnBook(std::vector<Book>& library){

    int id;
    std::cout<<"Enter Book ID : ";
    std::cin>>id;

    for(auto& book : library){
        if(book.id == id){
            if(book.isBorrowed){
                book.isBorrowed = false;
                std::cout<<"You have Successfully returned the Book"<<std::endl;
            }else{
                std::cout<<"This book is not Borrowed !"<<std::endl;
            }
            return;
        }
    }
    std::cout<<"Book ID not Found !"<<std::endl;
}