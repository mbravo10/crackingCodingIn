var testObj = {};
var setToInput = new Set();
var test = [2, 10, 2, 10, 1];
function testObject() {
    for(i = 0; i < test.length; i++){
        if(setToInput.has(test[i]))setToInput.delete(test[i]);
        else setToInput.add(test[i]);
    }
}

testObject();
console.log(setToInput);
