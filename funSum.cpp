#include <iostream>
using namespace std;
void sum(int no1, int no2)
{
    cout<<no1 + no2<<" ";
}
void Sub(int no1, int no2)
{
    cout<<no1 - no2<<" ";
}
void mul(int no1, int no2)
{
    cout<<no1 * no2<<" ";
}
void division(int no1, int no2)
{
    cout<<no1 / no2<<" ";
}

int main()
{
    int n1, n2;
    cout << "Enter the number n1= and n2= ";
    cin >> n1 >> n2;
   sum(n1, n2);
   Sub(n1,n2);
    mul(n1,n2);
    division(n1,n2);

    return 0;
}