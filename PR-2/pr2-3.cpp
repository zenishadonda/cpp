#include <iostream>
using namespace std;
int fact(int);
int main()
{
int n, ans;
cout << "Enter Value Of N = ";
cin >> n;
ans = fact(n);
cout << "Factorial Of " << n << " is = " << ans;
}
int fact(int a)
{
if (a <= 1)
return 1;
else
return a * fact(a - 1);
}
