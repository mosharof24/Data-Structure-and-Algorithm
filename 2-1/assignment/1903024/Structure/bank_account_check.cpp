/*Create a structure to specify data of customers in a bank. The
data to be stored is: Account number, Name, Balance in
account. Assume maximum of 200 customers in the bank.
(a) c code to print the Account number and name
of each customer with balance below Rs. 100*/
#include<iostream>
using namespace std;
struct bank
{
    double acc_num;
    char name[50];
    double bal;



}x[5];

void account_balance(double y);
int main()
{
    int i;
    for (i=0;i<5;i++)
    {
        cout<<"Enter account number "<<endl;
        cin>>x[i].acc_num;
        cout<<"Enter account holder name "<<endl;
        cin>>x[i].name;
        cout<<"Enter him/her balance "<<endl;
        cin>>x[i].bal;
    }

     account_balance(1001);
    }
    void account_balance(double y)
    {


    int j=0;
    for(int i=0;i<5;i++)
    {
        if(y==x[i].acc_num)
        {
            cout<<"\n"<<x[i].name<<" ,whose account balance is "<<x[i].bal<<" His/her account number is "<<x[i].acc_num<<endl;
            j=1;
        }
    }
        if(j==0)
        {
            cout<<" err!No data found"<<endl;
            }
    }


