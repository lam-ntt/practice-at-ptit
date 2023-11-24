/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03039_chia_het {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        
        int t=sc.nextInt();
        while(t!=0){
            BigInteger bi1=new BigInteger(sc.next());
            BigInteger bi2=new BigInteger(sc.next());
            
            BigInteger tmp1=bi1.mod(bi2);
            BigInteger tmp2=bi2.mod(bi1);
            if(tmp1.toString().equals("0")||tmp2.toString().equals("0")){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
            
            t--;
        }
    }
}
