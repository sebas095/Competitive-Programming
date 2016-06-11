import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;


class Scanner
{
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	StringTokenizer st = new StringTokenizer("");
	
	public String nextLine()
	{
		try
		{
			return br.readLine();
		}
		catch(Exception e)
		{
			throw(new RuntimeException());
		}
	}
	
	public String next()
	{
		while(!st.hasMoreTokens())
		{
			String l = nextLine();
			if(l == null)
				return null;
			st = new StringTokenizer(l);
		}
		return st.nextToken();
	}
	
	public int nextInt()
	{
		return Integer.parseInt(next());
	}
	
	public long nextLong()
	{
		return Long.parseLong(next());
	}
	
	public double nextDouble()
	{
		return Double.parseDouble(next());
	}
	
	public int[] nextIntArray(int n)
	{
		int[] res = new int[n];
		for(int i = 0; i < res.length; i++)
			res[i] = nextInt();
		return res;
	}
	
	public long[] nextLongArray(int n)
	{
		long[] res = new long[n];
		for(int i = 0; i < res.length; i++)
			res[i] = nextLong();
		return res;
	}
	
	public double[] nextDoubleArray(int n)
	{
		double[] res = new double[n];
		for(int i = 0; i < res.length; i++)
			res[i] = nextDouble();
		return res;
	}
	public void sortIntArray(int[] array)
	{
		Integer[] vals = new Integer[array.length];
		for(int i = 0; i < array.length; i++)
			vals[i] = array[i];
		Arrays.sort(vals);
		for(int i = 0; i < array.length; i++)
			array[i] = vals[i];
	}
	
	public void sortLongArray(long[] array)
	{
		Long[] vals = new Long[array.length];
		for(int i = 0; i < array.length; i++)
			vals[i] = array[i];
		Arrays.sort(vals);
		for(int i = 0; i < array.length; i++)
			array[i] = vals[i];
	}
	
	public void sortDoubleArray(double[] array)
	{
		Double[] vals = new Double[array.length];
		for(int i = 0; i < array.length; i++)
			vals[i] = array[i];
		Arrays.sort(vals);
		for(int i = 0; i < array.length; i++)
			array[i] = vals[i];
	}

	public String[] nextStringArray(int n) 
	{	
		String[] vals = new String[n];
		for(int i = 0; i < n; i++)
			vals[i] = next();
		return vals;
	}
	
	Integer nextInteger()
	{
		String s = next();
		if(s == null)
			return null;
		return Integer.parseInt(s);
	}
	
	int[][] nextIntMatrix(int n, int m)
	{
		int[][] ans = new int[n][];
		for(int i = 0; i < n; i++)
			ans[i] = nextIntArray(m);
		return ans;
	}
	
}


public class Asteroids{
    public static void main(String []args){
        Scanner sc = new Scanner();
        int n,xt,yt,xi,yi,r;
        double d;
        double [] distancias = new double[1002];
        double [] copia = new double[1002];
        while(true){
            n=sc.nextInt();
            if(n==0)break;
            xt=sc.nextInt();
            yt=sc.nextInt();
            for (int i = 0; i < n; i++) {
                xi=sc.nextInt();
                yi=sc.nextInt();
                r=sc.nextInt();
                d=Math.sqrt(((xt-xi)*(xt-xi))+((yt-yi)*(yt-yi)))-r;
                distancias[i]=d;               
            }
            for (int i = 0; i < n; i++) {
                copia[i]=distancias[i];
            }
            Arrays.sort(distancias, 0, n);
            d=distancias[0];
            int indice=0;
            while(d!=copia[indice]){
                indice++;
            }
            System.out.println(indice+1);
        }
    }
}

