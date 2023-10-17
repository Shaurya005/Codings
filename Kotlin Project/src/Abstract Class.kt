abstract class Human2{
    abstract fun think()//Abstract method can be declared only inside abstract class.
    //We can also define normal functions inside abstract class.
    fun talk(){
        println("Talking")
    }
}
class Doctor: Human2(){
    //When we declare a class as abstract then it automatically means that in future it'll be implemented by
    // some other class as it's only a abstract and so we don't have to write keyword "open" here.
    //So abstract methods are meant to be overrided and abstract classes are meant to be inherited.
    //We must have to implement the abstract method defined in abstract super class or else declare the subclass also as abstract.
    override fun think(){
        println("Critical Thinking")
    }
}
class Alien2 : Human2(){
    override fun think(){
        println("Virtual Thinking")
    }
}
fun main(arg: Array<String>){
    var mayank:Human2=Alien2()
    mayank.talk()
    mayank.think()
}