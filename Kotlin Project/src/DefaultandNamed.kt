//Default parameter and Named parameter : It is something new in kotlin which was not present in Java.
fun main(args: Array<String>){
    var finAmount=calcAmount(50,0.03)
    //Suppose we're transferring money through paypal then it is charging 4% extra. So we'll be calculating
    //here the total amount to be paid for transferring 50 dollar.
    println(finAmount)
    /*
    Named Parameter: It's sometimes difficult to understand what values are passing and the order of passing in a function call when we or someone else reads our code.
    Also we need to remember the sequence in which parameters needs to be passed in a function call.
    So we'll be writing names of the parameter so that it'll be easier to remember what we are passing
    and also sequence need not to be followed if you're writing names of the parameter with values in function call.
    var finAmount=calcAmount(amt=50,int=0.03) //So we could have written in this way
    var finAmount=calcAmount(int=0.03,amt=50)//It'll also work fine when we interchange the variables and helpful if we don't know the sequence.
    So this is the concept of named parameters and It was not there in Java.
     */
}
//int and double was wrapper classes in Java.

/*what if we have to call the calcAmount function from Java code and as it is the method which takes two parameters so we'll have to specify both when
  calling from Java otherwise it shows error or else we can create two separate functions here one with only amt as parameter and other with amt and int both so that we can call
  in both ways one with only amt as parameter and other with int and amt both as parameter.
  But we don't have to do that. We can simply use an annotation here @JvmOverloads which automatically creates two methods for your kotlin code.
*/
  @JvmOverloads
fun calcAmount(amt: Int,int: Double=0.04):Int{//Assigning default value in interest as 0.04 so it's called the default parameter here.
    //In java we have the option of method overloading in which functions have same name but different parameters
    //But here in kotlin this is resolved with default parameter that is if we pass one parameter it's fine then it will be allocating default value
    //And if you pass two parameter then also it's okay as default one will be replaced.
    //So if we have to do same thing in Java then we will have to create two methods there but in kotlin we have this option of default parameters.


    //In java we were using small i and small d in Int and Double respectively as opposed to capital letters in Kotlin here.
    return (amt+amt*int).toInt()//As it will be giving a double value so we're type casting it to int type.
}