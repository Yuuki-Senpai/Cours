/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package romain.touchard.java_2_td3;

/**
 *
 * @author rleroy
 */
public class Barre {

    protected String reference;
    protected int hauteur;
    protected int densite;
    

    public Barre(String reference, int hauteur) {
        this.reference = reference;
        this.hauteur = hauteur;
    }

    public void afficherReference() {
        System.out.println("Reference : " + this.reference);
    }

    static public class Ronde extends Barre {

        protected int aire;

        public Ronde(int aire, String reference, int hauteur) {
            super(reference, hauteur);
            this.aire = aire;
        }

        public void calculermasse() {
            System.out.println("la masse est : " + this.hauteur * this.aire * this.densite);
        }

    }

    static public class Carre extends Barre {

        protected int cote;

        public Carre(int cote, String reference, int hauteur) {
            super(reference, hauteur);
            this.cote = cote;
        }

        public void calculermasse() {
            System.out.println("la masse est : " + this.hauteur * this.cote * this.cote* this.densite);
        }

    }

    static public class Rectangle extends Barre {

        protected int longeur;
        protected int largeur;

        public Rectangle(int longeur, int largeur, String reference, int hauteur) {
            super(reference, hauteur);
            this.longeur = longeur;
            this.largeur = largeur;
        }

        public void calculermasse() {
            System.out.println("la masse est : " + this.hauteur * this.longeur * this.largeur* this.densite);
        }

    }

}
