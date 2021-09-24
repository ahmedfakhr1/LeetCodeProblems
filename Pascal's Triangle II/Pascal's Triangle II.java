class Solution {
    public List<Integer> getRow(int rowIndex) {

        rowIndex++;
        List<List<Integer>> array = new ArrayList<List<Integer>>();
        for (int i =0;i<rowIndex;i++){
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
                        subarray.add(array.get(i-1).get(j-1)+array.get(i-1).get(j));

                    }


                }
                array.add(subarray);





            }

    }
        return array.get(array.size()-1);
    }
}
