#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

vector<int> numbers(0);
int a;
bool flag = false;
for(int i = 1; i <= 2; i++){
    cin >> a;
    numbers.push_back(a);
}
// for(int j = 0; j <= numbers.size() - 1; j++){
//     cout << numbers.at(j) << endl;
// }
if(numbers.at(0) >= 40 && numbers.at(0) <= 50){
    for(int j = 0; j <= numbers.size() - 1; j++){
        if(numbers.at(j) >= 40 && numbers.at(j) <= 50){
            if(j == numbers.size() - 1){
                flag = true;
            }
        }
        else{
            cout << "Oopsss" << endl;
        }
        if(flag == true){
            cout << "Yeahhhh" << endl;
        }
    }
}
else{
    cout << "None" << endl;
}

if(numbers.at(0) >= 50 && numbers.at(0) <= 60){
    for(int j = 0; j <= numbers.size() - 1; j++){
        if(numbers.at(j) >= 50 && numbers.at(j) <= 60){
            if(j == numbers.size() - 1){
                flag = true;
            }
        }
        else{
            cout << "Noooooo" << endl;
        }
        if(flag == true){
            cout << "Oh righttttt" << endl;
        }
    }
}
else{
    cout << "None" << endl;
}

return 0;
}
