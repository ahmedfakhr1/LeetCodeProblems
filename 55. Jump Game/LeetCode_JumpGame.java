/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 *
 * @author ahmed
 */
public class LeetCode_JumpGame {

    /**
     * @param args the command line arguments
     */
    
    
    public static boolean canJump(int[] nums) {
        //condition 1 if the length of the array is only one !
        
        if (nums.length == 1) return true;
        
        int stop = -1;
        int i = nums.length-1 ;
        
        
        
        //x here is an iterator in order to avoid infinite loop issue
        int x = 0;
        while (i >=0 && x<nums.length){
            
        for (int j = i-1; j >= 0; j--) {
            
                if (i-j <= nums[j]) {
                    stop = j;
                    break;
                }
            
            }
            
            i = stop;
            x++;
            
            if (i == 0) return true;
            
        }
        
        
        return fasle;
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        int[] x ={3,2,1,0,4};
        System.out.println(canJump(x));
    }
    
}
