import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class MaxGCDPlusY {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine()); // Number of test cases

        StringBuilder result = new StringBuilder();
        while (t-- > 0) {
            int x = Integer.parseInt(br.readLine()); // Input value of x
            int y = x - 1; // Choosing y = x - 1 gives gcd(x, y) = 1 (maximizing y)
            result.append(y).append("\n");
        }

        System.out.print(result);
    }
}