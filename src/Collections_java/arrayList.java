package Collections_java;

import java.util.ArrayList;
public class arrayList {
   public static void main(String[] args){

       // not good practice
       ArrayList list1 = new ArrayList();

       // hear
       // () size de skte hai pr kam vector k jese hi hoga same
       ArrayList<Integer> list = new ArrayList<>();

       list.add(1);
       list.add(2);

       //list internally calling toString method for print
       System.out.println(list);

       list.set(0,100);
       list.remove(1);

       System.out.println(list);

       //gives int(Integer obj)
       System.out.println(list.get(0));

       //2d
       //Declaration {null,.....null} all
       ArrayList<ArrayList<Integer>> list2D = new ArrayList<>();


       //Initialization import
       for(int i=0;i<3;i++){
           list2D.add(new ArrayList<>());
       }
       // or list2D.add(list); already hai to


    }
}
