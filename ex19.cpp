#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    double a, b;
    cin >> a; 
    cout << "Your a number is " << a << endl;
    cin >> b;
    cout << "Your b number is " << b << endl;
    if(abs(100 - a) > abs(100 - b)){
        cout << "The nearest number is " << b << endl;
    }
    else{
        cout << "The nearest number is " << a << endl;
    }

return 0;
}
