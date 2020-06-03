/**
 * 
 * ITEM 14: Think carefully about copying behavior in resource managing classes.
 * 
 * 
 * Some possibilities are:
 * 1. Prohibit Copying Item 6 
 * 2. Reference counting the underlying resource
 * 3. Copy the underlying resource(Deep Copy)
 * 4. Transfer ownership of the underlying resource
 * 
 * 
 * Things to remember:
 * 1. Copying and RAII object entails copying the resource it mangages, so 
 * the copying behavior of the resource determines the copying behavior of the RAII object.
 * 
 * 2. Common RAII class copying behaviors are disallowing copying and performing reference counting,
 * but other behaviors are possible.
 * 
 * 
 */