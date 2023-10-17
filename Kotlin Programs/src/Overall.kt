open class Item(val name: String, val price: Int)
//First there is a class called Item, where the constructor takes in 2 parameters: a name for the item (as a String) and a price (as an integer).
//Since Item is a parent class, and subclasses extend from it, the class is marked with the open keyword.
class Noodles : Item("Noodles", 10)
{
    override fun toString(): String {
        return name
    }
}
/*The Noodle class constructor takes in no parameters, but extends from Item and calls the superclass constructor by passing in "Noodles" as the name and the price of 10.

When you print an object instance to the output, the object's toString() method is called. In Kotlin, every class automatically inherits the toString() method.
The default implementation of this method just returns the object type with a memory address for the instance.
You should override toString() to return something more meaningful and user-friendly than Noodles@5451c3a8 and Vegetables@76ed5528.
Inside the Noodles class, override the toString() method and have it return the name. Remember that Noodles inherits the name property from its parent class Item.

*/
class Vegetables(vararg val toppings: String) : Item("Vegetables", 5) {
    override fun toString(): String {
        return name + " " + toppings.joinToString()
    }
}