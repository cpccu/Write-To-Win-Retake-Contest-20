import java.util.Arrays;

public class WelfareRedistribution {

    public static void main(String[] args) {
        // Examples of citizen welfare arrays
        int[][] examples = {
                {0, 1, 2, 3},  // Example 1
                {3, 3, 2, 3},  // Example 2
                {1, 2, 1, 2},  // Example 3
                {12, 12, 12, 12} // Example 4
        };

        for (int i = 0; i < examples.length; i++) {
            System.out.println("Example " + (i + 1) + ":");
            redistributeBurles(examples[i]);
        }
    }

    // Method to redistribute burles
    private static void redistributeBurles(int[] citizens) {
        int maxWelfare = Arrays.stream(citizens).max().orElse(0);
        int totalBurlesNeeded = 0;

        for (int citizen : citizens) {
            totalBurlesNeeded += maxWelfare - citizen;
        }

        // Output the result
        if (totalBurlesNeeded == 0) {
            System.out.println("All citizens already have equal welfare: " + maxWelfare + " burles.");
        } else {
            System.out.println("Burles needed for redistribution: " + totalBurlesNeeded);
            int[] redistribution = new int[citizens.length];
            for (int i = 0; i < citizens.length; i++) {
                redistribution[i] = maxWelfare - citizens[i];
            }
            System.out.println("Redistribution plan: " + Arrays.toString(redistribution));
        }
        System.out.println();
    }
}