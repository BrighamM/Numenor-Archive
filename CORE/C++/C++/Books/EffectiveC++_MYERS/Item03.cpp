/**
 * ITEM 3: Use const whenever possible
 * 
 * 
 * Using const is easy, but with pointers you need to remember some things
 * 
 *   const int *ptr;
 *          vs
 *   int const *ptr;
 * 
 * The question is where does the const fall?
 * On the left or right of the asterix.
 * 
 *  Leftside => const object
 *  Rightside => const pointer
 * 
 * Member functions should return const things. See example in book.
 * 
 * 
 * You can use mutable keyword in classes.
 * 
 * Implement non-const member functions in terms of their const version
 * to reduce code duplication.
 * 
 * Never call a non-const member function from a const member function!
 * 
 * THINGS TO REMEMBER
 * 
 * DECLARING SOMETHING const HELPS COMPILERS DETECT USAGE ERRORS, const CAN 
 * BE APPLIED TO OBJECTS AT ANY SCOPE, TO FUNCTION PARAMETERS AND RETURN TYPES,
 * AND TO MEMBER FUNCTIONS AS A WHOLE
 * 
 * COMPILERS ENFORCE BITWISE CONSTNESS, BUT YOU SHOULD PROGRAM USING CONCEPTUAL CONSTNESS
 * 
 * WHEN const AND non-const MEMBER FUNCTIONS HAVE ESSENTIALLY IDENTICAL IMPLEMENTATIONS,
 * CODE DUPLICATION CAN BE AVOIDED BU HAVING THE non-const VERSION CALL THE const VERSION.
 * 
 * 
 * 
 * 
 * 
 */