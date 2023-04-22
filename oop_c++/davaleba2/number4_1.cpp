#include <iomanip>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <algorithm>
#include <conio.h>
#include <math.h>
#include "number4.h"
using namespace std;

demo::student(){
	srand(time(0));
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			A[i][j]=10+rand()%41;
		}	
	}
}

void student::prnt(){
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<A[i][j]<<" ";
		}	
	cout<<endl;
	}
}

void student::function(){
int t,temp,min=A[0][0];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(min>A[i][j]){
				min=A[i][j];
				t=j;
		    }
		}	
	}
	cout<<"\nMinimumI:"<<min<<endl;
	cout<<"\nMinimumII:"<<t<<endl;
	j=2;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		temp=A[i][j];
		A[i][j]=A[i][t];
		A[i][t]=temp;
		}	
	}
}




