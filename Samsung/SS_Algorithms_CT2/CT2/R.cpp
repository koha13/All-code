#include <iostream>
#include <queue>
using namespace std;
 int dx[8]={-2,-2,-1,1,2,2,1,-1};
 int dy[8] = {-1,1,2,2,1,-1,-2,-2};
typedef struct {
	int x;
	int y;
}data;
bool Check(data a , data b){
	if(a.x == b.x && a.y == b.y )	return 1;
	return 0;
}
int BFS(data ST,data END){
	if(Check(ST,END)) return 0;
	int dem =1;
	queue <data> Q;
	Q.push(ST);
	int Size = 1;
	while(!Q.empty()){
		if(Size == 0){
			Size = Q.size();
			dem++;
		}
		data b = Q.front();
		Q.pop();
		Size--;
		for(int x = 0 ; x < 8; x++)
			if( b.x+dx[x] <= 8 && b.x+dx[x] >0 && b.y + dy[x] <= 8 && b.y +dy[x]>0 ){		
				data z;
				z.x = b.x+dx[x];
				z.y = b.y+dy[x];
				if(Check(z,END)) return dem;
				Q.push(z);
			}
	}
}
int main(){
	int n;
	cin >> n;
	while(n--){
		data ST;
		int x;
		char y;
		cin >> y >> x;
		ST.x = y -'a'+1;
		ST.y = x;
		data END;
		cin  >> y >>x;
		END.x = y -'a'+1;
		END.y = x;
		cout <<BFS(ST,END) <<endl;
	}
}
