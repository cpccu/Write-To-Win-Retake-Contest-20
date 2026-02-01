import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class CodeforcesDivision {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine()); // Number of test cases

        StringBuilder result = new StringBuilder();
        for (int i = 0; i < t; i++) {
            int rating = Integer.parseInt(br.readLine()); // Read rating
            if (rating >= 1900) {
                result.append("Division 1\n");
            } else if (rating >= 1600) {
                result.append("Division 2\n");
            } else if (rating >= 1400) {
                result.append("Division 3\n");
            } else {
                result.append("Division 4\n");
            }
        }
        System.out.print(result);
    }
}