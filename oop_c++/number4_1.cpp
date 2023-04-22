#include "number4.h"
#include <iostream>
#include <iomanip>
#include <time.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

student::student(){
	srand(time(0));
	for(int i=0;i<12;i++){
		a[i]=-6+rand()%15;
	}
}
void student::print(){
	for(int i=0;i<12;i++){
	cout<<setw(4)<<a[i];
	}		
}

int student::func(){
double x=0;
for(int i=0;i<12;i++){
	if(a[i]>0){
		x+=a[i];
	}
}	
	return x;
}



