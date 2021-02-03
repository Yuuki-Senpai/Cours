/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package romain.touchard.java_2_td2;

import java.util.Scanner;

/**
 *
 * @author rleroy
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int touche;
        int montant;
        Scanner scan = new Scanner(System.in);
        CompteBancaire cb1;
        CompteBancaire cb2;
        
        cb1= new CompteBancaire(2000);
        cb2= new CompteBancaire(cb1);
        
        
        do{
            System.out.println("Menu \n 1- affiche les infos du compte\n 2- Depose un montant sur le compte\n 3- Retire un montant sur le compte\n 4- Rentrez un nouveau decouvert");
            touche=scan.nextInt();
            switch(touche){
                case 1:
                    cb1.afficher();
                    break;
                case 2:
                    System.out.println("rentrez le montant a ajouter au solde");
                    montant = scan.nextInt();
                    cb1.deposer(montant);
                    break;
                case 3:
                    System.out.println("rentrez le montant a retirer au solde");
                    montant = scan.nextInt();
                    cb1.retirer(montant);
                    break;
                
                    
                    
            }
            
        }while(touche !=0);
        
        
        
    }
    
}
