/**
 * ITEM 2: Prefer consts, enums, and inlines to defines. (prefer the compiler to the preprocessor)
 * 
 * # define ASPECT_RATIO 1.653
 * 
 * ASPECT_RATIO may never be seen by the compiler, and may never show up in the symbol table.
 * Just make a const!
 * 
 * const double AspectRatio = 1.653
 * 
 * Need a constant string in a class? Make it static.
 * 
 * This item covers how to make constants in classes under various conditions.
 * Check the book.
 * 
 * Worthy of knowing is the "Enum Hack"
 * 
 * Use templates with inline functions.
 * 
 * THINGS TO REMEMBER
 * 
 * FOR SIMPLE CONSTANTS, PREFER CONST OBJECTS OR ENUMS TO #defines
 * FOR FUNCTION-LIKE MACROS, PREFER INLINE FUNCTIONS TO #defines
 * 
 */