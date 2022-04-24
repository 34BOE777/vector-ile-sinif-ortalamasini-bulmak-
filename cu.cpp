#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int cu;
	vector<vector<int>>matris(3,vector<int>(2));
	vector <float> ort;
	for(int i=0;i<3;i++){//kişi sayısı
		for(int j=0;j<2;j++){//ders sayısı
		cout<<"Öğrenci "<<j+1<<" DERS["<<i+1<<"] Notu ="<<endl;
		cin>>cu;
		matris[i][j]=cu;
		}
	}
	
	for(int i=0;i<3;i++){
		int toplam=0;
		for(int j=0;j<2;j++){
		toplam=toplam+matris[i][j];
		}
		ort.push_back(toplam/2);
		//ort[i]=toplam/3;
	}
	int x=1;
	for(int a:ort){

		cout<<"DERS "<<x<<" ORTALAMA:"<<a<<endl;
		x++;
	}

	
	return 0;
}