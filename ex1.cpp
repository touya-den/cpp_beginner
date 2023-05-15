#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b, sum;
    cin >> a;
    cin >> b;
    cout << "Your a number is " << a << "\n";
    cout << "Your b number is " << b << "\n";
    if( a == b){
        sum = (a + b)*3;
    }
    else{
        sum = a + b;
    }
    cout << "a + b = " << sum;

return 0;
}
