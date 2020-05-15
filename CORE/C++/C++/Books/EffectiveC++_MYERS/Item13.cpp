/**
 * 
 * ITEM 13: Use objects to manage resources.
 * 
 * The idea of using objects to manage resources is often called RAII
 * Resource Acquisition Is Initialization
 * 
 * auto pointers have an unusual charecteristic 
 *
 * 
 * 
std::auto_ptr<Investment>               // pInv1 points to the
    pInv1(createInvestment());          // object returned from
                                        // create investment

std::auto_ptr<Investment> pInv2(pInv1); // pInv2 now points to the 
                                        // object; pInv1 is now Null

pInv1 = pInv2;                          // now pInv1 points to the 
                                        // object and pInv2 is null 
 * 
 * Instead lets use an RCSP Reference Counting Smart Pointer. shared
 * 
 * The idea is not what pointer to use, it is about the importance of 
 * using objects to manage resources.
 * 
 * 
 * Things to remember
 * 1. To prevent resource leaks, use RAII objects that acquire resources
 * in their constructors and release them in their destructors.
 * 
 * 2. Two commonly useful RAII classes are shared_ptr and auto_ptr
 * Shared increases ref count
 * and copying an auto_ptr sets it to null.
 * 
 * 
 * 
 */


