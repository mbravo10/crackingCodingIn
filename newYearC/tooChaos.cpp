#include <iostream>
#include <vector>
#include <string>

using namespace std;

string minBribes(const vector<int> &vec){
	int count;
	for(int i = 1; i <= vec.size(); i++){
		if(vec[i] - i > 2) { return "Too chaotic"; break;}
		else if(vec[i] - i == 1) {count++;}
		else if(vec[i] - i == 2) {count += 2;}
	}
	return to_string(count); 
}

int main(){
	int numOfVecs;
	cin >> numOfVecs;
	for(int i = 0; i < numOfVecs; i++){
		int sizeOfV;
		cin >> sizeOfV;
		vector<int>lineBribe(sizeOfV);
		for(int i = 1; i <= sizeOfV; i++){
			cin >> lineBribe[i];
		}
		cout << minBribes(lineBribe) << endl;
	}
return 0;
}

