/**
 * 
 * 
 * APPLICABILITY
 * Use the Factory Method when: 
 * 1. A class cant anticipate the class of objects it must create
 * 2. A class wants its subclasses to specify the objects it creates
 * 3. Classes delegate responsibility to one of several helper subclasses 
 * and you want to localize the knowledge of which helper subclass is the delegate.
 * 
 * Classes are chosen at runtime. Like what kinds of enemies to spawn in a room.
 * Use a ranNumGen to determine what enemies to spawn.
 * But then you could just find a random number in your main code and call the appropriate
 * constructor from there. This is NOT a factory pattern.
 * 
 * Instead there is a something like a EnemyShipFactory and this thing is responsible for
 * producing Enemyships. Thus it is returning Parent-EnemyShip objects pointers, of which BigUFOEnemyShip
 * and RocketEnemyShip are grandchildren and children of that superclass.
 * 
 * https://www.youtube.com/watch?v=ub0DXaeV6hA
 * 
 * https://www.youtube.com/watch?v=EcFVTgRHJLM STARRED
 * 
 * 
 * 
 * Factory Method Consequences:
 * 1. Provides Hooks for subclasses
 * 2. Connects parallel class hierarchies
 * 
 * 
 */ 