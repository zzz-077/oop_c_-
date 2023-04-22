#include  "mark.h"
#include <iomanip>  
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <conio.h>


student::student(){
	srand(time(0));	
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
		a[i][j]=10+rand()%51;	
		}	
	}
}

void student::print(){
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			cout<<a[i][j]<<" ";
		}	
		cout<<endl;
	}	
}

void student::func(){
int max=a[0][0],k,t;
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			if(max<a[i][j]){
				max=a[i][j];
				k=i;
			}
		}	
	}
cout<<"\nmaxIndex"<<k<<"\nmaxnum:"<<max;
	
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
		t=a[i][k];
		a[i][k]=a[i][3];
		a[i][3]=t;
		}	
	}
	
}




