import java.util.*;
import java.math.*;
class Main
{
	public static void main(String args[])
	{
		String a, b;
		Scanner sc = new Scanner(System.in);
		a = sc.next();
		b = sc.next();
		BigInteger ba = new BigInteger(a);
		BigInteger bb = new BigInteger(b);
		BigInteger mod = new BigInteger("1000000007");
		BigInteger ans = ba.modPow(bb,mod);
		System.out.println(ans);
	}
}