data class user(val i:Int,var d:Double){
    var n=7
    fun a(){
        print("$d $i")
    }
}
class u(a:Int, b:Boolean){
    val b=5
    var c=5
}
fun main(arg:Array<String>){
    var user1=user(9,7.987)
    user1.a()
    user1.n=9
}