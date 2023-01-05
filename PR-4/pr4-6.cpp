#include <iostream>
using namespace std;
class zenisha
{
private:
int id;
char nm[200];
public:
zenisha()
{
cout << "Welcome to the Hotel...." << endl;
cout << "Enter Customer ID : ";
cin >> id;
cout << "Enter Customer Name : ";
cin >> nm;
cout
<< "\n\tCUSTOMER DETAILS\n ";
cout
<< "Customer ID\tCustomer Name\n-------------- --------------\n";
cout << id << "\t\t" << nm << "\t" << endl;
}
};
int main()
{
zenisha s1;
}

