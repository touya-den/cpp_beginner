#include <iostream>
#include <string>
using namespace std;

bool test(int a, int b, int c){
    if(a + b == c) return true;
    else return false;
}

int main(){

cout << test(1, -1, 0) << endl;
cout << test(3, 3, 6) << endl;
cout << test(0, 1, 0) << endl;

return 0;
}
