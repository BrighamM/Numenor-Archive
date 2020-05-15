/**
 * 
 * ITEM 8: Prevent exceptions from leaving destructors. 
 * 
 * C++ does not like destructors that emit exceptions. This can and does lead to undefined behavior.
 * 
 * Option 1, Terminate the program
 * If a destructor must raise an exception... std::abort
 * 
 * Option 2, Swallow the exception
 * In general this is a bad idea.
 * 
 * 
 * 
 * THINGS TO REMEMBER
 * DESTRUCTORS SHOULD NEVER EMIT EXCEPTIONS. IF FUNCTIONS IN A DESTRUCTOR MAY THROW THEN YOU SHOULD CATCH AND  EITHER ABORT OR SWALLOW
 * 
 * IF CLIENTS SHOULD NEED TO REACT TO EXCEPTIONS THROWN DURING AN OPERATION, THE CLASS SHOULD PROVIDE A REGULAR(NON-DESTRUCTOR) FUNCTION
 * THAT PERFORMS THE OPERATION
 * 
 * 
 */