class laptop(val brand:String,val price:Int){
    fun show(){
        println("Awesome Machine...")
    }
}
fun main(arg:Array<String>){
    var lap1=laptop("Dell",20000)
    println(lap1)//Not printing the values of lap1 but the reference lap1 itself i.e. it'll print the hashcode of object reference.
}