import java.util.Arrays;

public class BubbleSort {

    public static void bubbleSort(int[] array){
        int size = array.length;
        for(int step = 1; step <= size; step++)
        {
            boolean flag = true;
            for(int i = 0; i < size-step; i++)
            {
                if (array[i] > array[i + 1])
                {
                    int temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                    flag = false;
                }
            }
            if(flag) break;
        }
    }

    public static void main(String[] args){
        // int[] array = new int[5];
        int[] array = {-2, 45, 0, 0, 11, -8};

        bubbleSort(array);

        System.out.println(Arrays.toString(array));
    }
}
