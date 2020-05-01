/**
 * 
 * ITEM 4: Make sure that objects are initialized before they are used. 
 * 
 * Maybe just use auto?
 * 
 * Make sure that all constructors initialize everything in the object.
 * For classes, always use the member initialization lists.
 * 
 * Always list initialization list members in the order of declaration for the class.
 * 
 * The relative order of initialization of non-local static objects defined in different translation units is undefined.
 * 
 * Solution:
 * 1. Define and initialize a local static object on line 1, return it on line 2. Beware of multithreaded issues.
 * 
 * THINGS TO REMEMBER
 * 
 * MANUALLY INITIALIZE OBJECTS OF BUILT IN TYPE BECAUSE C++ ONLY SOMETIMES INITIALIZES THEM ITSELF
 * 
 * IN A CONSTRUCTOR PREFER USER OF THE MEMBER INITIALIZATION LIST TO ASSIGNMENT INSIDE THE BODY OF THE CONSTRUCTOR
 * LIST DATA MEMBERS IN THE INITIALIZATION LIST IN THE ORDER THEY ARE DECLARED IN THE CLASS
 * 
 * AVOID INITIALIZATION ORDER PROBLEMS ACROSS TRANSLATION UNITS BY REPLACING NON-LOCAL STATIC OBJECTS WITH LOCAL STATIC OBJECTS.
 * 
 * 
 */