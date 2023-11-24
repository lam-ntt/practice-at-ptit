/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02103_tich_ma_tran_voi_chuyen_vi_cua_no {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int n, m, cnt=1;
        int [][] a, res;
        while(t!=0){
            n=sc.nextInt();
            m=sc.nextInt();
            a=new int[n][m];
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    a[i][j]=sc.nextInt();
                }
            }
            
            res=new int[n][n];
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    for(int k=0; k<m; k++){
                        res[i][j]+=a[i][k]*a[j][k];
                    }
                }
            }
            
            System.out.println("Test "+(cnt++)+":");
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    System.out.print(res[i][j]+" ");
                }
                System.out.println();
            }
            t--;
        }
    }
}
