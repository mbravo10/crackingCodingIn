#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<bool>alph(26, 0);
    string letter;
    cin >> letter;
    for(int i = 0; i < letter.size(); i++){
        if(letter[i] >= 'a' && letter[i] <= 'z'){
            alph = letter[i] - 97;
        }
    }
}