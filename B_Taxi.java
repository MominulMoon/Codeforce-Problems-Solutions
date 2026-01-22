import java.io.*;
import java.util.*;

public class B_Taxi {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st = new StringTokenizer("");
    static PrintWriter out = new PrintWriter(System.out);

    void solve() throws IOException {
        int n = nextInt();
        int[] a = new int[n + 1];
        int[] hsh = new int[5];

        for (int i = 1; i <= n; i++) {
            a[i] = nextInt();
            hsh[a[i]]++;
        }
        int ans = 0;
        ans += hsh[4];
        if (hsh[3] >= hsh[1]) {
            ans += hsh[1];
            hsh[3] -= hsh[1];
            ans += hsh[3];
            hsh[3] = 0;
            hsh[1] = 0;
        } else if (hsh[3] < hsh[1]) {
            ans += hsh[3];
            hsh[1] -= hsh[3];
            hsh[3] = 0;
        }
        if (hsh[2] % 2 == 0) {
            ans += hsh[2] / 2;
            hsh[2] = 0;
        } else {
            ans += hsh[2] / 2;
            hsh[2] = 1;
        }
        if (hsh[1] >= 2 && hsh[2] == 1) {
            ans++;
            hsh[2] = 0;
            hsh[1] -= 2;
        }
        if (hsh[1] == 1 && hsh[2] == 1) {
            ans++;
            hsh[2] = 0;
            hsh[1] = 0;
        }
        if (hsh[1] > 0) {
            if (hsh[1] % 4 > 0) {
                ans += hsh[1] / 4 + 1;
            } else {
                ans += hsh[1] / 4;
            }
        }
         ans += hsh[2];

        out.println(ans);

    }

    public static void main(String[] args) throws IOException {
        int t = 1;
        // t = nextInt(); // Uncomment for multiple test cases
        while (t-- > 0) {
            new B_Taxi().solve();
        }
        out.close();
    }

    static String next() throws IOException {
        while (!st.hasMoreTokens())
            st = new StringTokenizer(br.readLine());
        return st.nextToken();
    }

    static int nextInt() throws IOException {
        return Integer.parseInt(next());
    }

    static long nextLong() throws IOException {
        return Long.parseLong(next());
    }

    static double nextDouble() throws IOException {
        return Double.parseDouble(next());
    }

    static int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    static long gcd(long a, long b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    static long lcm(long a, long b) {
        return a / gcd(a, b) * b;
    }

    static int binarySearch(int[] arr, int key) {
        int low = 0, high = arr.length - 1;
        while (low <= high) {
            int mid = (low + high) >>> 1;
            if (arr[mid] == key)
                return mid;
            else if (arr[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
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
        for (int i = 0; i < n; i++)
            a[i] = nextInt();
        return a;
    }

    static long[] readLongArray(int n) throws IOException {
        long[] a = new long[n];
        for (int i = 0; i < n; i++)
            a[i] = nextLong();
        return a;
    }
}

