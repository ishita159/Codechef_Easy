#include <iostream>
using namespace std;
int main()
{
    int t, ele;
    cin >> t;
    while (t--)
    {
        cin >> ele;
        cout << ((ele % 6) == 0 ? "Misha" : "Chef") << endl;
    }
}