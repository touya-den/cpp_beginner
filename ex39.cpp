#include <iostream>
#include <string>
using namespace std;

bool test(int a){
    for(int i = 1; i <= a/13; i++){
        if((a == 13 * i + 1) || (a == 13 * i)){
            return true;
        }
    }
    return false;
}

int main(){

cout << test(13) << endl;
cout << test(14) << endl;
cout << test(15) << endl;
cout << test(27) << endl;
cout << test(41) << endl;

return 0;
}
