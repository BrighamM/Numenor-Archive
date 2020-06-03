/**
 * 
 * ITEM 17: Store newed objects in smart pointers in standalone statements
 * 
 * 
 * This works because compilers are given less leeway in reordering operations across statements
 * than within them.
 * 
 * Things to remember:
 * 1. Store newed objects in smart pointers in standalone statements.
 * Failure to do this can lead to subtle resource leaks when exceptions are thrown.
 * 
 * 
 * 
 * 
 */