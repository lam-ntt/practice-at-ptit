/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07058_danh_sach_mon_thi;

import java.util.Comparator;

/**
 *
 * @author nguye
 */
class LComparator implements Comparator<Subject>{
    @Override
    public int compare(Subject a, Subject b){
        return a.getCode().compareTo(b.getCode());
    }
}
