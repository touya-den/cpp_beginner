#include <iostream>
#include <string>
using namespace std;

int main(){

    double a, b;
    bool flag = true;
    cin >> a;
    cout << "The 1st temp a is " << a << endl;
    cin >> b;
    cout << "The 2nd temp b is " << b << endl; 
    if((a < 0 & b > 100) || (a > 100 & b < 0)){
        cout << "1" << endl;
        flag = true;
        cout << boolalpha << flag << endl;
    }   
    else{
        cout << "0" << endl;
        flag = false;
        cout << boolalpha << flag << endl;
    }

return 0;
}
