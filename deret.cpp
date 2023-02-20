#include <iostream>

using namespace std;

int main (){
	int deret, i;
	
	cin >> deret;
	
	for (i = 1; i <= deret; i++ ){
	
			if (i%5==0){
				continue;
			}
			
		else if (i == 31){
			cout << "NOT FOUND";
			break;
		}
			cout << i << " ";
	}
	}

