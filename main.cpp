#include<iostream>
#include "Isi/Input.h"
#include "Isi/Proses.h"
#include "Isi/Output.h"
using namespace std;

int main(){
    Input objectInput = Input();
    Proses objectProses = Proses();
    Output objectOutput = Output();
    string nama[100];
    int long nim[100];
    int skor[100];
    
    objectInput.input(nama, nim, skor);
    objectProses.proses(nama, nim, skor);
    objectOutput.output(nama,nim, skor);
    return 0;

}
