var s = ["h","e","l","l","o"];

function swap(arr, x, y) {
    var temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

var reverseString = function() {
    var n = s.length;
    for(let i = 0; i < n/2; i++){
        swap(s, i, n-i-1);
    }
    console.log(s);
};

reverseString();

//Accepted on Leetcode with 108 sec
//Faster than 79% of what was turned in and used in-place algorithm 