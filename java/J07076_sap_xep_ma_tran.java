/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J07076_sap_xep_ma_tran {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("MATRIX.in"));
        int t=sc.nextInt();
        while(t!=0){
            int n=sc.nextInt(), m=sc.nextInt(), col=sc.nextInt();
            int[][] a=new int[n][m];
            List<Integer> l=new ArrayList();
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    a[i][j]=sc.nextInt();
                    if(j==col-1) l.add(a[i][j]); 
                }
            }
            
            Collections.sort(l);
            for(int i=0; i<n; i++){
                a[i][col-1]=l.get(i);
            }
            
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    System.out.print(a[i][j]+" ");
                }
                System.out.println();
            }
            
            t--;
        }
    }
}
