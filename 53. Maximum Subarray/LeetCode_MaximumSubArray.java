
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/**
 *
 * @author ahmed
 */
public class LeetCode_MaximumSubArray {

    /**
     * @param args the command line arguments
     */
    
    public static int maxSubArray(int[] arrayOfInt){
        //creating a list of sum
        //Note i used a list because it's easier to sort through the method in Collections class,but in normal arrays it would be quite painful!
        List<Integer> SumArray = new ArrayList<Integer>();
        
        for (int i = 0; i < arrayOfInt.length; i++) {
        
            if (i==0) SumArray.add(arrayOfInt[i]);
            //here we compare if we put the value of the array right away in the sum or if we added it to the previous one,which will give me the highest value and we keep doing that!
            else if (SumArray.get(i-1)+arrayOfInt[i] > arrayOfInt[i]){
            SumArray.add(SumArray.get(i-1)+arrayOfInt[i]);
            }
            else{
            SumArray.add(arrayOfInt[i]);
            }}
        Collections.sort(SumArray);
        Collections.reverse(SumArray);
        return SumArray.get(0);
        }
    public static void main(String[] args) {
        // TODO code application logic here
        //Example to show that it works
        int[] x= {5,4,-1,7,8};
        System.out.println( maxSubArray(x) );
        
    }
    
}
