import java.io.*;
import java.util.*;

public class A_Dont_Try_to_Count {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st = new StringTokenizer("");
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
        int t = 1;
         t = nextInt(); // Uncomment for multiple test cases
        while (t-- > 0) {
            // Your code here
            long n = nextLong();
            long m = nextLong();
            String s= next();
            String x = next();
            long q=6;
            long cnt = 0;
            boolean found = false;
            while(q-->0){
                if(x.indexOf(s)==-1)
                {
                    x+=x;
                    cnt++;
                }
                else
                {
                    System.err.println(cnt);
                    break;
                }
            }
            if(q==0){
                System.out.println(-1);
            }
        }
        out.close();
    }

    static String next() throws IOException {
        while (!st.hasMoreTokens()) st = new StringTokenizer(br.readLine());
        return st.nextToken();
    }

    static int nextInt() throws IOException { return Integer.parseInt(next()); }
    static long nextLong() throws IOException { return Long.parseLong(next()); }
    static double nextDouble() throws IOException { return Double.parseDouble(next()); }

    static int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
    static long gcd(long a, long b) { return b == 0 ? a : gcd(b, a % b); }
    static long lcm(long a, long b) { return a / gcd(a, b) * b; }

    static int binarySearch(int[] arr, int key) {
        int low = 0, high = arr.length - 1;
        while (low <= high) {
            int mid = (low + high) >>> 1;
            if (arr[mid] == key) return mid;
            else if (arr[mid] < key) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }

    static void sort(int[] arr) {
        Arrays.sort(arr);
    }

    static void sort(long[] arr) {
        Arrays.sort(arr);
    }

    static int[] readIntArray(int n) throws IOException {
        int[] a = new int[n];
        for (int i = 0; i < n; i++) a[i] = nextInt();
        return a;
    }

    static long[] readLongArray(int n) throws IOException {
        long[] a = new long[n];
        for (int i = 0; i < n; i++) a[i] = nextLong();
        return a;
    }
}