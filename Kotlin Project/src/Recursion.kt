import java.math.BigInteger

fun main(arg: Array<String>){
    var num = BigInteger("70")//As we will have to pass BigInteger. If we make it 700 then also it won't have any problem but if we make it 70000 then we get StackOverflow exception as recursion uses stacks.
    //Let say we have bigger value like 50, 70 or more then we'll be getting 0 in answer because factorial of 50 or 70
    //is actually a very big number so we can't work with int so we'll convert this into bigInteger to work with very big integers.
    //bigInteger is a class in Java (belongs to java.math package) which supports bigger number. We can't perform operation between big integers and normal integers.
    //We can perform operations only between bigIntegers.
    /*var fact=1
    for(i in 1..num)
        fact*=i
    println(fact)
    */
    print(fact(num))
}
fun fact(num: BigInteger): BigInteger{
    //Now as the num is a BigInteger, we can't compare it with normal integer 0 here so we have to either convert num into int or 0 into BigInteger.
    //But preferably, convert normal integer into bigInteger as if num is very large integer and we convert it into int then it may not work properly.

    if(num== BigInteger.ZERO)
        return BigInteger.ONE//We have to return BigInteger number as well and not normal integer.
        //return BigInteger("1") It will also work here.
    else{
        println("Hello "+num)//Just to know how many times this function is called in recursion
        return num*fact(num- BigInteger.ONE)
}}