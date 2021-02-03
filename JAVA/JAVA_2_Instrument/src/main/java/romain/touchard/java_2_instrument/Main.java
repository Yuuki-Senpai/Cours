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
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Instrument.InstrumentACorde.Guitare maGuitare;
        maGuitare =new Instrument.InstrumentACorde.Guitare();
        maGuitare.modele="p444";
        maGuitare.nom="Guitare";
        maGuitare.nombreDeCorde=20;
        maGuitare.afficher();
        
        
        
    }
    
}
