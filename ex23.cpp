#include <iostream>
#include <string>
using namespace std;

bool test(int a, int b){
    return ((a % 10) == (b % 10));
}

int main(){

cout << test(123, 233) << endl;
cout << test(12, 10002) << endl;
cout << test(101, 999) << endl;

return 0;
}
