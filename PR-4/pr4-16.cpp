#include <iostream>
using namespace std;
class BankManagementSystem
{
protected:
char Nch, Sch, ans;
string name, email;
int account;
long long int phonenum;
int amount = 200000, dep, trans, with;
public:
BankManagementSystem()
{
cout << endl
<< "\t\t\t-: BANK MANAGEMENT SYSTEM :-" << endl;
cout << "\t\t ==================================" << endl;
cout << endl
<< endl
<< "\t\t\t-: Designed Programmed By :-" << endl;
cout << "\t\t ----------------------------------" << endl;
cout << "\t\t\t\tZENISHA H DONDA" << endl
<< endl;
cout << endl
<< "\t\t\t\t-: Trainer :-" << endl;
cout << "\t\t ----------------------------------" << endl;
cout << "\t\t\t\tJAY GONDALIYA" << endl
<< endl
<< endl;
cout << "\t\t\tPress N To Continue The Process :";
cin >> Nch;
system("cls");
switch (Nch)
{
case 'N':
cout << endl
<< endl
<< endl
<< endl
<< "\t--------------------------------------------------------------" << endl;
cout << "\t-: Press A To Login As Administrator Or S To Login As Staff :-";
cin >> Sch;
cout << "\t--------------------------------------------------------------" << endl
<< endl
<< endl
<< endl;
system("cls");
switch (Sch)
{
case 'A':
adminstrator();
break;
case 'S':
staff();
break;
default:
break;
}
break;
default:
break;
}
}
void adminstrator()
{
cout << endl
<< endl
<<
"-------------------------------------------------------------------------------------------------------------"
<< endl;
cout << "\t\t\t\t-: Welcome As Adminitsrator :-" << endl;
cout <<
"-------------------------------------------------------------------------------------------------------------"
<< endl;
cout << endl
<< endl
<< "Enter The Name Of Administrator :";
fflush(stdin);
getline(cin, name);
cout << "Enter The Account Number Of Administrator :";
cin >> account;
cout << "Enter The Phone Number Of Administrator :";
cin >> phonenum;
cout << "Enter The Email Of Administrator :";
fflush(stdin);
getline(cin, email);
cout << endl
<< endl
<< endl
<< endl;
system("cls");
cout <<
"-------------------------------------------------------------------------------------------------------------"
<< endl;
cout << "Name :" << name << endl;
cout << "Account No :" << account << endl;
cout << "Phone No :" << phonenum << endl;
cout << "Email :" << email << endl;
cout <<
"-------------------------------------------------------------------------------------------------------------"
<< endl;
cout << endl
<< endl;
cout << "\t\t\t\tPress [1] for Deposite Money: " << endl
<< endl;
cout << "\t\t\t\tPress [2] for Transfer Money: " << endl
<< endl;
cout << "\t\t\t\tPress [3] for Withdraw Money: ";
cin >> ans;
cout << endl
<< endl
<< endl
<< endl
<< endl
<< endl;
system("cls");
switch (ans)
{
case '1':
deposite();
break;
case '2':
transfer();
break;
case '3':
withdraw();
break;
default:
break;
}
}
void staff()
{
cout << endl
<< endl
<<
"-------------------------------------------------------------------------------------------------------------"
<< endl;
cout << "\t\t\t\t-: Welcome As STAFF :-" << endl;
cout <<
"-------------------------------------------------------------------------------------------------------------"
<< endl;
cout << endl
<< endl
<< "Enter The Name Of Staff :";
fflush(stdin);
getline(cin, name);
cout << "Enter The Account Number Of Staff :";
cin >> account;
cout << "Enter The Phone Number Of Staff :";
cin >> phonenum;
cout << "Enter The Email Of Staff :";
fflush(stdin);
getline(cin, email);
cout << endl
<< endl
<< endl
<< endl;
system("cls");
cout <<
"-------------------------------------------------------------------------------------------------------------"
<< endl;
cout << "Name :" << name << endl;
cout << "Account No :" << account << endl;
cout << "Phone No :" << phonenum << endl;
cout << "Email :" << email << endl;
cout <<
"-------------------------------------------------------------------------------------------------------------"
<< endl;
cout << endl
<< endl;
cout << "\t\t\t\tPress [1] for Deposite Money: " << endl
<< endl;
cout << "\t\t\t\tPress [2] for Transfer Money: " << endl
<< endl;
cout << "\t\t\t\tPress [3] for Withdraw Money: ";
cin >> ans;
cout << endl
<< endl
<< endl
<< endl
<< endl
<< endl;
system("cls");
switch (ans)
{
case '1':
deposite();
break;
case '2':
transfer();
break;
case '3':
withdraw();
break;
default:
break;
}
}
void deposite()
{
cout <<
"-------------------------------------------------------------------------------------------------------------"
<< endl;
cout << "\tDeposite The Money :";
cin >> dep;
cout <<
"-------------------------------------------------------------------------------------------------------------"
<< endl
<< endl;
cout << "\tYour Actual Amount Is :" << amount << endl
<< endl;
cout << "\tCongrats!! Your Amount Is Deposited..." << endl
<< endl;
cout << "\tYour Account Balance :" << amount + dep << endl
<< endl;
}
void transfer()
{
cout <<
"-------------------------------------------------------------------------------------------------------------"
<< endl;
cout << "\tTransfer The Money :";
cin >> trans;
cout <<
"-------------------------------------------------------------------------------------------------------------"
<< endl
<< endl;
cout << "\tYour Actual Amount Is :" << amount << endl
<< endl;
cout << "\tCongrats!! Your Amount Is Transferred..." << endl
<< endl;
cout << "\tYour Account Balance :" << amount - trans << endl
<< endl;
}
void withdraw()
{
cout <<
"-------------------------------------------------------------------------------------------------------------"
<< endl;
cout << "\tWithdraw The Money :";
cin >> with;
cout <<
"-------------------------------------------------------------------------------------------------------------"
<< endl
<< endl;
cout << "\tYour Actual Amount Is :" << amount << endl
<< endl;
cout << "\tCongrats!! Your Amount Is Withdrawn..." << endl
<< endl;
cout << "\tYour Account Balance :" << amount - with << endl
<< endl;
}
};
int main()
{
BankManagementSystem b1;
}

