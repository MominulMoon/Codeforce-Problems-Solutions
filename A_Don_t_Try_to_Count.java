public class A_Don_t_Try_to_Count {
    void solve() {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        String s = sc.next();
        String x = sc.next();
        int cnt = 0;
        int q = 6;
        while (q-- > 0) {
            if (x.length() <= s.length()) {
                cnt++;
                x += x;
            }
            if (x.contains(s)) {
                System.out.println(cnt);
                return;
            } else {
                cnt++;
                x += x;
            }
        }
        System.out.println(-1);
    }

    public static void main(String[] args) {

        int t;
        java.util.Scanner sc = new java.util.Scanner(System.in);
        t = sc.nextInt();
        while (t-- > 0) {
            new A_Don_t_Try_to_Count().solve();
        }
    }

}
