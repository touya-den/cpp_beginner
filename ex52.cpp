#include <iostream>
using namespace std;

int test(int a, int b, int c){
    if(a == b) return c;
    return a + b + c;
}

int main(){

cout << test(4, 5, 7) << endl;
cout << test(7, 4, 12) <<endl;
cout << test(10, 10, 12) <<endl;

return 0;
}
