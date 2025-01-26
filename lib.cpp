//MinGW

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class Book{
  public:

  int id;
  string title;
  string author;

  Book(int ids, string titles, string authors){
    id = ids;
    title = titles;
    author = authors;
  }

};


class Library{

public:
vector <Book> books;

void addBook(int id, string title, string author){
    books.push_back(Book(id, title, author));
    cout<<"Book added successfully";
}

void displayBook(){
     if(books.empty()) {
         cout<<"No Books found"<<endl;
         return;
     }
     
     for(const auto&book : books){
        cout<<"Book ID: "<<book.id<<", Title: "<<book.title<<", Author: "<<book.author<<endl;

     }
}


void searchBook(int id){
    for(const auto&book : books){
        if(book.id==id){
            cout<<"Book ID: "<<book.id<<", Title: "<<book.title<<", Author: "<<book.author<<endl;
            return;
        }
    }

    cout<<"Book not found"<<endl;
}
};



int main()
{


    Library library;
    int choice;

    while (true)
    {
        cout<<"1. Add Book"<<endl;
        cout<<"2. Display Book"<<endl;
        cout<<"3. Search Book"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;


        if(choice==1){
            int id;
            string title;
            string author;

            cout<<"Enter Book ID: ";
            cin>>id;
            cout<<"Enter Book Title: ";
            cin>>title;
            cout<<"Enter Book Author: ";
            cin>>author;

            library.addBook(id, title, author);
        }


        else if(choice ==2){
            library.displayBook();

        }

        else if(choice ==3){
            int id;
            cout<<"Enter Book ID to search: ";
            cin>>id;
            library.searchBook(id);
        }

        else if(choice ==4){
             break;
             
        }
    }
    
    return 0;
    
}
