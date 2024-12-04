#include <iostream>
#include <cstdlib>
using namespace std;

void IMT() {
	system("cls");
    float bb, tb, LPinggang, imt;
    char gender;
    int tumbal;

    cout << "Berat badan anda (kg): ";
    cin >> bb;
    cout << "Tinggi badan anda (m): ";
    cin >> tb;
    cout << "Gender Anda (L/P): ";
    cin >> gender;
	cout << endl;
    
    imt = bb / (tb* tb);

    cout << "IMT anda adalah: " << imt << endl;
    
    if (imt < 18.5) {
        cout << "Anda kekurangan berat badan" << endl << endl;
    } else if (imt >= 18.5 && imt < 22.9) {
        cout << "Berat badan anda normal" << endl << endl;
    } else if (imt >= 23 && imt < 24.9) {
        cout << "Anda kelebihan berat badan" << endl << endl;
    } else if (imt >= 25 && imt < 29.9) {
        cout << "Anda obesitas tingkat I" << endl << endl;
    } else if (imt >= 30) {
    	cout << "Anda obesitas tingkat II" << endl << endl;
	} else {
		cout << "Yang dimasukan salah" << endl << endl;
	}
	
	cin.ignore();
	
	cout<<"Tabel dan rumus menggunakan referensi dari WHO"<<endl;
	
    cin.get();
}

void penurunan_berat(){
	system("cls");
	
	float beratSementara, beratTarget, mingguLebihCepat, mingguLebihLambat;
    
    cout << "Masukkan berat badan saat ini (kg): ";
    cin >> beratSementara;
    cout << "Masukkan target berat badan yang diinginkan (kg): ";
    cin >> beratTarget;
    cout<<endl;

    if (beratTarget >= beratSementara) {
        cout << "Target berat badan harus lebih rendah dari berat badan saat ini." << endl;
        return;
    }

    float selisihBerat = beratSementara - beratTarget;

    mingguLebihLambat = selisihBerat / 0.5;  
    mingguLebihCepat = selisihBerat / 1;    

    if (mingguLebihLambat - (int)mingguLebihLambat > 0) {
        mingguLebihLambat = (int)mingguLebihLambat + 1;
    }
    if (mingguLebihCepat - (int)mingguLebihCepat > 0) {
        mingguLebihCepat = (int)mingguLebihCepat + 1;
    }
    
    cin.ignore();
    
    cout << "Untuk mencapai target berat badan " << beratTarget << " kg:" << endl;
    cout << "Anda membutuhkan waktu " << mingguLebihCepat << " - " << mingguLebihLambat << " minggu" << endl;
    cout << endl;

    cout << "note : penurunan badan terlalu cepat itu tidak sehat yaa, disarankan hanya menurunkan 0,5 - 1 kg per minggu " << endl;
    cout << "Sumber : Alodokter";
    
    cin.get();
}
void TPG (){
	system("cls");
	
	float tinggi_ayah, tinggi_ibu, tpg_max, tpg_min;
    char gender;
    int tumbal;

    cout << "Tinggi badan Ayah (cm): ";
    cin >> tinggi_ayah;
    cout << "Tinggi badan Ibu (cm): ";
    cin >> tinggi_ibu;

    cout << "Jenis kelamin Anda (L/P): ";
    cin >> gender;
    
    cin.ignore();

    
    if (gender == 'L' || gender == 'l') {
        tpg_max = ((tinggi_ibu + 13) + tinggi_ayah) / 2 + 8.5;
        tpg_min = ((tinggi_ibu + 13) + tinggi_ayah) / 2 - 8.5;
        cout << "Potensi tinggi badan anda adalah: " << tpg_min << " cm hingga " << tpg_max << endl;
    } else if (gender == 'P' || gender == 'p') {
        tpg_max = ((tinggi_ayah - 13) + tinggi_ibu) / 2 + 8.5;
        tpg_min = ((tinggi_ayah - 13) + tinggi_ibu) / 2 - 8.5;
        cout << "Potensi tinggi badan anda adalah: " << tpg_min << " cm hingga " << tpg_max << endl;
    } else {
        cout << "Yang dimasukan salah";
    }
    
    cout<< "note : rumus didapatkan dari IDAI (Ikatan Dokter Anak Indonesia)";
    cin.get();
}

int main (){
	int pilihan;
	bool keluar = false;
	while (true){
		system("cls");
		cout << "masukan 1 untuk mengetahui imt serta kategorinya" << endl;
		cout << "masukan 2 untuk mengetahui target penurunan berat badan (minggu)" << endl;
		cout << "masukan 3 untuk mengetahui TPG (Tinggi Potensi Genetik)" << endl;
		cout << "masukan 4 untuk keluar";
		cout << endl;
		cin >> pilihan;
		
		switch (pilihan){
			case 1 : {
				IMT();
				break;
			}
			case 3 : {
				TPG();
				break;
			}
			case 2 : {
				penurunan_berat();
				break;
			}
			case 4 : {
				keluar = true;
				break;
			}
		} 
		if (keluar){
			break;
		}
	}
	return 0;
}
