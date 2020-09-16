#include <vector>
#include <string>
#include <iostream>
#include <set>

using namespace std;



int main(){
	vector<int>temp = {0,0,0,0};
	vector<vector<int>> vec = { };
	vector<string>sequence = {"AAA", "TAA", "TAT", "ATA"};
	
	for(int i = 0; i < sequence.size(); i++){
			vec.push_back(temp);
	}

	for(int i = 0; i < sequence.size(); i++){
		for(int j = 0; j < sequence[i].size(); j++){
			if(sequence[i][j] == 'A'){
				vec[i][0]++;
			}
			else if (sequence[i][j] == 'G'){
				vec[i][2]++;
			}
			else if(sequence[i][j] == 'C'){
				vec[i][1]++;
			}
			else if(sequence[i][j] == 'T'){
				vec[i][3]++;
			}
		}		
	}
	set<vector<int>>returns;
	for(int i = 0; i < vec.size(); i++){
		returns.insert(vec[i]);
	}

	cout << returns.size() << endl;
		
return 0;
}
