/*
Java and Kotlin are inter operable. That is we can call Kotlin code from Java and Java code from Kotlin as well.
We can call C functions using Java and we can call java functions using C programming but that can be done
with the help of some interface in between. We have to use JNI(Java Native Interface)so we have to use some layer in
between if we are working with different languages. But with Kotlin and Java we don't have to use anything in
between. They will directly work with each other.
*/
fun main(args : Array<String>){//Note here in this kotlin file, we don't have a class.
// Thing is that when you convert this file to bytecode, behind the scene it creates java class for you.
// We can decompile the class file to see its source code(it'll be in Java) with help of website javadecompilers.com.
    var telusko=AlienJava()
     telusko.name = "Naveen"//It will automatically call setter in the backend
    println(telusko.name)
}
//Like Java, Kotlin class files are also get created after kotlin file getting converted into bytecode.
//Like Java, Kotlin also works on JVM.