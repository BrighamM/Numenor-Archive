/**
 * 
 * ITEM Never call virtual functions during construction or destruction:
 * 
 * the <explicit> keyword on a constructor will specifically disallow implicit conversions, 
 * as these may lead to unexpected results.
 * 
 * THINGS TO REMEMBER 
 * DON'T CALL VIRTUAL FUNCTIONS DURING CONSTRUCTION OR DESTRUCTION, BECAUSE SUCH CALLS
 * WILL NEVER GOT TO A MORE DERIVED CLASS THAN THAT OF THE CURRENTLY EXECUTING CONSTRUCTOR OR DESTRUCTOR.
 *  
 * 
 * 
 */