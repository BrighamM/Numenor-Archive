// Functions as first class values:
// By first-class, we mean functions are like any other data types in JavaScript.
// https://medium.com/@vvkchandra/learn-javascript-closures-through-the-laws-of-karma-49d32d35b3f7

function sayHello(msg) {
    return "Hello! " + msg;
}
console.log(sayHello("Let's master Closures!"));
var sayHelloAgain = sayHello;
console.log(sayHelloAgain("Let's master Closures!"));



function add(x, y) {
    return x + y;
}

add(1, 2); // returns 3

// Assigning a function reference as if it's a value
var addBorrowed = add;

addBorrowed(2, 3); // returns 5

////

function sayHi() {
    console.log("Yay, I am going to master Closures!");
}
function doStuff(functionReference) {
    functionReference();
}

// Passing a funciton reference to another function.
// Please notice the absence of "()" after sayHi below.
doStuff(sayHi);

////
function getSayHiFunction() {
    return sayHi;
}
// Calling a funciton to get another function and then call it.
// Please notice "()()".
getSayHiFunction()();



function test() {
    var message = "Hello JavaScript!";
    console.log(message);
 }
 test(); // shows alert
 // You can't directly access "message" variable that's declared inside the test function from outside the test function




 function outer() {
    var a = 10;
    var sum;
    
    // Nested function definition
    function inner() {
        var b = 20;
        
        // Nested function can access outer function's variables and scope
        sum = a + b;
    }
    
    inner();
    console.log(sum);
}

outer();






function getNewLife(karmaScore) {
    var message = "My karma score is: " + karmaScore;
    
    // This is function nesting - declaring a function inside a function.
    function nextLife() {
        // Please notice the usage of "message" variable
        console.log(message);
    }
    
    // We can return a function from another function
    return nextLife;
}
// myNextLife is a function now.
var myNextLife = getNewLife(90);

// alerts "My karma score is: 90".
myNextLife();

// myOtherLife is another function now.
var myOtherLife = getNewLife(95);

// alerts "My karma score is: 95".
myOtherLife();




// THIS
var current = 0;
function getSequenceValue() {
    current = current + 1;
    return "S" + current;
}

getSequenceValue(); // S1
getSequenceValue(); // S2


// VS

// THIS
function tempSequenceMaker() {
    var current = 0;
    
    // Inner nested function
    function sequence() {
        current = current + 1;
        return "S" + current;
    }
    
    return sequence;
}

var getSequenceValue = tempSequenceMaker();

// we don't need tempSequenceMaker any more.
// We will see a better pattern instead of this in the next example.
tempSequenceMaker = null;

getSequenceValue(); // S1
getSequenceValue(); // S2

// VS
// THIS

var sequence = (function () {
    // private variables which no one can change
    // except the function declared below.
    
    var count = 0;
    var prefix = "S";
    
    // returning a named function expression
    // names show up in debuggers - but it's optional otherwise
    return function innerSequence() {
        count = count + 1;
        return prefix + count;
    };
    
})();

sequence(); // S1
sequence(); // S2


var sequenceObject = (function () {
    var count = 0;
    
    var counterBag = {};
    
    counterBag.increment = function () {
        count = count + 1;
    };
    
    counterBag.decrement = function () {
        count = count - 1;
    };
    
    counterBag.getValue = function () {
        return count;
    };
    
    // bag contains all the function references.
    // Think of an entire family's karmic bag.
    
    return counterBag;
})();

sequenceObject.getValue(); // 0
sequenceObject.increment();
sequenceObject.increment();
sequenceObject.getValue(); // 2
sequenceObject.decrement();
sequenceObject.getValue(); // 1
