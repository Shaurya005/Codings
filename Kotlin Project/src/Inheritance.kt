//As with Java, in Kotlin also we can't use multiple inheritance as ultimately kotlin code also get converted into byte codes.
open class Human_{
    open fun think(){
        println("Real thinking")
    }
}
/*
  Here to inherit other class we use colon instead of extends keyword. Same colon concept for inheritance is in c++ as well.
  Whenever we inherit any class, we must make sure to call primary constructor. So we'll use round brackets there.
  But still, we're getting an error because by default inheritance isn't allowed (as in programming world, there's concept that when you create a class, make sure that your class is marked as final.
  In real world projects, we generally stop inheritance with "final" keyword. So in kotlin by default all classes are final even if you don't mention that.
  That's why we are getting error "this type is final, so it cannot be inherited from". To resolve it, we use a keyword open before class which is to be inherited.
  Open means we're allowing  our class that it can be inherited by some other class. So if you want your class to be inherited, it should show your intention and so we've to use open.
*/
class Alien_ : Human_(){//Now to inherit the Alien_ class by any third class, we have to use open here, as Alien_ class is also final by default.
/*
  Whenever we go for method overriding in Kotlin, it should show your intention that you're intentionally overriding it.
  It's done to prevent method overriding by mistake. So we'll have to use keyword "override" to override any method. But then again we'll get error as "think in human_ is final and cannot be overridden".
  Which means the methods are also final by default in kotlin. And in Java as well, if we have a method final, we cannot override it. So we've to use keyword "open".
  So when we use "open" keyword with function then we're allowing others to override our method.
*/
    override fun think(){
    println("Virtual Thinking")
}
}
fun main(arg: Array<String>){
    var mayank=Alien_()
    mayank.think()
}
//Suppose we've one more open class(say computer) which can be inherited and we inherit both Human_ and that extra class like class Alien_ : Human_, Computer then it'll show error, "only one class may appear in supertype list".
//It simply means that we can't extend more than one class and so we can't go for multiple inheritance in kotlin as well.

/* In Java we could do this assigning sub class object reference to super class variable like below:
   Human_ h = new Alien_();
   To achieve this thing in kotlin, we can write like this:
   var mayank : Human_ =Alien_()//In above var mayank=Alien_(), the mayank variable automatically becomes of type Alien_ as we've not mentioned type anywhere.
 */