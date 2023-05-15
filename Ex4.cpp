#include <iostream>
#include <string>
using namespace std;

bool test(int x){
    return((x >= 100 - 10 && x <= 100 + 10) || (x >= 200 - 10 && x <= 200 + 10));
}

int main(){

    cout << test(103) << endl;
    cout << test(90) << endl;
    cout << test(89) << endl;
    cout << test(201) << endl;
    cout << test(198) << endl;
    cout << test(189) << endl;

return 0;
}
