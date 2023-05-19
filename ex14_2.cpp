#include <iostream>
#include <string>
using namespace std;

int main(){

    double a, b;
    bool flag = true;
    cin >> a;
    cout << "Your a number is " << a << endl;
    cin >> b;
    cout << "Your b number is " << b << endl;
    if((a >= 100 & a <= 200) || (b >= 100 & b <= 200)){
        cout << flag << endl << boolalpha << flag << endl;
    }
    else{
        flag = false;
        cout << flag << endl << boolalpha << flag << endl;
    }

return 0;
}
