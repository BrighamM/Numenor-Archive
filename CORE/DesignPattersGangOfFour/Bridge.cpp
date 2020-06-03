// https://www.youtube.com/watch?v=F1YQ7YRjttI&list=PLrhzvIcii6GNjpARdnO4ueTUAVR9eMBpc&index=11
// Clients should not be forced to depend on methods they do not use. (Inteface segregation principle)

// If you have two concretions (1 & 2) from some abstraction (A); A should not implement methods that
// 1 will never use just because 2 really wants them.


// Basically this prevents the caresian product problem of creating many classes with each new resource.
// Essentially we are separating the platform specific, from the platform independent stuff.

