#include<iostream>

using namespace std;

struct book{
    string author_name;
    string book_name;
    uint publicattion_year;
    float price;
};

int main(){
    book book1,book2;
    
    book1.author_name = "Willium";
    book1.book_name = "management";
    book1.price = 120;
    book1.publicattion_year = 1998;

    book2.author_name = "Willium Henry";
    book2.book_name = "Electronics";
    book2.publicattion_year = 2000;
    book2.price = 300;

    float totalPrice = book1.price+book2.price;

    cout << "total price = " << totalPrice << endl;

    return 0;
}