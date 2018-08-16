#include<iostream>
#include<fstream>
using namespace std;
class khoa{
	protected:
		int tic[20][20];
	public:
		void KhoiTao();
		void HienThi();
		int KetThuc();
		bool CapNhat(int ,int , int);
		void LuuFile(ofstream &, int, int, int);
		void ChoiGame();
};
void khoa::KhoiTao(){
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			tic[i][j]=0;
}
int khoa::KetThuc(){ // kiem tra xem co nguoi thang hay chua?
	for (int i= 0; i<3; i++){
        if ((tic[i][0] == tic[i][1]) && (tic[i][0]==tic[i][2]))
            if  (tic[i][0] !=0) return tic[i][0];
    }
    for (int j= 0; j<3; j++){
        if ((tic[0][j] == tic[1][j]) && (tic[0][j]==tic[2][j]))
            if  (tic[0][j] !=0) return tic[0][j];
    }
    if ((tic[0][0] == tic[1][1]) && (tic[0][0] == tic[2][2]))
        if  (tic[0][0] !=0) return tic[0][0];
    if ((tic[2][0] == tic[1][1]) && (tic[2][0] == tic[0][2]))
        if  (tic[2][0] !=0) return tic[2][0];
    for (int i= 0; i<3; i++)
        for (int j= 0; j<3; j++)
            if (tic[i][j] ==0) return -1;
    return  0;
}
bool khoa::CapNhat(int x, int y, int luotchoi){
	if(tic[x][y]!=0) return false;
	tic[x][y]=luotchoi; return true;
}
void khoa::LuuFile(ofstream &f, int x, int y, int luotchoi){
	f<<luotchoi<<" "<<x<<" "<<y<<endl;
}
void khoa::HienThi(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			cout<<tic[i][j]<<" ";
		cout<<endl;
	}
}
void khoa::ChoiGame(){
	int luotchoi=1,kt=-1,x,y;
	khoa::KhoiTao();
	ofstream f("tictactoe.dat", ios::out);
	khoa::HienThi();
	do{
		do{
			cout<<"Nhap nuoc di cua nguoi choi "<<luotchoi<<": ";
			cin>>x>>y;
		}
		while(x<0||x>2||y<0||y>2);
		if(khoa::CapNhat(x,y,luotchoi)){
			khoa::LuuFile(f,x,y,luotchoi);
			luotchoi=(luotchoi==1)?2:1;
			khoa::HienThi();
			kt=khoa::KetThuc();
		}
	}
	while(kt==-1);
	switch (kt){
        case 1: cout<<"Nguoi choi thu 1 thang"<<endl; break;
        case 2: cout<<"nguoi choi thu 2 thang"<<endl; break;
        default: cout<<"Hoa"<<endl;
    }
}
main(){
	khoa k1;
	k1.ChoiGame();
}
