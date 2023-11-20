#include<iostream>
using namespace std;

class person
{
public:
    string name, email;
    person(string n, string e)
    {
        name = n;
        email = e;
    }
    void showpersonInfo()
    {
        cout<< "Name: " << name <<endl;
        cout<< "Email: " << email <<endl;
    }
};

class Employee : public person
{
public:
    int eID;

    Employee(string n, string e, int i) : person(n, e)
    {
        eID = i;
    }
    void showEmployeeInfo()
    {
        showpersonInfo();
        cout<< "ID: " << eID <<endl;
    }
};

class Student : public person
{
public:
    int sID, semester;

    Student(string n, string e, int i, int s) : person(n, e)
    {
        sID = i;
        semester = s;
    }
    void showStudentInfo()
    {
        showpersonInfo();
        cout<< "ID: " << sID <<endl;
        cout<< "semester: " << semester <<endl;
    }
};

class Faculty : public Employee
{
public:
    int join;

    Faculty(string n, string e, int i, int j) : Employee(n, e, i)
    {
        join = j;
    }
    void showFacultyInfo()
    {
        showEmployeeInfo();
        cout<< "Joining Year: " << join <<endl;
    }
};

class Officer : public Employee
{
public:
    int salary;

    Officer(string n, string e, int i, int s) : Employee(n, e, i)
    {
        salary = s;
    }
    void showOfficerInfo()
    {
        showEmployeeInfo();
        cout<< "Salary: " << salary <<endl;
    }
};

class scholarshipStudent : public Student
{
public:
    int scholar;

    scholarshipStudent(string n, string e, int i, int s, int  sc) : Student(n, e, i, s)
    {
        scholar = sc;
    }
    void showscholarshipStudentInfo()
    {
        showStudentInfo();
        cout<< "ScholarShip: " << scholar << "%" <<endl;
    }
};

class TA : public Employee, public Student
{
public:
    TA(string n, string e, int i, int s) : Employee(n, e, i), Student(n, e, i, s){}

    void showTAinfo()
    {
        showEmployeeInfo();
        showStudentInfo();
    }
};


int main()
{
    person p("Siam", "siam888@gmail.com");
    p.showpersonInfo();
    cout<<endl;

    Employee e("Mosharof", "mosharof@gmail.com", 4545);
    e.showEmployeeInfo();
    cout<<endl;

    Student s("Abir", "abir@gmail.com", 6545, 1);
    s.showStudentInfo();
    cout<<endl;

    Faculty f("Karim", "karim@gmail.com", 5454, 2018);
    f.showFacultyInfo();
    cout<<endl;

    Officer o("Ahnaf", "ahnaf@gmail.com", 2151, 40000);
    o.showOfficerInfo();
    cout<<endl;

    scholarshipStudent ss("Sabbir", "sabbir@gmail.com", 5454, 1, 25);
    ss.showscholarshipStudentInfo();
    cout<<endl;

    TA t("Sifat", "sifat@gmail.com", 1554, 7);
    t.showTAinfo();

    return 0;
}