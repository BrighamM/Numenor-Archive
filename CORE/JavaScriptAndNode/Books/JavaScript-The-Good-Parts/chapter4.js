/**
 * 
 * Remember, functions are objects, since functions are objects functions can have methods.
 * 
 * In addition to declared parameters, every function receives two addtional parameters.
 * <this> and <arguments> the value of <this> is determined by the invocation pattern.
 * 
 * There are 4 patterns of invocation in JavaScript.
 * 1. Method invocation pattern.
 * 2. Function invocation pattern.
 * 3. Constructor invocation pattern.
 * 4. Apply invocation pattern.
 * 
 * The invocation operator is a set of parens <(...)> that follow any expression that produces 
 * a function value.
 * 
 * 1. METHOD INVOCATION PATTERN
 * When a function is stored as a property of an object we call it a method.
 * When a method is invoked <this> is bound to that object.
 * 
 * If an invocation expression contains a refinement such as ( a dot . or an array []), 
 * it is invoked as a method. 
 * 
 * 2. FUNCTION INVOCATION PATTERN
 * When a function is not the property of an object then it is invoked as a function
 * // var sum = add(3, 4)
 * When a function is invoked with this pattern <this> is bound to the global object.
 * This was a mistake... a consequence of this error is that a method cannot employ an
 * inner function to help it do its work because the inner function does not share
 * the method's access to the object as its <this> is bound to the wrong value.
 * We use the workaround of:
 * var that = this;
 * to workaround the problem.
 * 
 * 3. CONSTRUCTOR INVOCATION PATTERN
 * Confusing, and something about not being recommended.
 * 
 * 4. APPLY INVOCATION PATTERN
 * 
 * 
 * 
 */

 // apply pattern
