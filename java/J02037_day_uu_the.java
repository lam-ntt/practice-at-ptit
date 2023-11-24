/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02037_day_uu_the {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            String s=sc.nextLine();
            String[] ss=s.split("\\s+");
            
            int cnt=0;
            for(int i=0; i<ss.length; i++){
                if(Integer.parseInt(ss[i])%2==0) cnt++;
                else cnt--;
            }
            
            if((ss.length%2==0&&cnt>0)||(ss.length%2==1&&cnt<0)){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
            t--;
        }
    }
}
