import java.util.*
fun main(args: Array<String>){
    //In Java we have concept of list and map and hence similarly we have in Kotlin.
    var nums=listOf(1,2,3,4)
    for(i in nums)
    {
        println(i)
    }
    //Here we can't print the index number and value both but it was possible with normal for loop with
    //java. In this case we are printing only values. So for printing values with index number as well,
    //we can use withIndex method which return value and also index number.
    for((i,e) in nums.withIndex()){//i represent the index number and e represent the element.
        println("$i : $e")
    }
    var aliens = TreeMap<String,Int>()//We have to specify key value pair in maps here.
    //Here we are using Java code/package inside kotlin and vice versa as TreeMap is a class of java.util package
    aliens["Alien"]=543//Adding values in tree as key-value pair.
    aliens["Kishore"]=555
    //Now fetching the values of tree
    for((name,age) in aliens){
        println("$name : $age")
    }
    //Maps are used a lot in Web development and Android development.
    //There are some classes which we use, indirectly implements map.
}