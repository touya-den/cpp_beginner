#include <iostream>
#include <string>
using namespace std;

int test(int numbers[], int numberlength, int a){
    int ss = 0, j = 0;
    int temp = a;
    for(int i = 0; i <= numberlength - 1; i++){
        if(numbers[i] < a){
            ss = a - numbers[i];
            if(ss < temp) {
                temp = ss;
                j = i + 1;
            }
        }
        if(numbers[i] == a){
            cout << i + 1 << endl;
            return numbers[i];
        }
    }
    temp = a - ss;
    cout << j << endl;
    return temp;
}


int main(){

int a1[] = {1, 2, 3, 4 ,5};
int a1length = sizeof(a1) / sizeof(a1[0]);
int a1ss = 6;
cout << test(a1, a1length, a1ss) << endl;

int a2[] = {1, 2, 3, 4 ,5, 6};
int a2length = sizeof(a2) / sizeof(a2[0]);
int a2ss = 6;
cout << test(a2, a2length, a2ss) << endl;

return 0;
}
