#include <iostream>
#include <string>
using namespace std;

int main(){

    int a, b, sum;
    cin >> a;
    cin >> b;
    cout << "You input a is " << a << "\n";
    cout << "You input b is " << b << "\n";
    sum = a + b;
    if(a == 30 || b == 30 || sum == 30){
        cout << "True\n"; 
    }
    else cout << "False\n";

return 0;
}
