//Kotlin and Java both supports multiple inheritance in case of interface
//Interface is same like abstract class but in interface we can only declare methods.
//Only difference between an interface and abstract class is that we can't define methods here and interface supports multiple inheritance.
//But as we know from Java 8.0 we can now define methods in interface. Those methods are basically the default methods and so in Kotlin also it's now allowed to define functions as well.
interface A{
   fun show()//Here you don't have to use abstract keyword because by default all methods here abstract.
    fun abc(){//It won't create a problem although we haven't overridden it in C unless we have the same method name in B class as well then you've to override it in C class.
        println("In abc A")
    }
}
interface B{
    fun display()
    fun abc(){
        println("In abc B")
    }
}
class C:A,B{//Here we don't have to use any keywords like implements or extends. As in Java we extend the class but implement the interface.
    //You can implement as many interface as we want. And we have to implement all the methods defined in the interface or declare the class C as abstract.
    override fun show(){//We need to use override here as well.
    println("In show")
}
    override  fun display(){
    println("In display")
    }
    override fun abc(){
        println("In abc C")
        super<A>.abc()//We have to use <A> to solve ambiguity of which superclass method to refer to.
        super<B>.abc()
    }
}

fun main(arg: Array<String>){
    var obj=C()//Creating an object of C
    obj.show()
    obj.display()
    obj.abc()
}
//Given a choice we must always go for interface rather than abstract classes