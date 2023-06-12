#include <iostream>
#include <string>
using namespace std;

bool test(int a, int b){
    int c = a * b;
    if(c % 5 == 0){
        return true;
    }
    if(a + b == 5){
        return true;
    }
    return false;
}

int main(){

cout << test(4, 1) << endl;
cout << test(5, 4) << endl;
cout << test(3, 4) << endl;
cout << test(4, 6) << endl;
cout << test(100, 1) << endl;

return 0;
}
