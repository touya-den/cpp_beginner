#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

vector<int> numbers(0);
int n, a, j;
int maxx = 0;
cin >> n;
cout << "Input " << n << " numbers" << endl;
for(int i = 1; i <= n; i++){
    cin >> a;
    numbers.push_back(a);
}
for(auto j : numbers){
    if(j >= 20 && j <= 30){
        if(j >= maxx) maxx = j;
    }
}
cout << maxx << endl;

return 0;
}
