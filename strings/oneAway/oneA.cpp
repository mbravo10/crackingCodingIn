#include <iostream>

using namespace std;

int main(){
int i;
bool isOneAway = false;
string one, two;
int arr[26], arr2[26];
string >> one >> two;

for(i = 0; i < one.size(); i++){
int index = (int)one[i] - 97;
arr[index]++;
}

for(i = 0; i < two.size(); i++){
int index = (int)two[i] - 97;
arr2[index]++;
}

for(int i = 0; i < 26; i++){
if (arr[i] !=
