#include<bits/stdc++.h>
using namespace std;
struct point{
	int x,y,ngay;
};
int n,m,mt[505][505],dem=0;
queue<point> q;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			cin>>mt[i][j];
			if(mt[i][j]==2){
				point tmp;
				tmp.x=i;tmp.y=j; tmp.ngay=0; q.push(tmp);
			}
			else if(mt[i][j]==1) dem++;
		}
	while(!q.empty()){
		point now=q.front(); q.pop();
		int a=now.x,b=now.y;
		if(mt[a][b+1]==1){
			mt[a][b+1]=2;
			point tmp;
			tmp.x=a;
			tmp.y=b+1;
			tmp.ngay=now.ngay+1;
			dem--;
//			cout<<tmp.x<<" "<<tmp.y<<" "<<tmp.ngay<<endl;
			if(dem==0){
				cout<<tmp.ngay;
				return 0;
			}
			q.push(tmp);
		}
		if(mt[a][b-1]==1){
			mt[a][b-1]=2;
			point tmp;
			tmp.x=a;
			tmp.y=b-1;
			tmp.ngay=now.ngay+1;
//			cout<<tmp.x<<" "<<tmp.y<<" "<<tmp.ngay<<endl;
			dem--;
			if(dem==0){
				cout<<tmp.ngay;
				return 0;
			} 
			q.push(tmp);
		}
		if(mt[a+1][b]==1){
			mt[a+1][b]=2;
			point tmp;
			tmp.x=a+1;
			tmp.y=b;
			tmp.ngay=now.ngay+1;
//			cout<<tmp.x<<" "<<tmp.y<<" "<<tmp.ngay<<endl;
			dem--;
			if(dem==0){
				cout<<tmp.ngay;
				return 0;
			} 
			q.push(tmp);
		}
		if(mt[a-1][b]==1){
			mt[a-1][b]=2;
			point tmp;
			tmp.x=a-1;
			tmp.y=b;
			tmp.ngay=now.ngay+1;
//			cout<<tmp.x<<" "<<tmp.y<<" "<<tmp.ngay<<endl;
			dem--;
			if(dem==0){
				cout<<tmp.ngay;
				return 0;
			} 
			q.push(tmp);
		}
	}
	if(dem>0){
		cout<<-1;
	}
	return 0;
}
