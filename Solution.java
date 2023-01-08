
import java.util.Arrays;

public class Solution {

    public int xorBeauty(int[] nums) {
        return Arrays.stream(nums).reduce(0, (x, y) -> x ^ y);
    }
}
