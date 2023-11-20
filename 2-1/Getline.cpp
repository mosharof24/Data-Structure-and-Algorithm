#include<iostream>
#include<string.h>

using namespace std;

struct book{
    string author_name;
    string book_name;
    uint publicattion_year;
    float price;
};

int main(){
    book book1,book2;
    getline(cin, book1.author_name);  //by default delimitation char is '\n'
    cout << book1.author_name << endl;

    char author[20];
    //int NameLength;
    //cout << "enter the length of author name" << endl;
    //cin >> NameLength;
    //author = (char*)malloc(NameLength);
    cin.getline(author,20);  //by default delimitation char is '\n'
    cout << author << endl;
    //free(author);

    return 0;
}