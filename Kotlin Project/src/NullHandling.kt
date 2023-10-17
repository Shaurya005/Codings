fun main(arg: Array<String>){
   //var name: String=null  It will show error that "a null can't be a value of non-null type String. That means
   //if we define a string, it's by default non-null.
   var str: String?=null//Null was kind of an evil in Java as we'll be getting NullPointerException there.
   //So kotlin does'nt support null value by default i.e. By default you're not allowed to assign a null value to a variable.
   //If you want to be allowed for null point, you've to put question mark.
   var tittu = Alien()//Object of Alien
   println(tittu.name)//It will print null here
   //println(tittu.name.length) Error will be shown
   println(tittu.name?.length)
   //tittu = null It'll be showing error as tittu is non-null variable by default
   var tittu2 :Alien? = Alien()
   tittu2 = null//Now it's fine
   println(tittu2?.name)
   //Here in above code, we are handling null values
}