#include <iostream>
#include <string>
using namespace std;

int test(int a, int b){
    return to_string(a + b).length() == to_string(a).length() ? a + b : a;
}

int main(){

cout << test(4, 5) << endl;
cout << test(7, 4) <<endl;
cout << test(10, 10) <<endl;

return 0;
}
