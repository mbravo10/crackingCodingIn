var sum = 0;
var max = 0;
var accounts = [[1,5], [7,3], [3,5]];

for(let i = 0; i < accounts.length; i++){
    sum = 0;
    for(let j = 0; j < accounts[i].length; j++){
        sum += accounts[i][j];
        if(sum > max){ max = sum};
    }
}

console.log(max);