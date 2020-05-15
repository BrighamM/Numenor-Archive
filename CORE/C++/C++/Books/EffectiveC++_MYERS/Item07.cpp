/**
 * 
 * ITEM 7: Declare destructors virtual in polymorphic base classes.
 * 
 * This sucks. 
 * 
 * If a class does not contain virtual functions, that often indicates it is not meant to be used as a base class.
 * When a class is not intended to be a base class, making the destructor virtual is usually a bad idea.
 * 
 * Never inherit from a class with a non-virtual destructor!!!!!!!
 * 
 * THINGS TO REMEMBER
 * 1. POLYMORPHIC BASE CLASSES SHOULD DECLARE VIRTUAL DESTRUCTORS. IF A CLASS HAS ANY VIRTUAL FUNCTIONS, IT SHOULD HAVE A
 * VIRTUAL DESTRUCTOR.
 * 
 * 2. CLASSES NOT DESIGNED TO BE BASE CLASSES OR NOT DESIGNED TO BE USED POLYMORPHICALLY SHOULD NOT DECLARE VIRTUAL DESTRUCTORS.
 *  
 * 
 * 
 */
