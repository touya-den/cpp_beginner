#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    string b = "if";
    int temp;
    bool flag = true;
    getline(cin, s);
    cout << "Your string is " << s << endl;
    if(s.length() > 2 && (s[0] == 'i' && s[1] == 'f')){
        cout << s << endl;
    }
    else{
         for(int i = 0; i <= s.length()-1; i++){
            temp = i;
            if(s[i] == b[0]){
                for(int j = 0; j <= b.length()-1; j++){
                    flag = true;
                    if(s[temp] == b[j]){
                        temp = temp + 1;
                    }
                    else{
                        flag = false;
                        break;
                    }
                }
                if( flag == true){
                    s.erase(i, temp - i + 1);
                    s = "if " + s;
                }
            }
        }
        cout << s;
    }
    

return 0;
}
