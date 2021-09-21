class Solution {
    public int climbStairs(int n) {
        int result = -1;

        if (n==0) result= 0;

        else if (n==1) result =1;

        else if (n==2) result =2;

        else{
        int [] arr = new int[n];
        arr[0]=1;
        arr[1]=2;
        for(int i=2;i<arr.length;i++){
            arr[i]=arr[i-1]+arr[i-2];
              }
        result = arr[n-1];
        }
return result;}
}
