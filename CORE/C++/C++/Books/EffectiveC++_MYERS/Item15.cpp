/**
 * 
 * ITEM 15: Provide access to raw resources in resource managing classes.
 * 
 * A good example of this is how the RAII class shared pointer can still give you the 
 * raw pointer through it's get call, but will also delete pointer when it is finished with it.
 * 
 * Remember also that the point of an RAII class is to ENSURE! that a resource gets released. You could 
 * later add a wrapper to enforce encapsulation, but that is not the main purpose of the RAII class.
 * 
 * Things to remember:
 * 1.  API's often require access to raw resources , so each RAII class should offer a way to get at the resource it manages.
 * 
 * 2. Access may be via explicit conversion or implicit conversion. In general, explicit conversion is safer, but implicit
 * conversion is more convenient for classes
 * 
 * 
 */