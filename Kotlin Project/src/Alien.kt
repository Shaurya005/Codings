class Alien {
    var name: String?=null
    var name1: String=""
    var i:Int=6
    // ; is redundant here in kotlin.
    // with var we define variable and with val constant value is defined like final in java.
    val name2: String=""//val cannot be reassigned and so we can't change its value once defined.

    var skills:String?=null
    //Normal String can be assigned to nullable type string variable but null can't be assigned to non-nullable type string.
    fun show() {
        println(skills)
    }
}