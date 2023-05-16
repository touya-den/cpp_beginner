#include <iostream>
#include <string>
using namespace std;

    bool test(int a){
        return (a%3 == 0 || a%7 == 0);
    }

int main(){

    cout << test(3) << endl;
    cout << test(14) << endl;
    cout << test(32) << endl;
    cout << test(37) << endl;

return 0;
}
