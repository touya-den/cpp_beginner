#include <iostream>
#include <string>
using namespace std;

bool test(int a[], int alength){
    for(int i = 0; i <= alength - 3; i++){
        if(a[i] == a[i + 1] && a[i + 1] == a[i + 2]){
            return true;
        }
    }
    return false;
}

int main(){

int a1[] = {1, 1, 1, 2, 3};
int a1length = sizeof(a1) / sizeof(a1[0]);
cout << test(a1, a1length) << endl;
int a2[] = {1, 1, 2, 2, 3, 3};
int a2length = sizeof(a2) / sizeof(a2[0]);
cout << test(a2, a2length) << endl;

return 0;
}
