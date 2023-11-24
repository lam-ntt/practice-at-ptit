/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05063_tong_da_thuc;

import java.util.Comparator;
import java.util.Map;
import java.util.TreeMap;

/**
 *
 * @author nguye
 */

class MyComparator implements Comparator<Integer>{
    @Override
    public int compare(Integer o1, Integer o2) {
        return -Integer.compare(o1, o2);
    }
    
}
public class DaThuc {
    private Map<Integer, Integer> mp=new TreeMap(new MyComparator());
    
    public DaThuc(String nextLine) {
        String[] ss=nextLine.split("\\s\\+\\s");
        for(int i=0; i<ss.length; i++){
            int tmp=ss[i].indexOf('*');
            mp.put(Integer.valueOf(ss[i].substring(tmp+3)),
                    Integer.valueOf(ss[i].substring(0, tmp)));
        }
    }

    public DaThuc cong(DaThuc q) {
        for(Integer i: q.mp.keySet()){
            if(mp.containsKey(i)){
                mp.replace(i, mp.get(i)+q.mp.get(i));
            }else{
                mp.put(i, q.mp.get(i));
            }
        }
        return this;
    }
    
    public String toString(){
        String tmp="";
        for(Integer i: mp.keySet()){
            tmp+=(mp.get(i)+"*x^"+i+" + ");
        }
        tmp=tmp.substring(0, tmp.length()-3);
        tmp+="\n";
        return tmp;
    }
}
