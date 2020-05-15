/**
 * 
 * APPLICABILITY
 * 
 * Use the Singleton pattern when:
 * 1. There must be exactly one instance of a class and it must be accessible to clients from
 * a well known access point.
 * 
 * 2. Whent the sole instance should be extensible by subclassing and clients shold be able to use
 * an extended instance without modifying their code.
 * 
 * 
 * 
 * Singleton Consequences
 * 1. Controlled access to sole instance
 * 2. Reduced name space
 * 3. Permits refinement of operations and representation
 * 4. Permits a variable number of instances
 * 5. More flexible than class operations
 * 
 * 
 * 
 * 
 */
// CLASS
class Singleton 
{
public:
    static Singleton* Instance();
protected:
    Singleton();
private:
    static Singleton* _instance;
};
// IMPLEMENTATION
Singleton* Singleton::_instance = 0;

Singleton* Singleton::Instance()
{
    {
        if (_instance == 0)
        {
            _instance = new Singleton();
        }
        return _instance;
    }
}




int main()
{
    // Get the instance
    auto someSingleton = Singleton::Instance();


    return 0;
}