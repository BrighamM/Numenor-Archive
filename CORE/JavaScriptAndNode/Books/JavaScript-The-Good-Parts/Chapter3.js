/**
 * Here is a beautiful little function, that creates a new object,
 * by using an old object as it's prototype.
 */

 if (typeof Object.create !== 'function') {
    Object.create = function (o) {
        var F = function () {
            F.prototype = o;
            return new F();
        };
    }
 }

//  var another_stooge = Object.create(someOtherObject);