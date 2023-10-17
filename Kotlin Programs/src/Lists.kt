/*
A list is a collection of items with a specific order. There are two types of lists in Kotlin:

Read-only list: List cannot be modified after you create it.
Mutable list: MutableList can be modified after you create it, meaning you can add, remove, or update its elements.
When using List or MutableList, you must specify the type of element that it can contain.
For example, List<Int> holds a list of integers and List<String> holds a list of Strings.
If you define a Car class in your program, you can have a List<Car> that holds a list of Car object instances.
 */
fun main(arg:Array<String>) {
    val numbers: List<Int> = listOf(1, 2, 3, 4, 5, 6)
/*
Creating a variable called numbers of type List<Int> because this will contain a read-only list of integers.
Create a new List using the Kotlin standard library function listOf(). listOf(1, 2, 3, 4, 5, 6) returns a read-only list of integers from 1 through 6.

Type of the variable can be guessed(or inferred) based on value on the RHS of the assignment operator (=), so you can omit the data type of the variable.
 */
    println("List: $numbers")
    //Putting $ in the string means that what follows is an expression that will be evaluated and added to this string.
    println("Size: ${numbers.size}")

/*
The index is actually an offset from the first element.
For example, when you say list[2] you are not asking for the second element of the list, but for the element that is 2 positions offset from the first element.
Hence list[0] is the first element (zero offset), list[1] is the second element (offset of 1), list[2] is the third element (offset of 2), and so on.

You could call the get() function with desired index as numbers.get(0) or you can use shorthand syntax with square brackets around the index as numbers[0].

 */


    println("First element: ${numbers[0]}")
    println("Second element: ${numbers[1]}")
    println("Last index: ${numbers.size - 1}")
    println("Last element: ${numbers[numbers.size - 1]}")
    println("First: ${numbers.first()}")
    println("Last: ${numbers.last()}")
//Another useful list operation is the contains() method to find out if a given element is in the list.
    println("Contains 4? ${numbers.contains(4)}")
    println("Contains 7? ${numbers.contains(7)}")


    val colors = listOf("green", "orange", "blue")
    /*   You cannot add or change elements in a read-only List.
      See what happens if you try to add an item to the list or try to modify an element of the list by setting it equal to a new value.
        colors.add("purple")
        colors[0] = "yellow"
      Run your code and you get several error messages.

      You've seen firsthand that it's not possible to change a read-only list.
      However, there are a number of operations on lists that don't change the list, but will return a new list. Two of those are reversed() and sorted().
 */
    println("Reversed list: ${colors.reversed()}")
    println("List: $colors")
    println("Sorted list: ${colors.sorted()}")
    val oddNumbers = listOf(5, 3, 7, 1)
    println("List: $oddNumbers")
    println("Sorted list: ${oddNumbers.sorted()}")

/*
Note: Don't worry about having to remember all of the possible list operations. When you are developing apps in Android Studio,
as you work with lists and other data types, Android Studio will show you the functions and properties available for them.
 */

/*
 Mutable lists are lists that can be modified after creation. You can add, remove, or change items.
 You can do everything you can do with read-only lists as well. Mutable lists are of type MutableList, and you can create them by calling mutableListOf().

 when you create a MutableList or List, Kotlin tries to infer what type of elements the list contains from the arguments passed.
 For example, if you write listOf("noodles"), Kotlin infers that you want to create a list of String.
 When you initialize an empty list without elements, Kotlin cannot infer the type of the elements, so you have to explicitly state the type.
*/
    val entrees = mutableListOf<String>() //Another way : val entrees: MutableList<String> = mutableListOf()
    /*Note: You can use val for a mutable list because the entrees variable contains a reference to the list,
      and that reference doesn't change even if the contents of the list do.

      Mutable lists become interesting when you add, remove, and update elements.
*/
//Add "noodles" to the list with entrees.add("noodles"). The add() function returns true if adding the element to the list succeeded, false otherwise.
    println("Add noodles: ${entrees.add("noodles")}")
    println("Entrees: $entrees")
    println("Add spaghetti: ${entrees.add("spaghetti")}")
    println("Entrees: $entrees")
//Instead of adding elements one by one using add(), you can add multiple elements at a time using addAll() and pass in a list.
    val moreItems = listOf("ravioli", "lasagna", "fettuccine")
    println("Add list: ${entrees.addAll(moreItems)}")
    println("Entrees: $entrees")
    //Remember to only add elements of the correct data type to a list. Otherwise you will get a compile error.

    println("Remove spaghetti: ${entrees.remove("spaghetti")}")
    println("Entrees: $entrees")
    //What happens if you try to remove an item that doesn't exist in the list? Try to remove "rice" from the list with entrees.remove("rice").
    println("Remove item that doesn't exist: ${entrees.remove("rice")}")
    println("Entrees: $entrees")
    //The remove() method returns false, because the element does not exist. The list remains unchanged with only 4 items still.
    //You can also specify the index of the element to remove. Use removeAt() to remove the item at index 0.

    println("Remove first element: ${entrees.removeAt(0)}")
    println("Entrees: $entrees")

    //If you want to clear the whole list, you can call clear().
    entrees.clear()
    println("Entrees: $entrees")

    //Kotlin gives you a way to check if a list is empty using isEmpty() function. Try printing out entrees.isEmpty().
    println("Empty? ${entrees.isEmpty()}")
//isEmpty() method is useful if you want to do an operation on a list or access a certain element, but you want to make sure that the list is not empty first.

/*  To perform an operation on each item in a list, you can loop through the list. Loops can be used with Lists and MutableLists.
    One type of loop is a while loop. Use a while loop to iterate through a list. Create a variable to keep track of what index you're currently looking at in the list.
    This index variable will keep incrementing by 1 each time until you reach the last index of the list, after which you exit the loop.
*/
    val guestsPerFamily = listOf(2, 4, 1, 3)
    var totalGuests = 0
    var index = 0
    while (index < guestsPerFamily.size) {
        totalGuests += guestsPerFamily[index]
        index++
    }
    println("Total Guest Count: $totalGuests")
    /*
    With a while loop, you had to write code to create a variable to keep track of the index, to get the element at the index in the list,
    and to update that index variable. There's an even faster and more concise way to iterate through a list. Use for loops!
     */
    val names = listOf("Jessica", "Henry", "Alicia", "Jose")
    for (name in names) {
        println("$name - Number of characters: ${name.length}")
    }
    /*
Note: Here are some other variations of what you can do with for loops, including using them with ranges with specific steps (instead of incrementing by 1 each time).

for (item in list) print(item) // Iterate over items in a list

for (item in 'b'..'g') print(item) // Range of characters in an alphabet

for (item in 1..5) print(item) // Range of numbers

for (item in 5 downTo 1) print(item) // Going backward

for (item in 3..6 step 2) print(item) // Prints: 35

A loop is a control flow structure like the if/else and when expressions because it dictates a particular flow for how the code should be executed.
     */
}