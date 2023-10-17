fun main(arg: Array<String>) {
    var a1 = Alien()//Creating object of Alien
    a1.skills = "Java"
    a1.show()
    var a2 = Alien()//Creating another object of Alien
    a2.skills = "SQL"
    a2.show()
    //Now suppose we want both the above skills in a3
    var a3 = a1.plus(a2)//So Alien class should have function called plus and it will accept another Alien object and return a new alien object.
    a3.show()
}
/*  So we have to create this plus function in Alien class but suppose we don't have an access to the source code of Alien class
    or you don't want to touch that class. In that case, you can add function inside the class using extension functions.
    That is we'll be defining functions somewhere outside that class like in our case we'll be defining it here inside ExtensionFunctions.kt
    but that function will be a part of Alien class.
*/
fun Alien.plus(a: Alien):Alien{//As we are naming it as Alien.plus so this function is now a part of Alien class (not internally but externally) and so it's called as extension function.
    var newAlien=Alien()
    newAlien.skills= this.skills+" "+a.skills//this refers to the object which is calling this plus function i.e. current object(As were in Java)
    return newAlien
}