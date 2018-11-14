#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    char s;
    cout << "Input a:";
    cin >> a;
    if (cin.fail()){
        cout << "The value of 'a' must be a valid number!";
        return -2;
    }
    cout << "Input b:";
    cin >> b;
    if (cin.fail()){
        cout << "The value of 'b' must be a valid number!";
        return -3;
    }
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
        cout << "a / b =" << a / double(b);
    }else{
        cout << "Invalid Sign! Avaliable signs: +, -, *, /";
    }
    cout << endl;
    return 0;
}
