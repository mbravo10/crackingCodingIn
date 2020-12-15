const readline = require('readline');
const assert = require('assert').strict;

let testCases = 0;
let caseCounter = 0;
let countline = true;
let cases;
let onlyOddOut = new Set();
let j = 1;
function test(){
    console.log('test');
}

function answer(){
    for(i = 0; i < cases.length; i++){
            if(onlyOddOut.has(cases[i]))onlyOddOut.delete(cases[i]);
            else onlyOddOut.add(cases[i]);
    }
    onlyOddOut.forEach((x) => {
        console.log(`Case #${j}: ${x}`)
        j++;
    })
}


function solve(){
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.on('line', (input) => {
    if(!testCases)
        testCases = parseInt(input,10)
    else{
        if(countline){
            countline = false
        }else{
            cases = input.split(' ').map(x=> +x);
            countline = true
            caseCounter++
            if(caseCounter === testCases){
                answer();
                print();
                rl.close();
                }
            }
        }
    })
}


if (require.main == module) {
    if (process.argv.length > 2 && process.argv[2] === "test") test();
    else solve();
}