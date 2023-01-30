//Roan Morgan
//9-21-22
//Code Segments
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m, n = 5;
    do {
        cout << n << " ";
        m = 1;
        do {
            cout << m << " ";
            m = m + 1;
        } while (m < 3);
        n = n - 1;
        cout << endl;
    } while (n > 0);
    return 0;
}