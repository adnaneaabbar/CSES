import java.util.HashSet;
import java.util.Scanner;

/**
 * playlist
 */
public class playlist {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int[] a = new int[n];
        for(int k = 0; k < n; k++){
            a[k] = s.nextInt();
        }

        int i = 0;
        int j = 1;
        int currL = 1;
        int max = 0;

        HashSet<Integer> set = new HashSet<Integer>();
        set.add(a[0]);
        while(i < a.length - 1 && j < a.length){
            if(!set.contains(a[j])){
                set.add(a[j]);
                j++;
                currL++;
            } else {
                max = Math.max(max, currL);
                set.remove(a[i]);
                i++;
                currL--;
            }
        }
        max = Math.max(max, currL);
        System.out.println(max);
        s.close();
    }
}