import java.math.BigInteger

fun main(arg: Array<String>){
    var num = BigInteger("70000")
    /*
    If we make it 700 then also it won't have any problem but if we make it 70000 then we get StackOverflow exception
    as recursion uses stacks for computation and stack is getting overflow because it has limited memories or frames.
    It had computed for sometime but until stack is not full so for knowing till how many times did recursion has been called
    and after what time it's giving an exception, we've used println("Hello "+num) statement in recursion method body.
    */
    print(facto(num, BigInteger.ONE))
}
tailrec fun facto(num: BigInteger, result: BigInteger): BigInteger{

    if(num==BigInteger.ZERO)
        return result //Here we'll not be returning BigInteger.ONE but we'll return result itself as we're not keeping anything in pending and finding the values on the go.
    /*
    5*4! -> 4*3! -> 3*2! So for the first computation we need to find second computation and so for second we need third
    until then everything will be in stack so stack is continuously increasing up and up when every time we go for another value.
    What if we don't keep the computation in pending and solve it at same time so we can do that using tail recursion
    You can use tail recursion only when you're making sure that you're not keeping any computation in pending state.
    */
    else{
        //println("Hello "+num)//Just to know how many times this function is called in recursion
        //Due to above print statement it's getting stack overflowError in passing 7000 itself
        return facto(num- BigInteger.ONE,num*result)
    }
}
//On computing factorial for 7000 we get the result but on calculating for 70000 we're getting same StackOverFlow exception.
//In tail recursion we don't have any pending task. So we remove that task from our stack but it may happen that our compiler is not optimized to do that for us.
//So even if we're using tail recursion in the code, our compiler isn't optimized to do that so in that case, we'll be optimizing the compiler by ourselves by using a keyword called tailrec.