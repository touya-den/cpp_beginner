#include <iostream>
#include <string>
using namespace std;

bool test(int a){
    if(a % 3 == 0 && a % 7 == 0){
        return false;
    }
    if(a % 3 == 0) return true;
    if(a % 7 == 0) return true;
}

int main(){

cout << test(21) << endl;
cout << test(9) << endl;
cout << test(14) << endl;

return 0;
}
