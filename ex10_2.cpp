#include <iostream>
#include <string>
using namespace std;

int main(){

    int a;
    cin >> a;
    cout << "Your number a is " << a << endl;
    if(a%3 == 0 || a%7 == 0){
        cout << 1;
    }
    else{
        cout << 0;
    }

return 0;
}
