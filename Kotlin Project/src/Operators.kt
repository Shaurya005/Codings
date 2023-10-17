fun main(args: Array <String>){
    var num1: Int = 4
    var num2: Int = 7
    var result=num1+num2;
    println(num1+num2)//We can use all the operators which we use in Java.
    println("The addition of $num1 and $num2 is $result")//Without using concatenation operator.
    /*In java we have two types of variables, one instance variable and second local variable.
    Whenever we create a variable inside a method, it's a local variable and it must be initialised to
    use in println method.
     */
    var navin =Alien()
    navin.name="Telusko"
    /*println("Alien name is : $navin.name")It will be giving error
    as here only navin is treated as variable and name is treated as name itself, no any variable.
    When compiled, the above will produce hashcode of object.*/
    println("Alien name is : ${navin.name}")//We have to use curly brackets to specify navin.name is together.
    if(num1>num2)
        println(num1)
    else
        println(num2)
    //In kotlin if-else is not only a branching statement but also an expression, expression is something which return you some value.
    var res: Int
    res=if(num1>num2)//It is similar to ternary operator
        num1
    else
        num2
    println(res)
    var res2:Int
    res2=if(num1>num2)//It is similar to ternary operator and that's why in kotlin we don't have ternary operator.
        num1
    else if(num1<num2)
        num2
    else
        0
    println(res2)

    var str1:String = "Naveen"
    var str2:String ="naveen"
    if(str1.equals(str2))//Here we can also use if(str1 == str2) in kotlin, it'll work exactly same.
        print("Same")
    else
        println("Not Same")
    if(str1.equals(str2,true))//For ignoring the case
        print("Same")
    else
        print("Not Same")
}