#include <iostream>
#include <array>
#include <string>

using namespace std;

int main(){
	int arr[26] = {0};
	int arr2[26] = {0};
	bool isTrue = 1;

	string s1, s2;
	cin >> s1 >> s2;
	for(int i = 0; i < s1.size(); i++){
	if(s1[i] >= 'a' && s1[i] <= 'z'){
		int value = s1[i] - 97;
		arr[value]++;
	}
	}

for(int i = 0; i < s2.size(); i++){
	if(s2[i] >= 'a' && s2[i] <= 'z'){
		int value = (int) s2[i] - 97;
		arr2[value]++;
	}
	}

	for(int i = 0; i < 26; i++){
		if(arr[i] != arr2[i]){
			isTrue = false;
			break;
		}
	}	

	if(isTrue) {
		cout << "Valid Permutation" << endl;
	}
	else{
		cout << "Invalid" << endl;
	}
	
}
