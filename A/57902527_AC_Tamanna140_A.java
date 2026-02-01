import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class LukeFoodAffinity {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine()); // Number of test cases
        
        StringBuilder result = new StringBuilder();
        
        while (t-- > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken()); // Number of piles
            int x = Integer.parseInt(st.nextToken()); // Maximum allowed difference
            
            int[] piles = new int[n];
            st = new StringTokenizer(br.readLine());
            for (int i = 0; i < n; i++) {
                piles[i] = Integer.parseInt(st.nextToken());
            }
            
            // Initial range of valid food affinity
            int minAffinity = piles[0] - x;
            int maxAffinity = piles[0] + x;
            int changes = 0;
            
            for (int i = 1; i < n; i++) {
                int currentMin = piles[i] - x;
                int currentMax = piles[i] + x;
                
                // Check if the current range intersects with the previous range
                if (currentMax < minAffinity || currentMin > maxAffinity) {
                    // No intersection, so we need a change
                    changes++;
                    // Reset the range to the current pile's range
                    minAffinity = currentMin;
                    maxAffinity = currentMax;
                } else {
                    // Update the range to the intersection of the current and previous ranges
                    minAffinity = Math.max(minAffinity, currentMin);
                    maxAffinity = Math.min(maxAffinity, currentMax);
                }
            }
            
            result.append(changes).append("\n");
        }
        
        System.out.print(result);
    }
}