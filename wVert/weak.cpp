#include <iostream>
#include <array>

using namespace std;

int main(){


int n;
while(cin >> n){
if(n == -1) break;

int arr[n][n];

for(int i = 0; i < n; i++){
	for(int j = 0; j < n; j++){
		cin >> arr[i][j];
	}
}

int r;
for(r = 0; r < n; r++){
	bool isTri = false;
	for(int i = 0; i < n -1; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[r][j] == 1 && arr[r][i] == 1){
				if(arr[i][j] == 1){
				isTri = true;
				break;
				}
			}
		}
	}
	if(!isTri) cout << r << " ";
}


}

return 0;
}

