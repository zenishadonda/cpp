#include <iostream>
using namespace std;
class hotel
{
private:
int id;
string nm, city;
public:
hotel(int id, string nm, string city)
{
cout << "\t\t\t\tWelcome to the hotel..." << endl;
this->id = id;
this->nm = nm;
this->city = city;
cout << "\t\t\t\tID\t : " << this->id << endl
<< "\t\t\t\tName\t : " << this->nm << endl
<< "\t\t\t\tCity\t : " << this->city << endl;
}
hotel(hotel &h)
{
cout << "\t\t\t\tWelcome to the hotel..." << endl;
this->id = h.id;
this->nm = h.nm;
this->city = h.city;
cout << "\t\t\t\tID\t : " << this->id << endl
<< "\t\t\t\tName\t : " << this->nm << endl
<< "\t\t\t\tCity\t : " << this->city << endl
<< endl
<< endl;
}
};
int main()
{
cout << endl
<< "\t\t\t\tRegular Value..." << endl
<< endl;
hotel h1(1, "Marriot", "Surat");
hotel h2(2, "Lacasa", "Surat");
cout << endl
<< "\t\t\t\tCopied Value..." << endl
<< endl;
hotel h3(h1);
hotel h4(h2);
}
