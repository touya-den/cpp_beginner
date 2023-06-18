#include <iostream>
#include <string>
using namespace std;

bool test(int a, int b){
    if((a >= 10 && a <= 99) || (b >= 10 && b <= 99)){
        if(a % 10 == b % 10) return true;
        else return false;
    }
    return false;
}

int main(){

cout << test(9 ,99) << endl;
cout << test(15, 86) << endl;
cout << test(15, 105) << endl;

return 0;
}
