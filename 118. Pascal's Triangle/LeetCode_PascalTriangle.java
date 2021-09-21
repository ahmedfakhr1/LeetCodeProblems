
import java.util.*;

/**
 *
 * @author ahmed
 */
public class LeetCode_PascalTriangle {

    /**
     * @param args the command line arguments
     */

//the solution Mathod
    public static List<List<Integer>> generate(int numRows) {
        //here we created a list of lists of integers
        List<List<Integer>> array = new ArrayList<List<Integer>>();
        //the for loop to fill our BIG array.
        for (int i =0;i<numRows;i++){
            List<Integer> subarray = new ArrayList<Integer>();
            if (i == 0){
                subarray.add(1);
                array.add(subarray);

            }
            else if (i == 1){
                subarray.add(1);
                subarray.add(1);
                array.add(subarray);

            }
            else{

                for (int j = 0 ; j < i+1 ;j++ ){
                    if (j==0 || j == i){
                         subarray.add(1);}
                    else{
                        subarray.add(array.get(i-1).get(j-1)+array.get(i-1).get(j));}
                          }
                    array.add(subarray);
            }
    }
        return array;
    }
    public static void main(String[] args) {
        // just an example to show that it works,you can adjust it to get input from user for example.
        System.out.println(generate(5));
    }

}
