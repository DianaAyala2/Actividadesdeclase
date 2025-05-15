#include <iostream>
using namespace std;
int main()
{
    int num;
    for (int i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        { // si es divisible entre dos es par.
            cout << i << endl;
        }
    }
    return 0;
}
