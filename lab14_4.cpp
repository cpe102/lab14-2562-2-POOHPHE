#include <bits/stdc++.h>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() here 
void shuffle(int &a,int &b, int &c, int &d){
	multiset<int >m;
	
	int i=0,ran,arr[]={a,b,c,d};
	while(i<4){
		ran=rand()%4;
		while(m.count(arr[ran])>0){
			ran=rand()%4;
		}
		m.insert(arr[ran]);
		if(i==0){
			a=arr[ran];
		}
		if(i==1){
			b=arr[ran];
		}
		if(i==2){
			c=arr[ran];
		}
		if(i==3){
			d=arr[ran];
		}
		i++;
	}
	
	
	
	
}
