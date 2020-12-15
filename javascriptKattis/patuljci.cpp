#include <iostream>
#include <vector>

using namespace std;


int main(){
    int oneHundo;
    vector<int> vec1;
    for(int i = 0; i < 9; i++){
        int x; 
        cin >> x;
        vec1.push_back(x);
        oneHundo += x;
    }

    vector<bool>test(9, 0);
    for(int i = 0; i < 9; i++){
        for(int j = i+1; j < 9; j++){
            if(oneHundo - vec1[i] - vec1[j] == 100){
                test[i] = true;
                test[j] = true;
            }
        }
    }

    for(int i = 0; i < 9; i++){
        if(!test[i]){
            cout << vec1[i] << " ";
        }
    }
    return 0;
}