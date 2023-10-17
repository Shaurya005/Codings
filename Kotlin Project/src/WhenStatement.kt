fun main(arg: Array <String> ){
    //In Kotlin we've when statement instead of switch-case in Java, and here there's no problem of
    //applying break after every case.
    val num: Int = 2
    when(num)//Here we can pass String as well, not only integer values.
    {
        1 -> print("One")
        2 -> print("Two")
        3 -> print("Three")
        //Here we don't have default as was with switch so we'll be using else
        else -> print("Give a proper input!!")
    }
    //Here we can also use when as an expression
    var str =  when(num)//Here we can pass String as well, not only integer values.
    {
        1 -> "One"
        2 -> "Second"
        3 -> "Three"
        else -> "Give a proper input!!"
    }
    println("str is $str")
}