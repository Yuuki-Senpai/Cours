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
public class Degres {
    public static void main(String[] args) {
        double degree;
        
        
        Scanner scan = new Scanner(System.in);
        System.out.println("Rentrez le degré que vous souhaitez convertir");
        degree =  scan.nextFloat();
        degree=(5.0/9.0)*(degree-32.0);
        System.out.println(degree);
    }
}