/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.List;

/**
 *
 * @author nguye
 */
public class J07085_tong_chu_so {
    public static void main(String[] args) throws IOException, ClassNotFoundException{
        ObjectInputStream o=new ObjectInputStream(
                new FileInputStream("DATA.in"));
        List<String> l=(List<String>) o.readObject();
        o.close();
        
        for(String s: l){
            String tmp="";
            for(int i=0; i<s.length(); i++){
                if(Character.isDigit(s.charAt(i))){
                    tmp+=s.charAt(i)+"";
                }
            }
            while(tmp.charAt(0)=='0'){
                tmp=tmp.substring(1);
            }
            
            int sum=0;
            for(int i=0; i<tmp.length(); i++){
                sum+=tmp.charAt(i)-'0';
            }
            System.out.println(tmp+" "+sum);
        }
    }
}
