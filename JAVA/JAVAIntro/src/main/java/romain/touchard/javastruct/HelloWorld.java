/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package romain.touchard.javastruct;

import java.util.Scanner;

/**
 *
 * @author rleroy
 */
public class HelloWorld {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        /*
        float i,i1,i2,i3;
        Scanner scan = new Scanner(System.in);
        System.out.println("Rentrez i1");
        i = scan.nextInt();
        System.out.println("Rentrez i2");
        i1 = scan.nextInt();
        System.out.println("Rentrez i3");
        i2 = scan.nextInt();
        System.out.println("Rentrez i4");
        i3 = scan.nextInt();
        System.out.println("Somme = "+(i+i1+i2+i3));
        System.out.println("Produit = "+(i*i1*i2*i3));
        */
        int i;
        int b;
        b=1;
        Scanner scan = new Scanner(System.in);
        System.out.println("Rentrez le nombre dont vous voulez la factorielle");
        i = scan.nextInt();
        for (int x =1;x <=i;x++){
            b=b*x;
        }
        
        System.out.println(b);
        
    }

    

    
    
}
