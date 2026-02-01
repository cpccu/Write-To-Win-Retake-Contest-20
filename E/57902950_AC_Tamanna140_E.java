import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class PartyGrouping {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int n = Integer.parseInt(br.readLine()); // Number of employees
        int[] managers = new int[n + 1]; // Manager array (1-indexed)
        
        for (int i = 1; i <= n; i++) {
            managers[i] = Integer.parseInt(br.readLine());
        }

        int maxDepth = 0;

        for (int i = 1; i <= n; i++) {
            int depth = 0;
            int current = i;

            // Traverse the hierarchy to find the depth
            while (current != -1) {
                depth++;
                current = managers[current];
            }

            maxDepth = Math.max(maxDepth, depth);
        }

        System.out.println(maxDepth);
    }
}