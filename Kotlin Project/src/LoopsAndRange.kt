fun main(arg: Array<String>){
    var num =1 .. 5//1..5 is also correct
    //This is actually a range not a normal variable
    //In kotlin syntax for while and do-while is same as java but syntax of for is little different
    for(a in num){
        println(a)
    }
    num=1..15//It can also be written as 1 until 16, here it will not take 16.
    for(a in num step 2){//Step 1 is by default obviously and if we give negative step, it won't show error
        //but an exception will be caught saying "Step must be positive"
        println(a)
    }
    var nums=15 downTo 1//here data type of nums is IntRange and that of num was IntProgression
    //If we want to print in decreasing order then we can't do 15..1, we've to use downTo
    //Here we are using keyword in between two numbers. Actually downTo is not a keyword but a function
    //which belongs to Int class so we can also code it as var nums=15.downTo(1). To make it more reliable
    //Kotlin has simplified to use it as above 15 downTo 1.
    for(a in nums)
    {
        println(a)
    }
    num = 1 until 16//Here it will not take 16 i.e. only till 15.
    for(a in num.reversed())
    {
        println(a)
    }
    println("Count is ${num.count()}")
    //When we talk about range, we can also work with characters
    var char_num='A'..'z'
    for(a in char_num)
    {
        println(a)
    }
    println("Count is ${char_num.count()}")
}