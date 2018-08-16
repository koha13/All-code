#include<bits/stdc++.h>
using namespace std;
int n,a,b,c,d,dem[105][105];
char mt[105][105];
struct o{
	int x,y;
};
int xuly(){
	if(a==c && b==d){
		cout<<0;
		return 1;
	}
	queue<o> q;
	o bd;
	bd.x=a; bd.y=b;
	dem[a][b]=1;
	q.push(bd);
	while(!q.empty()){
		o tmp=q.front(); q.pop();
		o tmp1=tmp;
		tmp1.y++;
		while(tmp1.y<n && mt[tmp1.x][tmp1.y]=='.'){
			if(dem[tmp1.x][tmp1.y]==0){
				if(tmp1.x==c && tmp1.y==d){
					cout<<dem[tmp.x][tmp.y];
					return 1;
				}
				dem[tmp1.x][tmp1.y]=dem[tmp.x][tmp.y]+1;
//				cout<<tmp1.x<<" "<<tmp1.y<<" "<<dem[tmp1.x][tmp1.y]<<endl;
				q.push(tmp1);
			}
			tmp1.y++;
		}
		tmp1=tmp;
		tmp1.y--;
		while(tmp1.y>=0 && mt[tmp1.x][tmp1.y]=='.'){
			if(dem[tmp1.x][tmp1.y]==0){
				if(tmp1.x==c && tmp1.y==d){
					cout<<dem[tmp.x][tmp.y];
					return 1;
				}
				dem[tmp1.x][tmp1.y]=dem[tmp.x][tmp.y]+1;
//				cout<<tmp1.x<<" "<<tmp1.y<<" "<<dem[tmp1.x][tmp1.y]<<endl;
				q.push(tmp1);
			}
			tmp1.y--;
		}
		o tmp2=tmp;
		tmp2.x++;
		while(tmp2.x<n && mt[tmp2.x][tmp2.y]!='X'){
			if(dem[tmp2.x][tmp2.y]==0){
				if(tmp2.x==c && tmp2.y==d){
					cout<<dem[tmp.x][tmp.y];
					return 1;
				}
				dem[tmp2.x][tmp2.y]=dem[tmp.x][tmp.y]+1;
//				cout<<tmp1.x<<" "<<tmp1.y<<" "<<dem[tmp1.x][tmp1.y]<<endl;
				q.push(tmp2);
			}
			tmp2.x++;
		}
		tmp2=tmp;
		tmp2.x--;
		while(tmp2.x>=0 && mt[tmp2.x][tmp2.y]!='X'){
			if(dem[tmp2.x][tmp2.y]==0){
				if(tmp2.x==c && tmp2.y==d){
					cout<<dem[tmp.x][tmp.y];
					return 1;
				}
				dem[tmp2.x][tmp2.y]=dem[tmp.x][tmp.y]+1;
//				cout<<tmp1.x<<" "<<tmp1.y<<" "<<dem[tmp1.x][tmp1.y]<<endl;
				q.push(tmp2);
			}
			tmp2.x--;
		}
	}
	return 1;
}
main(){
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			cin>>mt[i][j];
			dem[i][j]=0;
		}
	cin>>a>>b>>c>>d;
	xuly();
}
