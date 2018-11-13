#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    char s;
    cout << "Input a:";
    cin >> a;
    cout << "Input b:";
    cin >> b;
    cout << "Input sign:";
    cin >> s;
    if (s == '+')
        cout << "a + b =" << a + b;
    cout << endl;
    return 0;
}
