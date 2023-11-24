/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J06007_bang_tinh_gio_chuan;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Subject {
    private String code, name;
    
    public Subject(Scanner sc) {
        code=sc.next();
        name=sc.nextLine().trim();
    }
}
