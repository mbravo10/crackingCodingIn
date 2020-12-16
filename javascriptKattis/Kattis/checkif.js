const { resolveCname } = require('dns');
var readline = require('readline');

var rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
    terminal: false
});

linecount = 1;
rl.on('line', line => {
    loop = parseInt(line);
    for(i = 0; i < loop; i++){
        rl.on('line', line => {
            console.log(line);
        })
       
    }
});

function printSolution(line){
   
    return test;
}