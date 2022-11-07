#include <iostream>
#include <string>
using namespace std;
int main(){
    // deklarasi variabel
    float tugas1, tugas2, tugas3, tugas4, uts, uas, totalTugas, nilaiAkhir;
    string grade, status, nama, nim;
    // input untuk value variabel
    cout << "\t--NILAI MATA KULIAH x--"<<endl;
    cout << "Masukan nama anda : "; getline(cin, nama);
    cout << "Masukan NIM anda : "; cin >> nim;
    cout << "Masukan nilai tugas 1 : "; cin >> tugas1;
    cout << "Masukan nilai tugas 2 : "; cin >> tugas2;
    cout << "Masukan nilai tugas 3 : "; cin >> tugas3;
    cout << "Masukan nilai tugas 4 : "; cin >> tugas4;
    cout << "Masukan nilai UTS : "; cin >> uts;
    cout << "Masukan nilai UAS : "; cin >> uas;
    // assignment untuk menghitung rata-rata tugas dan nilai akhir
    totalTugas = ((tugas1+tugas2+tugas3+tugas4)/4);
    nilaiAkhir = (totalTugas*0.4) + (uas*0.3) + (uts*0.3);
    // percabangan untuk menetukan grade
    if (nilaiAkhir > 80){
        grade = "A";
        status = "lulus";
    }else if (nilaiAkhir > 70){
       grade = "B";
        status = "lulus";
    }else if (nilaiAkhir > 60){
       grade = "C";
        status = "lulus";
    }else{
       grade = "D";
        status = "tidak lulus";}
    // menampilkan hasil kalkulasi dan grading
    cout << "Mahasiswa dengan nama "<<nama<<" dan NIM "<<nim<<" mendapat nilai akhir "<<nilaiAkhir<<", "<<status<<" mata kuliah x dengan predikat "<<grade;
}