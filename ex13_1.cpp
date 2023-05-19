#include <iostream>
#include <string>
using namespace std;

bool test(double a, double b){
    return (a < 0 & b > 100) || (a > 100 & b < 0);
}

int main(){

    cout << test(0.1, 99.9) << endl;
    cout << test(-0.1, 100) << endl;
    cout << test(-1, 100.1) << endl;
    cout << test(-0.005, 100.005) << endl;
    cout << test(-1, -101) << endl;

return 0;
}
