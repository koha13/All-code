#include<iostream>
#include<fstream>
using namespace std;
class khoa{
	protected:
		int sud[9][9];
	public:
		void KhoiTao();
		bool KetThuc();
		bool KiemTra(int , int , int );
		void CapNhat(int , int , int );
		bool ChoiGame();
		void HienThi();
		bool kiemtralai();
};
void khoa::KhoiTao(){
	for(int i=0;i<9;i++){
			string s;
			getline(cin,s);
			int j=0;
			for(int k=0;k<9;k++){
				sud[i][j]=s[k]-'0';
				j++;
			}
		}
}
bool khoa::KetThuc(){
	for(int i=0;i<9;i++)
		for(int j=0;j<9;j++) if(sud[i][j]==0) return false;
	return true;
}
bool khoa::KiemTra(int x, int y, int c){
	for(int i=0;i<9;i++)
		if(sud[x][i]==c || sud[i][y]==c) return false;
	int x1 = (x / 3) * 3, x2 = x1 + 3;
	int y1 = (y / 3) * 3, y2 = y1 + 3;
	for(int i=x1;i<x2;i++)
		for(int j=y1;j<y2;j++)
			if(sud[i][j]==c) return false;
	return true;
}
void khoa::CapNhat(int x,int y,int c){
	sud[x][y]=c;
}
bool khoa::ChoiGame(){
	if(khoa::KetThuc()) return true;
	for (short i = 0; i < 9; i++)
		for (short j = 0; j < 9; j++)
			if (!sud[i][j]) {
				short number = 1;
				while (number <= 9) {
					if (khoa::KiemTra(i,j, number)) {
						sud[i][j] = number;
						if(khoa::ChoiGame()) return true;
						
						
					}
					number++;
				}
				sud[i][j] = 0;
				return false;
			}
}
void khoa::HienThi(){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++)
			cout<<sud[i][j];
		cout<<endl;
	}
	cout<<endl;
}
bool khoa::kiemtralai(){
	for(int i=1;i<=9;i++){
		int dem=0;
		for(int u=0;u<9;u++)
			for(int v=0;v<9;v++)
				if(sud[u][v]==i) dem++;
		if(dem!=9) return false;
	}
	return true;
}
main(){
	khoa k1;
	int test;
	cin>>test;
	string t;
	getline(cin,t);
	while(test--){
		k1.KhoiTao();
		if(k1.ChoiGame()){
			if(k1.kiemtralai())
				k1.HienThi();
			else cout<<"Could not complete this grid.\n";
		} 
		else cout<<"Could not complete this grid.\n";
	}
}
