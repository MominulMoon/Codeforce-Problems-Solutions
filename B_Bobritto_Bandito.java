import java.io.*;
import java.util.*;

public class B_Bobritto_Bandito {
    // Fast IO in Java
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    // Utility methods
    static int nextInt() throws IOException {
        while (st == null || !st.hasMoreTokens()) {
            st = new StringTokenizer(br.readLine());
        }
        return Integer.parseInt(st.nextToken());
    }
    static long nextLong() throws IOException {
        while (st == null || !st.hasMoreTokens()) {
            st = new StringTokenizer(br.readLine());
        }
        return Long.parseLong(st.nextToken());
    }

    static Vector<Integer> readIntVector(int n) throws IOException {
        Vector<Integer> vec = new Vector<>(n);
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) vec.add(Integer.parseInt(st.nextToken()));
        return vec;
    }

    static Vector<Long> readLongVector(int n) throws IOException {
        Vector<Long> vec = new Vector<>(n);
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) vec.add(Long.parseLong(st.nextToken()));
        return vec;
    }
    static int[] readIntArray(int n) throws IOException {
        int[] arr = new int[n];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) arr[i] = Integer.parseInt(st.nextToken());
        return arr;
    }
    static long[] readLongArray(int n) throws IOException {
        long[] arr = new long[n];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) arr[i] = Long.parseLong(st.nextToken());
        return arr;
    }
    static <T> void printList(List<T> list) {
        for (T i : list) out.print(i + " ");
        out.println();
    }
    static int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
    static boolean isSorted(int[] arr) {
        for (int i = 1; i < arr.length; i++) if (arr[i] < arr[i-1]) return false;
        return true;
    }
    static boolean binarySearch(int[] arr, int key) {
        return Arrays.binarySearch(arr, key) >= 0;
    }
    static void reverseSort(int[] arr) {
        Arrays.sort(arr);
        for (int i = 0, j = arr.length - 1; i < j; i++, j--) {
            int tmp = arr[i]; arr[i] = arr[j]; arr[j] = tmp;
        }
    }

    // Type aliases
    // static final long MOD = 998244353;
    // static final long INF = (long)1e18;

    static void solve() throws IOException {
        // Implement your solution here
        int n = nextInt();
        int m = nextInt();
        int l = nextInt();
        int r = nextInt();
        for(int i=0;i<n-m;i++){
            if(Math.abs(l) > r) l++;
            else r--;
        }
        System.out.println(l + " " + r);
    }

    public static void main(String[] args) throws IOException {
        int t = 1;
        String line = br.readLine();
        if (line != null && !line.isEmpty()) t = Integer.parseInt(line.trim());
        while (t-- > 0) {
            solve();
        }
        out.flush();
    }
}

/*
                   ▄▄▄▄    ▄▄▄       ███▄    █  ██ ▄█▀▄▄▄       ██▓                           
                  ▓█████▄ ▒████▄     ██ ▀█   █  ██▄█▒▒████▄    ▓██▒                           
                  ▒██▒ ▄██▒██  ▀█▄  ▓██  ▀█ ██▒▓███▄░▒██  ▀█▄  ▒██▒                           
                  ▒██░█▀  ░██▄▄▄▄██ ▓██▒  ▐▌██▒▓██ █▄░██▄▄▄▄██ ░██░                           
                  ░▓█  ▀█▓ ▓█   ▓██▒▒██░   ▓██░▒██▒ █▄▓█   ▓██▒░██░                           
                  ░▒▓███▀▒ ▒▒   ▓▒█░░ ▒░   ▒ ▒ ▒ ▒▒ ▓▒▒▒   ▓▒█░░▓                             
                  ▒░▒   ░   ▒   ▒▒ ░░ ░░   ░ ▒░░ ░▒ ▒░ ▒   ▒▒ ░ ▒ ░                           
                   ░    ░   ░   ▒      ░   ░ ░ ░ ░░ ░  ░   ▒    ▒ ░                           
                   ░            ░  ░         ░ ░  ░        ░  ░ ░                             
                        ░                                                                  
 ▄████▄   ▒█████  ▓█████▄ ▓█████      █████▒██▓ ███▄    █  ██▓  ██████  ██░ ██ ▓█████ ▓█████▄
▒██▀ ▀█  ▒██▒  ██▒▒██▀ ██▌▓█   ▀    ▓██   ▒▓██▒ ██ ▀█   █ ▓██▒▒██    ▒ ▓██░ ██▒▓█   ▀ ▒██▀ ██▌
▒▓█    ▄ ▒██░  ██▒░██   █▌▒███      ▒████ ░▒██▒▓██  ▀█ ██▒▒██▒░ ▓██▄   ▒██▀▀██░▒███   ░██   █▌
▒▓▓▄ ▄██▒▒██   ██░░▓█▄   ▌▒▓█  ▄    ░▓█▒  ░░██░▓██▒  ▐▌██▒░██░  ▒   ██▒░▓█ ░██ ▒▓█  ▄ ░▓█▄   ▌
▒ ▓███▀ ░░ ████▓▒░░▒████▓ ░▒████▒   ░▒█░   ░██░▒██░   ▓██░░██░▒██████▒▒░▓█▒░██▓░▒████▒░▒████▓ 
░ ░▒ ▒  ░░ ▒░▒░▒░  ▒▒▓  ▒ ░░ ▒░ ░    ▒ ░   ░▓  ░ ▒░   ▒ ▒ ░▓  ▒ ▒▓▒ ▒ ░ ▒ ░░▒░▒░░ ▒░ ░ ▒▒▓  ▒ 
  ░  ▒     ░ ▒ ▒░  ░ ▒  ▒  ░ ░  ░    ░      ▒ ░░ ░░   ░ ▒░ ▒ ░░ ░▒  ░ ░ ▒ ░▒░ ░ ░ ░  ░ ░ ▒  ▒ 
░        ░ ░ ░ ▒   ░ ░  ░    ░       ░ ░    ▒ ░   ░   ░ ░  ▒ ░░  ░  ░   ░  ░░ ░   ░    ░ ░  ░ 
░ ░          ░ ░     ░       ░  ░           ░           ░  ░        ░   ░  ░  ░   ░  ░   ░   
░                  ░                                                                   ░   
*/
