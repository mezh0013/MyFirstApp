#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << " hello world";
    

    cout << " chooses between 1 and 10:";
    cin >> num;
    if (num > 1 || num < 11)
    {
        cout << "choose again" << endl;
            cin >> num;
    }
}
    



