var numList=ArrayList<Int>();
fun main(arg:Array<String>){
    for(i in 0 until 10000)
        numList.add(i);
   /* Thread{ printList("1") }.start()
    Thread{ printList("2") }.start()
    Thread{ printList("3") }.start()
    */
    dropMultiples(3)
    dropMultiples(5)
    dropMultiples(7)

    for(i in numList)
        println(i)
}

fun dropMultiples(n: Int){
  /* // for(i in numList){
    for(i in 0 until numList.size){
        if(i%n==0){
            numList.remove(i)
        }
    }
    */
    val itr=numList.iterator()
    while(itr.hasNext()){
        val i=itr.next()
        if(i%n==0)
            itr.remove()
    }
}
/*
fun printList(id:String) {
    for (i in 0 until 10000) {
        if(id=="2" && i==500)
            Thread.sleep(100)
        if (i % 100 == 0)
            println(" Original ID - ${Thread.currentThread().id} My ID - $id i = $i")
    }
}*/
