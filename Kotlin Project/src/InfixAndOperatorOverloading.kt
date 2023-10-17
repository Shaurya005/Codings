fun main(arg: Array<String>) {
    var a1 = Alien()//Creating object of Alien
    a1.skills = "Java"
    a1.show()
    var a2 = Alien()//Creating another object of Alien
    a2.skills = "SQL"
    a2.show()
    var a3 = a1 plus1 a2
    /*Now instead of writing like a1.plus(a2), we can make it more like english language where we will only write
    a1 plus a2. In fact we have used this before as well in discussing ranges and for loop. In range we've used downTo as 10 downTo 1
    and in for loop, we've used i in some range. So both "downTo" and "in" was an infix function.
    So using infix function we can use english like text but infix works with a function which only takes one parameter.
    To make a function infix, we just have to use keyword "infix" before fun then we can simply use a1 plus a2 now.
    */
    a3.show()
}
/*In c++ we had operator overloading by which we can change the way in which operator works but in Java we don't have this as it increase
  the complexity of your code and software. There are some limited operators on which you can use operator overloading in kotlin.
  You can visit its official website kotlin.org to read their documentation on operator overloading.
  For operator overloading the keyword used is "operator". For "+" sign, we have to use function name as plus, minus for "-", times for "*", div for "/", rangeTo for ".." etc.
  In fact we have used ".." operator for range which internally overloads to function rangeTo.
  So we could write a1 plus a2 as a1+a2 by adding operator keyword before infix in function definition of plus.
*/
infix fun Alien.plus1(a: Alien):Alien{
    var newAlien=Alien()
    newAlien.skills= this.skills+" "+a.skills
    return newAlien
}