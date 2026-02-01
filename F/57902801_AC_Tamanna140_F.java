import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class UniqueDigitFinder {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine()); 

        StringBuilder result = new StringBuilder();
        while (t-- > 0) {
            String[] input = br.readLine().split(" ");
            int a = Integer.parseInt(input[0]);
            int b = Integer.parseInt(input[1]);
            int c = Integer.parseInt(input[2]);

    
            if (a == b) {
                result.append(c).append("\n");
            } else if (a == c) {
                result.append(b).append("\n");
            } else {
                result.append(a).append("\n");
            }
        }

        System.out.print(result);
    }
}