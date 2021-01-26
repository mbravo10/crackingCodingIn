const assert = require("assert").strict;

var kidsWithCandies = function(candies, extraCandies) {
   var max = getMax(candies);
   for(var i = 0; i < candies.length; i++){
        if((candies[i] + extraCandies) >= max) candies[i] = true;
        else candies[i] = false;
   }

   return candies;
};

function getMax(arr){
    return Math.max.apply(Math, arr);
}

if (require.main == module) {
    if (process.argv.length > 2 && process.argv[2] === "test") test();
    else console.log(kidsWithCandies([2,3,5,1,3], 3));
}

function test(){
    assert(kidsWithCandies([2,3,5,1,3], 3), [true, true, true, false, true]);
    assert(kidsWithCandies([1,1,1,1,1], 0), [true, true, true, true, true]);
    assert(kidsWithCandies([2,1,1,1,1], 0), [true, false, false, false, false]);
    
    console.log('Test cases passed...');
 
}

