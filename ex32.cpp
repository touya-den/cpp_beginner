#include <iostream>
#include <string>
using namespace std;

int count(int a[], int alength, int b){
    int count = 0;
    for(int i = 0; i <= alength - 2; i++){
        if(a[i] == b && a[i + 1] == b){
            count++;
        }
    }
    return count;
}

int main(){

int nums[] = {1, 1, 1, 3, 1, 2 ,3};
int numslength = sizeof(nums) / sizeof(nums[0]);
cout << count(nums, numslength, 1) << endl;
int nums1[] = {1, 2, 2, 2, 2, 2, 3, 3};
int numslength1 = sizeof(nums1) / sizeof(nums1[0]);
cout << count(nums1, numslength1, 2) << endl;

return 0;
}
