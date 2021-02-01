#include <iostream>
#include <array>
#include <string>

using namespace std;

int main(){
    string s = "Ieai";
    int firstHalve = s.size()/2;
    int secHalve = firstHalve;

    int first = 0, sec = 0;
        for(int i = 0; i < firstHalve; i++){
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u'){
                first++;
            }
        }
        for(int i = secHalve; i <= s.size(); i++){
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u'){
                sec++;
            }
        }
        cout << first << " " << sec;
        if(first == sec) cout << "true";
        else cout << "false";
    return 0;
}