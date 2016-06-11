import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.text.DecimalFormat;
import java.text.DecimalFormatSymbols;
import java.util.*;


class Scanner{
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	StringTokenizer st = new StringTokenizer("");
	
	public String nextLine(){
		try{
                    return br.readLine();
		}
		catch(Exception e){
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
	
	public int nextInt(){
		return Integer.parseInt(next());
	}
	
	public long nextLong(){
		return Long.parseLong(next());
	}
	
	public double nextDouble(){
		return Double.parseDouble(next());
	}
	
	public int[] nextIntArray(int n){
		int[] res = new int[n];
		for(int i = 0; i < res.length; i++)
			res[i] = nextInt();
		return res;
	}
	
	public long[] nextLongArray(int n){
		long[] res = new long[n];
		for(int i = 0; i < res.length; i++)
			res[i] = nextLong();
		return res;
	}
	
	public double[] nextDoubleArray(int n){
		double[] res = new double[n];
		for(int i = 0; i < res.length; i++)
			res[i] = nextDouble();
		return res;
	}
	public void sortIntArray(int[] array){
		Integer[] vals = new Integer[array.length];
		for(int i = 0; i < array.length; i++)
			vals[i] = array[i];
		Arrays.sort(vals);
		for(int i = 0; i < array.length; i++)
			array[i] = vals[i];
	}
	
	public void sortLongArray(long[] array){
		Long[] vals = new Long[array.length];
		for(int i = 0; i < array.length; i++)
			vals[i] = array[i];
		Arrays.sort(vals);
		for(int i = 0; i < array.length; i++)
			array[i] = vals[i];
	}
	
	public void sortDoubleArray(double[] array){
		Double[] vals = new Double[array.length];
		for(int i = 0; i < array.length; i++)
			vals[i] = array[i];
		Arrays.sort(vals);
		for(int i = 0; i < array.length; i++)
			array[i] = vals[i];
	}

	public String[] nextStringArray(int n){	
		String[] vals = new String[n];
		for(int i = 0; i < n; i++)
			vals[i] = next();
		return vals;
	}
	
	Integer nextInteger(){
		String s = next();
		if(s == null)
			return null;
		return Integer.parseInt(s);
	}
	
	int[][] nextIntMatrix(int n, int m){
		int[][] ans = new int[n][];
		for(int i = 0; i < n; i++)
			ans[i] = nextIntArray(m);
		return ans;
	}
	
}

public class SimpleMedian{
    public static void main(String[] args){
       Scanner sc = new Scanner();
       int n,median=0;
       int datos[]= new int[100001];
       String cadena;
       DecimalFormatSymbols simbolos = new DecimalFormatSymbols();
       simbolos.setDecimalSeparator('.');
       DecimalFormat formatter = new DecimalFormat("#0.0",simbolos);
         while(true){
            n= sc.nextInt();
            median=0;
            if(n == 0) break;
            for(int i=0; i<n; i++){
                datos[i]=sc.nextInt();
            }
            
            Arrays.sort(datos, 0, n);
            
            if(n%2 != 0){
                median=n/2;
                double total = datos[median];
                cadena = formatter.format(total);
                System.out.println(cadena.replace(",", "."));
            }
            else{
                median=n/2;
                double total2 =(datos[median-1]+datos[median])/2.0;
                cadena = formatter.format(total2);
                System.out.println(cadena.replace(",", "."));
            }
         }
    }
}
