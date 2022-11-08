package lab01;



public class DiffUtil {
    public static int findSmallestDiff(int[] a) {
        if (a.length < 2) {
            return -1;
        }

        int diff = a[0] - a[1];

        for (int i = 0; i < a.length; i++) {
            for (int j = i + 1; j < a.length; j++) {
                int tmp_diff = Math.abs(a[i] - a[j]);

                if (tmp_diff < diff)
                    diff = tmp_diff;
            }
        }

        return diff;
//        return 0;
    }
}