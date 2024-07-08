#include <iostream>
using namespace std;

class MataKuliah {
private: 
	float presensi;
	float acticity;
	float exercise;
	float tugasAkhir;
public:  MataKuliah() {
	presensi = 0.0;

}
	  virtual void namaMataKuliah() { return 0 };
	  virtual void inputNilai() {}
	  virtual float hitungNilaiAkhir() { return 0 };
	  virtual void cekKelulusan() {}

	  void setPresensi(float nilai)
	  {
		  this->presensi = nilai;
	  }
	  float getPresensi() 
	  {
		  return presensi;
	  }
	  void setActivity(float nilai)
	  {
		  this->acticity = nilai;
	  }
	  float getActivity()
	  {
		  return acticity;
	  }
	  void setExercise(float nilai)
	  {
		  this->exercise = nilai;
	  }
	  float getExercise()
	  {
		  return exercise;
	  }
	  void setTugasAkhir(float nilai)
	  {
		  this->tugasAkhir = nilai;
	  }
	  float getTugasAkhir()
	  {
		  return tugasAkhir;
	  }
};

class Pemrograman :public MataKuliah {
public:
	void inputNilai() {
		float nPresensi;
		float nActivity;
		float nExercise;
		float nTugasAkhir;

		cout << "Masukkan nilai presensi: " << endl;
		cin >> nPresensi;
		cout << "Masukkan nilai acticity: " << endl;
		cin >> nActivity;
		cout << "Masukkan nilai exercise: " << endl;
		cin >> nExercise;
		cout << "Masukkan nilai tugas akhir: ";
		cin >> nTugasAkhir;
	}
	 float hitungNilaiAkhir() {
		 float nPresensi;
		float nActivity;
		 float nExercise;
		float  nTugasAkhir;
		return nPresensi + nActivity + nExercise + nTugasAkhir / 4;

	}
	void cekKelulusan() {
		float nPresensi = (setPresensi(), getPresensi());
		float nActivity = (setActivity(), getActivity());
		float nExercise = (setExercise(), getExercise());
		float nTugasAkhir = (setTugasAkhir(), getTugasAkhir());
		cout << "Nilai presensi: " << nPresensi << endl;
		cout << "Nilai activity: " << nActivity << endl;
		cout << "Nilai exercise: " << nExercise << endl;
		cout << "Nilai tugas akhir: " << nTugasAkhir << endl;

		if (hitungNilaiAkhir > 75);
			cout << "Anda dinyatakan lulus";
		else (hitungNilaiAkhir < 75);
			cout << "Anda dinyatakan tidak lulus";
	}
};

class Jaringan :public MataKuliah {
public:
	void inputNilai() {
		float nActivity;
		float nExercise;
		cout << "Masukan nilai activity: " << endl;
		cin >> nActivity;
		cout << "Masukkan nilai exercise: ";
		cin >> nExercise;
	}
	float hitungNilaiAkhir() {
		float nActivity;
		float nExercise;
		return nActivity + nExercise / 2;

	 }
	void cekKelulusan() {
		float nActivity = (setActivity(), getActivity());
		float nExercise = (setExercise(), getExercise());
		cout << "Nilai activity: " << nActivity << endl;
		cout << "Nilai ecercise: " << nExercise << endl;

		if (hitungNilaiAkhir > 75);
			cout << "Anda dinyatakan lulus";
		else (hitungNilaiAkhir < 75);
			cout << "Anda dinyatakan tidak lulus";

	}
};

int main() {
	char pilih;
	MataKuliah* mataKuliah;
	Pemrograman pemrograman;
	Jaringan jaringan;


}