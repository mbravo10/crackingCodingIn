/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
var numJewelsInStones = function(J, S) {
    var i;
    var count = 0;
    var obj = {};
    for(i = 0; i < J.length; i++){
        obj[J[i]] = true;
    }
    console.log(obj);
    for(i = 0; i < S.length; i++){
        if(obj[S[i]])count++;
    }
    return count;
};

console.log(numJewelsInStones("aA", "aAAbbbb"));