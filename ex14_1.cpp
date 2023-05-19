#include <iostream>
#include <string>
using namespace std;

bool test(double a, double b){
    return (a >= 100 & a <= 200) || (b >= 100 & b <= 200);
}

int main(){

    cout << test(100, 200) << endl;
    cout << test(100, 300) << endl;
    cout << test(300, 99) << endl;
    cout << test(99, 201) << endl;

return 0;
}
