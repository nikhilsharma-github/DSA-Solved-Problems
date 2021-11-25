import java.io.*;
import java.util.*;

public class Main {

    public static void placeBack(int[][] a, int[] val, int s) {

        int minr = s - 1;
        int minc = s - 1;
        int maxr = a.length - s;
        int maxc = a.length - s;

        int idx = 0, j = minc;

        for (int i = minr, j = minc; i <= maxr; i++) {
            a[i][j] = val[idx];
            idx++;
        }

        for (int i = maxr, j = minc + 1; j <= maxc; j++) {
            a[i][j] = val[idx];
            idx++;
        }

        for (int j = maxc, i = maxr - 1; i >= minr; i--) {

            a[i][j] = val[idx];
            idx++;
        }

        for (int i = minr, j = maxc - 1; j >= minc + 1; j--) {

            a[i][j] = val[idx];
            idx++;
        }

    }

    public static int[] shellValues(int[][] a, int s) {

        int minr = s - 1;
        int minc = s - 1;
        int maxr = a.length - s;
        int maxc = a.length - s;

        int size = 2 * (maxr - minr + maxc - minc);
        int[] val = new int[size];

        int idx = 0;

        for (int i = minr, j = minc; i <= maxr; i++) {
            val[idx] = a[i][j];
            idx++;
        }

        for (int i = maxr, j = minc + 1; j <= maxc; j++) {
            val[idx] = a[i][j];
            idx++;
        }

        for (int j = maxc, i = maxr - 1; i >= minr; i--) {
            val[idx] = a[i][j];
            idx++;
        }

        for (int i = minr, j = maxc - 1; j >= minc + 1; j--) {
            val[idx] = a[i][j];
            idx++;
        }

        retrun val;

    }

    public static void rotateArray(int[] art, int r) {
        r = r % art.length;
        if (r < 0)
            r = a.length + r;

        int low = 0;
        int mid = art.length - r - 1;

        while (low <= mid) {
            int temp = a[low];
            a[low] = a[mid];
            a[mid] = temp;
            low++;
            mid--;
        }
        mid = art.length - r;
        high = art.length - 1;

        while (mid <= high) {
            int temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
            mid++;
            high--;
        }
        low = 0;
        high = art.length - 1;
        while (low <= high) {
            int temp = a[low];
            a[low] = a[high];
            a[high] = temp;
            low++;
            high--;
        }

    }

    public static void shellRotate(int[][] a, int s, int r) {

        int[] art = shellValues(a, s);
        rotateArray(art, r);
        placeBack(a, art, s);

    }

    public static void main(String[] args) throws Exception {
        // write your code here

        Scanner scn = new Scanner(System.in);
        int r = scn.nextInt();
        int c = scn.nextInt();

        int[][] a = new int[r][c];

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                a[i][j] = scn.nextInt();
            }
        }

        int rotate = 0, shell = 0;
        shell = scn.nextInt();
        rotate = scn.nextInt();
        shellRotate(a, shell, rotate);
        display(a);
    }

    public static void display(int[][] arr) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[0].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }

}