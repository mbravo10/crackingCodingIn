#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

bool sortcol( const vector<int>& v1, 
               const vector<int>& v2 ) { 
        return v1[1] > v2[1];
    } 
int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int max = 0;
        
        int m = boxTypes.size();
        int n = boxTypes[0].size(); 
        
        sort(boxTypes.begin(), boxTypes.end(), sortcol);
         
        for(int i = 0; i<m; i++){
                if(boxTypes[i][0]>=truckSize){
                    max+=(boxTypes[i][1]*truckSize);
                    return max;
                }else{
                    max+=(boxTypes[i][0]*boxTypes[i][1]);
                    truckSize-=boxTypes[i][0];
                }
            }
    return max;
}

int main(){
    vector<vector<int>>vect{{1,3},{2,2},{3,1}};
    cout << maximumUnits(vect, 4);
    return 0;
}
    