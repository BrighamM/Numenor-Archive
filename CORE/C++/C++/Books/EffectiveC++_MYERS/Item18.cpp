/**
 * 
 * ITEM 18: Make interfaces easy to use correctly and hard to use incorrectly.
 * 
 * The type system is our primary ally in preventing undesirable code from compiling.
 * When in doubt do as the ints do.
 * 
 * The point is to make interfaces hard to use incorrectly and easy to use correctly.
 * Shared Pointers are simply a usefule tool in achieving this end.
 * 
 * Things to remember:
 * 1. Good interfaces are easy to use correctly and hard to use incorrectly. 
 * You should strive for these characteristics in all your interfaces
 * 
 * 2. Ways to facilitate correct use include consistency in interfaces and 
 * behavioral compatibility with built in types.
 * 
 * 3. Ways to prevent errors include creating new types, restricting operations on types,
 * constraining object values, and eliminating client resource management responsibilities.
 * (DONT FORGET TO USE EXPLICIT ON CONSTRUCTORS!)
 * 
 * 4. Shared_Pointer supports custom deleters. This prevents the cross DLL problem, can
 * be used to automatically unlock mutexes, etc.
 * 
 * 
 */