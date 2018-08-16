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
};
void khoa::KhoiTao(){
	ifstream in("sudoku.txt", ios::in);
	for(int i=0;i<9;i++)
		for(int j=0;j<9;j++) in>>sud[i][j];
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
			cout<<sud[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl<<endl;
}
main(){
	khoa k1;
	k1.KhoiTao();
	if(k1.ChoiGame()) k1.HienThi();
}
