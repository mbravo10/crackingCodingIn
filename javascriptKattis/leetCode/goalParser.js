/* 

You own a Goal Parser that can interpret a string command. 
The command consists of an alphabet of "G", "()" and/or "(al)" in some order. 
The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". 
The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.*/

var interpret = function(command) {
    var newGoal = '';
    for(let i = 0; i < command.length; i++){
        if(command[i] === '('){
            if(command[i + 1] === ')')newGoal+='o';
            else if(command[i + 1] === 'a')newGoal+='al';
        }else if(command[i] === 'G'){
            newGoal+='G';
        }
    }
   return newGoal;
};

console.log(interpret("G()()(al)"));
console.log(interpret("G()()(al)()()"));
console.log(interpret("G()()()()()()(al)"));

//Passed 1/25/21 