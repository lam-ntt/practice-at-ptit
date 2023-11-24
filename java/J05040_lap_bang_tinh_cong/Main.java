/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05040_lap_bang_tinh_cong;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            Employee e=new Employee(sc);
            e.cal();
            System.out.println(e);
            t--;
        }
    }
}
