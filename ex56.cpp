#include <iostream>
#include <string>
using namespace std;

int test(int numbers[], int numberslength){
    int count = 0;
    for(int i = 0; i <= numberslength - 2; i++){
        if(numbers[i + 1] - numbers[i] == 1){
            count+=1;
            for(int j = i + 1; j <= numberslength - 1; j++){
                if(j == numberslength - 1){
                    return count;
                }
                if(numbers[j] < numbers[j + 1] && numbers[j + 1] - numbers[j] == 1) count+=1;
                else{
                    if(count >= 2) return count;
                    else break;
                }
            }
        }
    }
    return count;
}

int main(){

int a1[] = {1, 2, 3, 4 ,5};
int a1length = sizeof(a1) / sizeof(a1[0]);
cout << test(a1, a1length) << endl;

int a2[] = {1, 2, 3, 5, 5};
int a2length = sizeof(a2) / sizeof(a2[0]);
cout << test(a2, a2length) << endl;

int a3[] = {1, 3, 4, 3, 4, 5, 6};
int a3length = sizeof(a3) / sizeof(a3[0]);
cout << test(a3, a3length) << endl;

return 0;
}
