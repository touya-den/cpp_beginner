#include <iostream>
#include <string>
using namespace std;

int test(int a, int b){
    int c = 0;
    if(a % 7 == b % 7){
        if(a > b) return b;
        else return a;
    }
    if(a > b) return a;
    else return b;
    if(a == b) return c;
}

int main(){

cout << test(11, 21) << endl;
cout << test(11, 25) << endl;
cout << test(10, 10) << endl;

return 0;
}
