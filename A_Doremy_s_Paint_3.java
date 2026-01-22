import java.io.*;
import java.util.*;

public class A_Doremy_s_Paint_3 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st = new StringTokenizer("");
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
        int t = 1;
         t = nextInt(); // Uncomment for multiple test cases
        while (t-- > 0) {
           // Your code here
           int n = nextInt();
           int[] a = readIntArray(n);
           boolean flag=true;
           for(int i=0;i<n;i+=2) {
               if (a[i] != a[0]) {
                   flag = false;
                   break;
               }

            }
            for(int i=1;i<n;i+=2) {
                if (a[i] != a[1]) {
                    flag = false;
                    break;
                }
            }
            if (flag==true) {
                out.println("Yes");
            } else {
                out.println("No");
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