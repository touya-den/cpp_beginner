#include <iostream>
#include <string>
using namespace std;

int main(){

    int n, a;
    cin >> n;
    cout << "Your value n is " << n << "\n";
    if( n > 51){
        a = abs((n - 51)*3);
        cout << "Coz n > 51 so I triple the absolute difference and get the value a is " << a << "\n";
    }
    else {
        a = abs(n - 51);
        cout << "The absolute difference is " << a << "\n";
    }

return 0;
}
