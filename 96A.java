
import java.util.*;
import java.io.*;

public class 96A
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		String a;
		a=sc.nextLine();
		String b="1111111";
		String c="0000000";
		if(a.contains(b) || a.contains(c)){
		    System.out.println("YES");
		}else{
		    System.out.println("NO");
		}
		
	}
}