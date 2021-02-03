package romain.touchard.java_2_td2;

/**
 *
 * @author rleroy
 */
public class CompteBancaire {

    protected double solde;

    public CompteBancaire() {
        this.solde = 0;

    }

    public CompteBancaire(double s) {
        this.solde = s;

    }

    public CompteBancaire(CompteBancaire cb) {
        this.solde = cb.solde;

    }

    public void deposer(double amount) {
        if (amount > 0) {
            this.solde += amount;
        }

    }

    public void retirer(double amount) {
        if (this.solde > amount && amount > 0) {
            this.solde -= amount;
        } else {
            System.out.println("Vous ne pouvez pas descendre en desous du découvert");
        }
    }

    public void afficher() {
        System.out.println("Votre solde est de : " + solde);
    }

    public class CompteEpargne extends CompteBancaire {

        private double txint;

        public CompteEpargne(double txint) {
            this.txint = txint;
        }

        public CompteEpargne(double txint, double s) {
            super(s);
            this.txint = txint;
        }

        public double calculerinteret() {
            double interet;
            interet = this.solde * this.txint / 100;
            return interet;
        }

        public void crediterInteret() {
            this.solde = this.solde * this.txint / 100;
        }

        public void changerTx(double newTx) {
            if (newTx > 0) {
                txint = newTx;
            }
        }
    }

}
