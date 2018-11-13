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
    if (s == '+') {
        cout << "a + b =" << a + b;
    }else if (s == '-'){
        cout << "a - b =" << a - b;
    }else if (s == '*'){
        cout << "a * b =" << a * b;
    }else if (s == '/'){
        if (b == 0)
        {
            cout << "Devide by Zero is denied!";
            return -1;
        }
        cout << "a / b =" << a / b;
    }else{
        cout << "Invalid Sign! Avaliable signs: +, -, *, /";
    }
    cout << endl;
    return 0;
}
