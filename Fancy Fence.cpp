

import java.util.Scanner;


public class MyClass {


    public static void main(String[] args) {



     Scanner input= new Scanner(System.in);


     int n=input.nextInt();

     int[] a = new int[n];

     int i;

     int[] p = new int[n];

     for(i=0;i<n;i++)
     {


       a[i] = input.nextInt();


       a[i]=180-a[i];


       if(360%a[i]==0)
       {
           p[i]=1;

    }

       else


       {

           p[i]=0;
       }

}

for(i=0;i<n;i++)
{

    if(p[i]==1)
    {



        System.out.println("YES");
    }

    else
    {

        System.out.println("NO");





    }

}






    }
}
