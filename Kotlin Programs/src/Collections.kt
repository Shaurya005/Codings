/*
    A collection is a group of related items, like a list of words, or a set of employee records.
    The collection can have the items ordered or unordered, and the items can be unique or not.
    You've already learned about one type of collection, lists.
    Lists have an order to the items, but the items don't have to be unique.

    As with lists, Kotlin distinguishes between mutable and immutable collections.
    Kotlin provides numerous functions for adding or deleting items, viewing, and manipulating collections.
*/

fun main(arg:Array<String>) {
    val numbers = listOf(0, 3, 8, 4, 0, 5, 5, 8, 9, 2) //creating a list of numbers and sorting them.
    println("list: $numbers")
    /*
The list contains 10 numbers from 0 to 9. Some of the numbers appear more than once while some don't appear at all.
The order of the items in the list matters: first item is 0, second item is 3, and so on. The items will stay in that order unless you change them.
Recall from earlier code labs that lists have many built-in functions, like sorted(), which returns a copy of the list sorted in ascending order.
   */
    println("sorted: ${numbers.sorted()}")

//Another type of collection in Kotlin is a set. It's a group of related items, but unlike a list, there can't be any duplicates & order doesn't matter.
//An item can be in the set or not, but if it's in the set, there is only one copy of it. This is similar to the mathematical concept of a set.
    val setOfNumbers = numbers.toSet() //converting the list to a set.
    println("set:    ${setOfNumbers}")
/*
  The result has all the numbers in the original list, but each only appears once.
  Note that they are in the same order as in the original list, but that order isn't significant for a set.
*/
//Define a mutable set and an immutable set, and initialize them with the same set of numbers but in a different order by adding these lines:
    val set1 = setOf(1,2,3)
    val set2 = mutableSetOf(3,2,1)
    println("$set1 == $set2: ${set1 == set2}")//Add a line to print whether they are equal:
// Even though one is mutable and one isn't, and they have the items in a diff. order, they're considered equal bcoz they contain exactly same set of items.

//One of the main operations you might perform on a set is checking if a particular item is in the set or not with the contains() function.
// You've seen contains() before, but used it on a list.
    println("contains 7: ${setOfNumbers.contains(7)}")//Add this line to your program to print if 7 is in the set.
//As with mathematical sets, in Kotlin you can also perform operations like the intersection (∩) or the union (∪) of two sets, using intersect() or union().
/*
The last type of collection you'll learn about in this code lab is a map or dictionary.
A map is a set of key-value pairs, designed to make it easy to look up a value given a particular key.
Keys are unique, and each key maps to exactly one value, but the values can have duplicates.
Values in a map can be strings, numbers, or objects—even another collection like a list or a set.
A map is useful when you have pairs of data, and you can identify each pair based on its key. The key "maps to" the corresponding value.
*/
//Creating a mutable map to store people's names and their ages. This creates a mutable map of a String (key) to an Int (value), initializes the map with two entries, and prints the items.
    val peopleAges = mutableMapOf<String, Int>(
            "Fred" to 30,
            "Ann" to 23
    )
    println(peopleAges)

    peopleAges.put("Barbara", 42) //To add more entries to the map, you can use the put() function, passing in the key and the value.
//You can also use a shorthand notation to add entries:
    peopleAges["Joe"] = 51
    println(peopleAges)
//As noted above, the keys (names) are unique, but the values (ages) can have duplicates.
// What do you think happens if you try to add an item using one of the same keys?
    peopleAges["Fred"] = 31//The key "Fred" doesn't get added again, but the value it maps to is updated to 31.

//As you can see, maps are useful as a quick way to map keys to values in your code!

/*Although they have different qualities, different types of collections have a lot of behavior in common. If they're mutable, you can add or remove items.
  You can enumerate all the items, find a particular item, or sometimes convert one type of collection to another.
  You did this earlier where you converted a List to a Set with toSet(). Here are some helpful functions for working with collections.
*/
/*
Suppose you wanted to print the items in peopleAges, and include the person's name and age. For example, "Fred is 31, Ann is 23,..." and so on.
You learned about for loops in an earlier codelab, so you could write a loop with for (people in peopleAges) { ... }.

However, enumerating all the objects in a collection is a common operation, so Kotlin provides forEach(), which goes through all the items for you and performs an operation on each one.
*/

    peopleAges.forEach { print("${it.key} is ${it.value}, ") }
/*It's similar to the for loop, but a little more compact. Instead of you specifying a variable for the current item, the forEach uses the special identifier "it".

Note that you didn't need to add parentheses when you called the forEach() method, just pass the code in curly braces {}.

That's very close to what you want, but there's an extra comma on the end.

Converting a collection into a string is a common operation, and that extra separator at the end is a common problem, too. You'll learn how to deal with that in the steps ahead.

The map() function (which shouldn't be confused with a map or dictionary collection above) applies a transformation to each item in a collection.

In your program, replace the forEach statement with this line:
*/
    println(peopleAges.map { "${it.key} is ${it.value}" }.joinToString(", ") )
/*
 It has the correct output, and no extra comma! There's a lot going on in one line, so take a closer look at it.

peopleAges.map applies a transformation to each item in peopleAges and creates a new collection of the transformed items
The part in the curly braces {} defines the transformation to apply to each item. The transformation takes a key value pair and transforms it into a string, for example <Fred, 31> turns into Fred is 31.
joinToString(", ") adds each item in the transformed collection to a string, separated by , and it knows not to add it to the last item
all this is chained together with . (dot operator), like you've done with function calls and property accesses in earlier codelabs.
 */
/*
 Another common operation with collections is to find the items that match a particular condition.
 The filter() function returns the items in a collection that match, based on an expression.
*/
    val filteredNames = peopleAges.filter { it.key.length < 4 }
    println(filteredNames)
//Again note that the call to filter doesn't need parentheses, and "it" refers to the current item in the list.
/*
 In this case, the expression gets the length of the key (a String) and checks if it is less than 4.
 Any items that match, that is, have a name with fewer than 4 characters, are added to the new collection.

 The type returned when you applied the filter to a map is a new map (LinkedHashMap).
 You could do additional processing on the map, or convert it to another type of collection like a list.
*/
}