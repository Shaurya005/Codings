fun main(args : Array<String>){
    println("Hello Kotlin")
    var tittu = Alien()//That is how an object of Alien class is instantiated here in Kotlin. "new" keyword isn't used.
    tittu.name="Harsh"
    println("Name is: " +tittu.name)
    println("Name is: ${tittu.name}")//Another way to do the same i.e. without using concetanation.

//here we can assign tittu to another new object but if we had used val instead then we can't reassign it to other object.
    tittu=Alien()
    println("Name is: " +tittu.name)
}
