#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    if(c >= 10 && c <= 20) return 30;
    else return c;
}

int main(){

cout << sum(5, 10) << endl;
cout << sum(12, 17) << endl;
cout << sum(22, 17) << endl;

return 0;
}
