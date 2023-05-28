#include <iostream>
#include <string>
using namespace std;

int main(){

    int a, b;
    bool flag = true;
    cin >> a;
    cout << "Your a number is " << a << endl;
    cin >> b;
    cout << "Your b number is " << b << endl;
    if(((a >= 20 && a <= 50) && (b < 20 || b > 50)) || ((a < 20 || a > 50) && (b >= 20 && b <= 50))){
        cout << flag << endl;
    }
    else{
        flag = false;
        cout << flag << endl;
    }

return 0;
}
