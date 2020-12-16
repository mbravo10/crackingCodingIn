const readline = require("readline");
const assert = require("assert").strict;

function answer(line) {
   
}

function test() {
 
}

function solve() {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout,
    });

    var test = [];
    rl.on('line', (line) => {
        test = line.split('');
    });
    console.log(test);
   // rl.close();
}

if (require.main == module) {
    if (process.argv.length > 2 && process.argv[2] === "test") test();
    else solve();
}
