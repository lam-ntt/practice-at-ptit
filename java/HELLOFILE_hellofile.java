/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class HELLOFILE_hellofile {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("Hello.txt"));
        while(sc.hasNextLine()){
            System.out.println(sc.nextLine());
        }
    }
}
