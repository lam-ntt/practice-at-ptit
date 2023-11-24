/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02106_ma_tran_nhi_phan {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int tmp, cnt=0;
        while(t!=0){
            tmp=0;
            for(int i=0; i<3; i++){
                tmp+=sc.nextInt();
            }
            if(tmp>1) cnt++;
            t--;
        }
        System.out.println(cnt);
    }
}
