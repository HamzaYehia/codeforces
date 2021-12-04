// problem name: 263A Beautiful Matrix
// problem link: https://codeforces.com/problemset/problem/263/A
// status: accepted

// auother: https://github.com/HamzaYehia

import java.util.Scanner;
 
public class BeautifulMatrix {
    public static void main(String args[]) {
        int cnt = 0;
        Scanner in = new Scanner(System.in);
        int matrix[][] = new int [5][5];
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
              matrix[i][j] = in.nextInt();
              if (matrix[i][j] == 1)
              cnt+= Math.abs(i - 2) + Math.abs(j - 2);
            }
        }
    System.out.println(cnt);    
    }
}

