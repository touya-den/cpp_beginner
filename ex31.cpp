#include <iostream>
#include <string>
using namespace std;

int count(int a[], int alength){
    int count = 0;
    for(int i = 0; i <= alength - 3; i++){
        if(a[i] == 1 && a[i + 1] == 2 & a[i + 2] == 3){
            count++;
        }
    }
    return count;
}

int main(){

int nums[] = {1, 1, 2, 3, 1, 2 ,3};
int numslength = sizeof(nums) / sizeof(nums[0]);
cout << count(nums, numslength) << endl;
int nums1[] = {1, 1, 2, 1, 2, 3};
int numslength1 = sizeof(nums1) / sizeof(nums1[0]);
cout << count(nums1, numslength1) << endl;

return 0;
}
