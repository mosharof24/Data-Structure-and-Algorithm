#include<iostream>

using namespace std;

struct student{
    char name[20];
    int ID;
};

int main(){
    student student1 = {"Mosharof", 1903024};

    printf("name = %s\n",student1.name);
    student1.ID = 11913028;
    cout << student1.ID << endl;

    return 0;
}