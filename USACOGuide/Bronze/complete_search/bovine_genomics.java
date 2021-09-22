import java.util.*;
import java.io.*;

public class bovine_genomics {
    public static void main(String[] args) {
        Scanner io = new Scanner(System.in);

        int N = io.nextInt(), M = io.nextInt();
        int[][] spottyCows = new int[N][M], plainCows = new int[N][M];
        int possiblePositions = 0;

        for (int i = 0; i<N; i++) {
            String sequence = io.next();
            for (int j=0; j<M; j++) {
                spottyCows[i][j] = sequence.charAt(j);
            }
        }

        for (int i = 0; i<N; i++) {
            String sequence = io.next();
            for (int j=0; j<M; j++) {
                plainCows[i][j] = sequence.charAt(j);
            }
        }

        for (int i=0; i<M; i++) {
            boolean duplicate = false;
            for (int j = 0; j<N; j++) {
                for (int k=0; k<N; k++) {
                    if (spottyCows[j][i] == plainCows[k][i]) {
                        duplicate = true;
                        break;
                    }
                }
            }
            if (!duplicate) {
                possiblePositions++;
            }
        }
        System.out.println(possiblePositions);
        io.close();
    }
}
