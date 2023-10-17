//As in java whenever we create object of some class, it also calls constructor of super class.
open class Human__(age: Int){//Using round bracket for primary constructor
    init{//Block of primary constructor
        println("In human $age")
    }
    open fun think(){
        println("Real thinking")
    }
}
class Alien__(age:Int) : Human__(age){//Accepting the value of age in Alien__ constructor to pass to Human__ primary constructor as it needs an argument.
    init {
        println("In Alien")
    }
    override fun think(){
        println("Virtual Thinking")
    }
}
fun main(arg: Array<String>){
    var mayank=Alien__(20)//We're passing parameter here for the superclass constructor. It gets accepted in Alien constructor and then passed to Human constructor.
    //It would first call the primary constructor of Alien__ but then that primary constructor first
    //calls the primary constructor of Human__ that's why primary constructor of human__ seems to get executed first.
    mayank.think()
}