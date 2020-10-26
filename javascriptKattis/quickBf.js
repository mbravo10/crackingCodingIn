const readline = require('readline');
const assert = require('assert').strict;

function answer(line){
    let isPan = true;
    const alph = 'abcdefghijklmnopqrstuvwxyz';
    var missing = [];
    let stringCheck = line.toLowerCase();

    for (let i = 0; i < alph.length; i++) {
        if(stringCheck.indexOf(alph[i]) === -1){
            isPan = false;
            missing.push(alph[i]);
            }
        }
    if(!isPan) return 'missing ' + missing.join('');
    else return 'pangram \n';
 
}

function test() {
    assert(answer('abcdefghijklmnopqrstuvwxyz') == 'pangram \n');
    assert(answer('THe abc defg h i j k ') === 'missing lmnopqrsuvwxyz');
    assert(answer('Mr. Jock, TV quiz PhD., bags few lynx.') === 'pangram \n');
    assert(answer('GQs oft lucky whiz Dr. J, ex-NBA MVP - Steve Gale') === 'pangram \n');
    console.log('Tests passed');
}

function solve() {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    lineCount = 1;
    rl.on('line', (line) => {
        //console.log(line);
        if (lineCount == 2) {
            console.log(answer(line));
        }
        else
            lineCount += 1;
    })
}

if (require.main == module) {
    if (process.argv.length > 2 && process.argv[2] === 'test')
        test()
    else
        solve();
}