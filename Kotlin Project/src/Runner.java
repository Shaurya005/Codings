import kotlin.reflect.jvm.internal.impl.utils.FunctionsKt;

import java.sql.SQLOutput;

public class Runner {
	//We're trying to call kotlin functions from java code
	public static void main(String arg[]){
	//Whenever we call method from java, either we use classname(for static methods) or object of the class(for non-static methods) so ultimately we want the class.
	//But in kotlin code we don't have a class but when we see the byte code of that kotlin file Functions.kt in our files, it's saved as FunctionsKt.class which is the class name of that kotlin file.
	//So, even if you don't mention class name in kotlin file, all the code gets inside the class that mean we just have to use the class name of that kotlin code to call its method as those methods in kotlin was static methods by default(we don't have static keyword in kotlin).
	int r=MyKotlin.add(3,4);	//Simply using the class name of kotlin file which is FunctionsKt
		System.out.println(r);
		int r2= MyKotlin.add1(3,4);	//Simply using the class name of kotlin file which is FunctionsKt
		System.out.println(r2);
		int res=DefaultandNamedKt.calcAmount(50);
		System.out.println(res);
		int res1=DefaultandNamedKt.calcAmount(50,0.08);
		System.out.println(res1);
	}
}
