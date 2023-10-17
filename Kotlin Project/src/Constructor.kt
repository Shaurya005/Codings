//In kotlin we can create a class the way we do in Java.

//class Human constructor(var n: String){
class Human (var n: String=""){//Even if we don't pass a value then also it's fine as we have used default parameter.
    /*In kotlin we don't have to create another function which has the same name as class name for constructor.
    Here we simply just has to use the word constructor and then we can specify arguments in parenthesis.
    But here in kotlin we have choice not to use the keyword "constructor" unless we're not using any modifier like public or private.
    If we are using any modifier there then this constructor becomes necessary.
    So to get the constructor, we can directly use round bracket after the class name then that becomes the constructor.
    But we can also create a constructor inside the class as well. The constructor which we have created now is known as primary constructor.
    So we can also create secondary constructor*/
    var name=n
    //In java we have concept where if you call a constructor we can actually perform some operations, may be printing something etc.
    //The way we can do that is by creating a init block where we can perform whatever operation we want.
    init{//init block gets automatically called on calling constructor.
        var n1=n//So we can also assign the variable here like we've assigned variable name
        println("Human is here")
    }
    //Now to use a secondary constructor we will use "constructor" keyword inside the class. But we'll get an error "primary constructor call expected"
    //because Kotlin says we must call primary constructor which is compulsory rule in Kotlin. So we can do that directly or indirectly by using constructor chaining.
    //So we will use "this" keyword to call primary constructor or may be any constructor in this class. Same thing was with Java as well to do constructor chaining with "this" keyword.
    var age:Int =0;
    constructor(age: Int,name:String):this(name){
        this.age=age//To avoid name-space collision between local and instance variable we've used this.age
    }
    fun think()
    {
      println("Kotlin is awesome, $name $age years")
    }
}
fun main(args: Array<String>){
    //Creating object of the class human
    var navin = Human(20,"Navin")//Here we don't have to use keyword "new".
    navin.think()
}