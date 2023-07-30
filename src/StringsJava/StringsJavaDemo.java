package StringsJava;

public class StringsJavaDemo {
    public static void main(String[] args){
        String str1 = "vishal";
        String str2 = "vishal";

        // str1,str2 both referencing same object("vishal)
        // bcz String pooling concept in Java
        System.out.println(str1==str2);

        str2 = "hello"; //now str2 points to hello obj
        System.out.println(str1==str2);

        // string obj in heap outside string pool individual objs
        String str3 = new String("string obj");
        String str4 = new String("string obj");

        System.out.println(str3==str4); // cmprs primitive value + ref of objects
        System.out.println(".equals() : "+str3.equals(str4)); // cmprs values of objects

        //pretty printing formatting lot are available
        System.out.printf("hello %s , how are you %s : " ,"vishal","vishal" );
        System.out.printf("pi :  %.4f",Math.PI); //also round of last digit

       // char convert into int(ASCII) value
        System.out.println('a'+'b'); //195
        System.out.println('a'+3); // 100
        System.out.println((char)('a'+3)); // d

        // string Optimization
        // string are immutable
        String s1 = "";
        for(int i=0;i<26 ;i++){     // N time
            char ch = (char)('a'+i);
            s1 += ch;               // N times internally bcx strings are immutable so new obj created
        }

        // StringBuilder -> mutable
        StringBuilder builder = new StringBuilder();
        // N time only
        for(int i=0;i<26 ;i++){
            char ch = (char)('a'+i);
            builder.append(ch);
        }

        //converts builder to str obj
        String s2 = builder.toString();

    }
}
