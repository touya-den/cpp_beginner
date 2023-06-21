#include <iostream>
using namespace std;

int test(int number[], int numberlength){
    int sum = 0;
    for(int i = 0; i <= numberlength - 1; i++){
        while(number[i] < 13){
            sum+=number[i];
            break;
        }
    }
    return sum;
}

int main(){
int a1[] = {1, 2, 3, 13, 4};
int a1length = sizeof(a1) / sizeof(a1[0]);
cout << test(a1, a1length) << endl;

int a2[] = {1, 2, 3, 12, 4, 14};
int a2length = sizeof(a1) / sizeof(a1[0]);
cout << test(a2, a2length) << endl;
return 0;
}
