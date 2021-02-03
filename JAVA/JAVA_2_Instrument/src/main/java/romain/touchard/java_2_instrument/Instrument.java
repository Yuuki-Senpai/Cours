/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package romain.touchard.java_2_instrument;

/**
 *
 * @author rleroy
 */
public class Instrument {

    String nom;

    public Instrument() {
        System.out.println("constructeur defaut Instrument de musique");
    }

    public void afficher() {
        System.out.println("L'instrument est un " + this.nom);
    }

    static public class InstrumentACorde extends Instrument {

        int nombreDeCorde;

        public InstrumentACorde() {
            System.out.println("Constructeur defaut InstrumentACorde");
        }

        
        public void afficher() {
         
            System.out.println("L'instrument est un " + this.nom + "avec n" + this.nombreDeCorde + "nombre de corde");
        }

        static public class Guitare extends InstrumentACorde {

             String modele;

            public Guitare() {
                System.out.println("Constructeur default guitare");
            }

            public void afficher() {
                System.out.println("L'instrument est un " + this.nom + "avec n" + this.nombreDeCorde + "nombre de corde et possede comme modele :"+modele);
            }

        }
    }

}
