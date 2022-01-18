#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a ,int &b ,int &c ,int &d){
	int e[] = {a,b,c,d};
  
    for (int i=0; i<4 ;i++)
    {
        int j = i + (rand() % (4 -i));
		
		if(i == 0){
			int k = e[i];
			a = e[j];
			e[j] = k;
		}
		if(i == 1){
			int k = e[i];
			b = e[j];
			e[j] = k;
		}	
		if(i == 2){
			int k = e[i];
			c = e[j];
			e[j] = k;
		}
		if(i == 3){
			int k = e[i];
			d = e[j];
			e[j] = k;
		}
    }
}
