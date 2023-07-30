package dataStructures;
import java.util.Arrays;

public class arrays{
    public static void main(String[] args){

        int [] a = new int[5];
        int ar[]  = new int [5];
        int arr[]={100,11,23,111,15};

        int [] array  =  new int[5];
        // declaration    Initialization in heap not continuous obj
        // int []array; -> points to null

        array = arr;
        for(int num : array){
            System.out.print(num+" ");
            System.out.println();
        }

        // Arrays.toString() -> internal converts to strings and prints using loop
        System.out.println(Arrays.toString(array));

        //arrays are mutable string are not
        change(array);
        System.out.println(Arrays.toString(array));

        //min
        System.out.println(Arrays.stream(array).min());

        //sort
        Arrays.sort(array);
        System.out.println(Arrays.toString(array));


        //2D arrays
        int [][] matrix = new int[3][]; // rows mandatory

        int [][] arr2D = new int[3][3];

        int [][] arr2d = {{1,2,3},{4,5},{6,7,8,9}};

        matrix = arr2d;
        for(int [] mat : matrix){
            System.out.println(Arrays.toString(mat));
        }

        System.out.println(matrix.length);
        System.out.println(matrix[0].length);
    }

    static void change(int[] a){
        //ref var a points to same obj in heap array pointing
        a[0]=10;
    }
}
