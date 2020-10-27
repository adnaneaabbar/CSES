import java.util.HashMap;
import java.util.Scanner;

/**
 * sumoftwovalues
 */
public class sumoftwovalues {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int target = s.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = s.nextInt();
        }

        HashMap<Integer, Integer> map = new HashMap();
        int[] positions = new int[2];
        boolean flag = false;

        for (int i = 0; i < n; i++){
            Integer val = map.get(target - a[i]);
            if(val == null){
                map.put(a[i], i);
            } else {
                positions[0] = val + 1;
                positions[1] = i + 1;
                flag = !flag;
                break;
            }
        }
        if(flag){
            System.out.println(positions[0] + " " + positions[1]);
        } else {
            System.out.println("IMPOSSIBLE");
        }
        s.close();
    }
}