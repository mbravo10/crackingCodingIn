const readline = require('readline');

function solve() {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout,
    });

    rl.on("line", (line) => {
        if (lineCount == 1) {
            console.log(answer(line));
        } else lineCount += 1;
    });
}