#include <iostream>
#include <vector>

using namespace std;

int main(){

int x;
cin >> x;

for(int i = 0; i < x; i++){
bool isSame = false;
string one, two;
bool isTrue = false;

cin >> one >> two;
vector<int>compare (26, 0);

for(int i = 0; i < one.size(); i++){
int index = (int)one[i] - 97;
if(compare[index] == 0){
compare[index]++;
}
}
for(int i = 0; i < two.size(); i++){
int index = (int)two[i] - 97;
if(compare[index] == 1){
compare[index]++;
}
}
for(int i = 0; i < 26; i++){
if( compare[i] >= 1){
isSame = true;
break;
}
}
if(!isSame){
cout << "NO" << endl;
}
else{ cout << "YES" << endl;
}
}
return 0;
}
