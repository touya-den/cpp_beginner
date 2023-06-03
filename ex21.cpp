#include <iostream>
#include <string>
using namespace std;

int test(int a, int b){
    if(a >= 20 && a <= 30){
        if(b >= 20 && b <= 30){
            if(a >= b) return a;
            else if(b > a) return b;
        }
    }
    else return 0;
}

int main(){

cout << test(10, 30) << endl;
cout << test(20, 25) << endl;
cout << test(78, 95) << endl;
cout << test(28, 28) << endl;   

return 0;
}
