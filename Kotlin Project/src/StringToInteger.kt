/*In java there is Integer.parseInt() which converts String into Integer and in Kotlin also we can do in the same way.
  because all the java classes and methods are available in kotlin as well so in kotlin code we can directly use java code inside that.
  But why to use Java code here when we're working in kotlin file so we can simply use toInt() in kotlin here.
*/
fun main(args : Array<String>) {
    //var num:Int = Integer.parseInt(str) It works perfectly fine
    var str: String = "4a"
    //If instead of an integer inside double quote, there's something else then the compiler throws a NumberFormatException.
    //In java we use try-catch to handle exception and we can use everything in kotlin which we use in java but kotlin provides something extra which Java doesn't provide
    var num: Int = 0;//If we don't assign 0 then it'll show error in num++
    try {
        num = str.toInt() //Actually this toInt is inline function and internally implementing Integer.parseInt function to convert String to int.
    } catch (e: NumberFormatException) {
        println("Enter correct value")
    }
    //We can also use finally block here
    //Also we can have multiple try-catch block, try with multiple catch block, etc in the same way we had in Java.
    num++
    println(num)
    //In kotlin, try is also an expression which means try will actually return something so we can directly assign try to the num variable instead of initializing it with 0.
    var num2: Int = try {
        str.toInt()//We must have to provide any integer here as returned value will be stored in num2 which is an integer.
    }//Now if something goes wrong i.e. any exception occur then num2 will be assigned the value returned from catch expression
    catch (e: NumberFormatException) {
        0//We must have to provide any integer here as returned value will be stored in num2 which is an integer.
    }
    //So we can use try-catch in a normal way or also as an expression as they are returning a value which you can assign somewhere.
}