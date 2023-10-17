//If you have problem with the class name of kotlin file then you can change it using some annotation.
@file:JvmName("MyKotlin")//One of the annotations to change class name to "MyKotlin"
//Now our byte code would be renamed as MyKotlin.class
fun main(args : Array<String>){
    var n=add(4,5)
    println(n)
    var res=max(8,7)
    println(res)
    var res1=max1(8,17)
    print(res1)
}
fun add(a:Int,b:Int):Int{//If we don't mention return type then kotlin understands that we don't want to return anything.
    //Here 'var' and 'val' are not allowed in function parameter.
    return (a+b)
}
fun add1(a:Int,b:Int):Int=a+b//It's like one-line function in kotlin.
//It iS like function expression i.e. a function which returns a value but using equal to symbol.
//It is also possible in java but then we have to go in an interface way, we've to define the method of the interface using lambda expression.
fun max(a:Int,b:Int):Int{
    if(a>b)
        return a
    else
        return b
}
fun max1(a:Int,b:Int):Int=if(a>b) a else b//Writing in one line as previous.

//But what if we have to call this function from a java code and we have seen that java and kotlin codes are 100% inter operable.
//But whenever java calls a function, it should be a part of class whether static or non static function.
//But here in kotlin, we haven't defined these functions in any class so how can we call these functions in java which aren't defined in any class.