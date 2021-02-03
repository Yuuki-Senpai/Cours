package romain.touchard.javastruct;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author rleroy
 */
public class Point {
    double x;
    double y;

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
        
    }

    public Point(Point P) {
        this.x = P.x;
        this.y = P.y;
    }
    

    
    
    
}
