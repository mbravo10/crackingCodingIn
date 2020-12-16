#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    unordered_set<int> test;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        int arr[x];
        for(int j = 0; j < x; j++){
            cin >> arr[j];
            test.insert(arr[j]);
        }
        for(int j = 0; j < x; j++){
            if(test.count(arr[j]))
        }

    }
}