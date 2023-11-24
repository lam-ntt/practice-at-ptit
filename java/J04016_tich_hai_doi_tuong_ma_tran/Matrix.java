/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04016_tich_hai_doi_tuong_ma_tran;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Matrix {
    private int[][] a;

    public Matrix(int n, int m) {
        a=new int[n][m];
    }

    public void nextMatrix(Scanner sc) {
        for(int i=0; i<a.length; i++){
            for(int j=0; j<a[0].length; j++){
                a[i][j]=sc.nextInt();
            }
        }
    }

    public Matrix mul(Matrix b) {
        int row=a.length, col=b.a[0].length;
        Matrix res=new Matrix(row, col);
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                for(int k=0; k<a[0].length; k++){
                    res.a[i][j]+=a[i][k]*b.a[k][j];
                }
            }
        }
        return res;
    }
    
    public String toString(){
        String tmp="";
        for(int i=0; i<a.length; i++){
            for(int j=0; j<a[0].length; j++){
                tmp+=(a[i][j]+" ");
            }
            tmp+="\n";
        }
        return tmp;
    }
}
