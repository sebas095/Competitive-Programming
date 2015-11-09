import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;

// Warrior and Archer
// http://codeforces.com/contest/595/problem/C

public class C {
	
	static class Scanner{
		BufferedReader br=null;
		StringTokenizer tk=null;
		public Scanner(){
			br=new BufferedReader(new InputStreamReader(System.in));
		}
		public String next() throws IOException{
			while(tk==null || !tk.hasMoreTokens())
				tk=new StringTokenizer(br.readLine());
			return tk.nextToken();
		}
		public int nextInt() throws NumberFormatException, IOException{
			return Integer.valueOf(next());
		}
		public long nextLong() throws NumberFormatException, IOException{
			return Long.valueOf(next());
		}
		public double nextDouble() throws NumberFormatException, IOException{
			return Double.valueOf(next());
		}
	}
	
	static void RandomizeArray(int[] array){
		Random rgen = new Random();  // Random number generator			
		for (int i=0; i<array.length; i++) {
		    int randomPosition = rgen.nextInt(array.length);
		    int temp = array[i];
		    array[i] = array[randomPosition];
		    array[randomPosition] = temp;
		}
	}
	
	
	static int get_window(int idx, int tam, int[] s) {
		int ret = s[idx + tam - 1];
		if (idx > 0)
			ret -= s[idx - 1];
		return ret;
	}
	
	public static void main(String args[]) throws IOException{
		Scanner sc = new Scanner();
		int N = sc.nextInt();
		int[] a = new int[N];
		for(int i = 0; i < N; i++)
			a[i] = sc.nextInt();
		RandomizeArray(a);
		Arrays.sort(a); // 
		int[] diffs = new int[N - 1];
		for(int i = 0; i < N - 1; i++)
			diffs[i] = a[i + 1] - a[i];
		int moves_first = (N - 2 + 1) / 2;
		int window_size = diffs.length - moves_first;
		int[] sum = new int[diffs.length];
		sum[0] = diffs[0];
		for(int i = 1; i < sum.length; i++)
			sum[i] = sum[i - 1] + diffs[i];
		int min = Integer.MAX_VALUE;
		for(int i = 0; (i + window_size - 1) < sum.length; i++)
			min = Math.min(min, get_window(i, window_size, sum));
		System.out.println(min);
	}

}