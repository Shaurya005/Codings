open class Item(val name: String, val price: Int)
//First there is a class called Item, where the constructor takes in 2 parameters: a name for the item (as a String) and a price (as an integer). 
//Since Item is a parent class, and subclasses extend from it, the class is marked with the open keyword.
class Noodles : Item("Noodles", 10)
{
    override fun toString(): String {
       return name
   }
}
//The Noodle class constructor takes in no parameters, but extends from Item and calls the superclass constructor by passing in "Noodles" as the name and the price of 10. 
/*
class Vegetables(val topping1: String,
                 val topping2: String, 
                 val topping3: String) : Item ("Vegetables", 5)
Instead of using a property for each vegetable, you can fix the issue by accepting a list of vegetables (which can be any length) in the constructor for the Vegetables class. 
The List should contain only Strings, hence the type of the input parameter is List<String>.

This is not the most elegant solution because in main(), you would need to change your code to create a list of the toppings first before passing it into the Vegetables constructor.

Vegetables(listOf("cabbage", "sprouts", "onion"))
*/
/*
In Kotlin, the vararg modifier allows you to pass a variable number of arguments of the same type into a function or constructor. In that way, you can supply the different vegetables as individual strings instead of a list.
Change the class definition of Vegetables to take a vararg toppings of type String.
*/
class Vegetables(vararg val toppings: String) : Item("Vegetables", 5)
//Note: Only one parameter can be marked as vararg and is usually the last parameter in the list.
{
    override fun toString(): String {
    if (toppings.isEmpty()) {
        return "$name Chef's Choice"
    } else {
        return name + " " + toppings.joinToString()
    }
//To specify a different separator other than a comma, pass in the desired separator string as an argument to the joinToString() method. Exa: joinToString(" ") to separate each item with a space.
   }
}
/*
fun main() {   
    val noodles = Noodles()
//Now due to vararg modifier, You can create a Vegetables instance by passing in any number of topping Strings.
    val vegetables = Vegetables("Cabbage", "Sprouts", "Onion")
    val vegetables2 = Vegetables()//without any constructor arguments.
    println(noodles)
    println(vegetables)
    println(vegetables2)
}
*/
    fun main() {
/*
    val order1 = Order(1)
    order1.addItem(Noodles())
    order1.print()

    println()

    val order2 = Order(2)
    order2.addItem(Noodles())
    order2.addItem(Vegetables())
    order2.print()

    println()

    val order3 = Order(3)
    val items = listOf(Noodles(), Vegetables("Carrots", "Beans", "Celery"))
    order3.addAll(items)
    order3.print()
*/
    val ordersList = mutableListOf<Order>()
 
    val order1 = Order(1)
    order1.addItem(Noodles())
    ordersList.add(order1)

    val order2 = Order(2)
    order2.addItem(Noodles())
    order2.addItem(Vegetables())
    ordersList.add(order2)

    val order3 = Order(3)
    val items = listOf(Noodles(), Vegetables("Carrots", "Beans", "Celery"))
    order3.addAll(items)
    ordersList.add(order3)
    
    // Use builder pattern
    val order4 = Order(4)
        .addItem(Noodles())
        .addItem(Vegetables("Cabbage", "Onion"))
    ordersList.add(order4)
    
    // Create and add order directly
    ordersList.add(
        Order(5)
            .addItem(Noodles())
            .addItem(Noodles())
            .addItem(Vegetables("Spinach"))
    )
    
    for (order in ordersList) {
        order.print()
        println()
    }
}
/*
When you print an object instance to the output, the object's toString() method is called. In Kotlin, every class automatically inherits the toString() method. 
The default implementation of this method just returns the object type with a memory address for the instance. 
You should override toString() to return something more meaningful and user-friendly than Noodles@5451c3a8 and Vegetables@76ed5528.
*/
class Order(val orderNumber: Int) {
   private val itemList = mutableListOf<Item>()
/*
   fun addItem(newItem: Item) {
       itemList.add(newItem)
   }

   fun addAll(newItems: List<Item>) {
       itemList.addAll(newItems)
   }
   Instead of returning Unit (or nothing) from the addItem() and addAll() methods in Order class, return the changed Order. 
   Kotlin provides the keyword this to reference the current object instance. Within the addItem() and addAll() methods, you return the current Order by returning this.
*/
   fun addItem(newItem: Item): Order {
    itemList.add(newItem)
    return this
}

fun addAll(newItems: List<Item>): Order {
    itemList.addAll(newItems)
    return this
}
   
   fun print() {
    println("Order #${orderNumber}")
    var total = 0
    for (item in itemList) {
        println("${item}: $${item.price}")
        total += item.price
    }
    println("Total: $${total}")
}
}