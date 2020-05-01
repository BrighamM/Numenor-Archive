// https://medium.com/@vvkchandra/essential-javascript-mastering-immediately-invoked-function-expressions-67791338ddc6

// This is a function definition or a function declaration or a function statement.
function sayHi() {
    console.log("Hello, World!");
}
sayHi(); // shows "Hello, World!" as alert in browser.



var msg = "Hello, World!";
var sayHiAgain = function() { // declare a sayHiAgain variable and assign a value to it that's of function type
//             = function() { .... This thing is called a function expression
// Functions are rValues in Javascript, and they can be passed as args to other functions
// The function expression is called an anonymous function expression because it doesn't have a name following the 
// function keyword. 
    console.log(msg);
};
sayHiAgain(); // shows "Hello, World!" as alert in browser.



// We can also have named function expressions
// 
var fibo = function fibonacci() {
    // you can use "fibonacci()" here as this function expression has a name.
    // used for recursive calling capabilities
};
// fibonacci() here fails, but fibo() works.


// IMMEDIATELY INVOKED FUNCTION EXPRESSIONS
!function() { // YUCK!!! ANY UNARY OPERATOR WILL DO!!! ~,-,+
    console.log("Hello from IIFE!");
}();
// Shows the alert "Hello from IIFE!"
/*
As we saw before, a function statement always starts with the function keyword. 
Whenever JavaScript sees function keyword as the first word in a valid statement, 
it expects that a function definition is going to take place. 
So to stop this from happening, we are prefixing “!” in-front of the function keyword. 
This basically enforces JavaScript to treat whatever that’s coming after “!” as an expression.
 */

 // void is forces the function to be treated as an expression
void function() {
    console.log("Hello from the second IIFE!");
}();

// Variation 1
(function() {
    console.log("I am an IIFE!");
}());

// Variation 2
(function() {
    console.log("I am an IIFE, too!");
})();

/*

// Valid IIFE
(function initGameIIFE() {
    // All your magical code to initalize the game!
}());

// Following two are invalid IIFE examples
function nonWorkingIIFE() {
    // Now you know why you need those parentheses around me!
    // Without those parentheses, I am a function definition, not an expression.
    // You will get a syntax error!
}();

function () {
    // You will get a syntax error here as well!
}();


*/
/*
In this example, we have declared two variables inside the IIFE and they are private to that IIFE. 
No one outside the IIFE has access to them. 
Similarly, we have an init function that no one has access to outside the IIFE. 
But the init function can access those private variables.
*/
(function IIFE_initGame() {
    // Private variables that no one has access to outside this IIFE
    var lives;
    var weapons;
    
    init();

    // Private function that no one has access to outside this IIFE
    function init() {
        lives = 5;
        weapons = 10;
    }
}());




var result = (function() {
    return "From IIFE";
}());
console.log(result); // alerts "From IIFE"

(function IIFE(msg, times) {
    for (var i = 1; i <= times; i++) {
        console.log(msg);
    }
}("Hello!", 5));



var Sequence = (function sequenceIIFE() {
    
    // Private variable to store current counter value.
    var current = 0;
    
    // Object that's returned from the IIFE.
    return {
        getCurrentValue: function() {
            return current;
        },
        
        getNextValue: function() {
            current = current + 1;
            return current;
        }
    };
    
}());

console.log(Sequence.getNextValue()); // 1
console.log(Sequence.getNextValue()); // 2
console.log(Sequence.getCurrentValue()); // 2








// This is already a function expression, so you don't need the extra set of parens.
// Use parens anyway. It improves readability.
var result = function() {
    return "From IIFE!";
}();