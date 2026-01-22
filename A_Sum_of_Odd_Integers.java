import java.io.*;
import java.util.*;

public class A_Sum_of_Odd_Integers {
    //Fast IO in Java
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
    int [] pre=new int [(int) 1e7+1];


    // Type aliases
    // static final long MOD = 998244353;
    // static final long INF = (long)1e18;

    static void solve() throws IOException {
        // Implement your solution here
        long n = nextLong();
        long k = nextLong();
        if((n%2==1 && k%2==1) || (n%2==0 && k%2==0)) {
            long ans=k*(2+(k-1)*2);
            ans=ans/2;
            if(ans<=n){
                out.println("YES");
            }
            else {
                out.println("NO");
            }
        } else {
            out.println("NO");
        }
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