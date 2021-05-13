/*
 * =====================================================================================
 *
 *       Filename:  cajero .cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  10/05/2021 1:51:14
 *       Revision:  none
 *       Compiler:  c++
 *
 *         Author:  YOUR NAME (MOISES), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class cajero
{
        int acno;
        char nm[100], acctype[100];
        float bal;  
   public:
        cajero(int acc_no, char *name, char *acc_type, float balance)  //Parameterized Constructor
        {
                acno=acc_no;
                strcpy(nm, name);
                strcpy(acctype, acc_type);
                bal=balance;
        }
        void deposit();
        void withdraw();
        void display();
};
void cajero::deposit()   //depositing an amount
{
        int damt1;
        cout<<"\n Enter Deposit Amount = ";
        cin>>damt1;
        bal+=damt1;
}
void cajero::withdraw()  //withdrawing an amount
{
        int wamt1;
        cout<<"\n Enter Withdraw Amount = ";
        cin>>wamt1;
        if(wamt1>bal)
                cout<<"\n Cannot Withdraw Amount";
        bal-=wamt1;
}
void cajero::display()  //displaying the details
{
        cout<<"\n ----------------------";
        cout<<"\n Accout No. : "<<acno;
        cout<<"\n Name : "<<nm;
        cout<<"\n Account Type : "<<acctype;
        cout<<"\n Balance : "<<bal;  
}
int main()
{      
        int acc_no;
        char name[100], acc_type[100];
        float balance;
        cout<<"\n hola bien venido al cajero automatuco : \n";
        cout<<"-----------------------";
        cout<<"\n Accout No. ";
        cin>>acc_no;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Account Type : ";
        cin>>acc_type;
        cout<<"\n Balance : ";
        cin>>balance;
  
        cajero b1(acc_no, name, acc_type, balance);  //object is created
        b1.deposit(); //
        b1.withdraw(); // calling member functions
        b1.display(); //
        return 0;
}
