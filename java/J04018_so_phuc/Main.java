/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04018_so_phuc;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            ComplexNumber a=new ComplexNumber(sc);
            ComplexNumber b=new ComplexNumber(sc);
            System.out.println(ComplexNumber.cal(a, b));
            t-=1;
        }
    }
}
