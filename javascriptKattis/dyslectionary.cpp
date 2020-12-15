#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string in, rev;
    vector<string> test;
    while(getline(cin, in) && in != "\n"){
        rev = "";
        for(int i = in.size()-1; i >= 0; i--){
            rev += in[i];
        }
        test.push_back(rev);
    }
    sort(test.begin(), test.end());
    return 0;
}