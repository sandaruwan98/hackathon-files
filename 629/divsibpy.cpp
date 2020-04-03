#include<iostream>
#include <sstream>
using namespace std;
int houseArray[999];

int dltHouse(){
	int i=0;
	while(	houseArray[i]!=0){
		i++;
	}
	int len=i+1;
	int arr[len];
	if(len==0){
		return 0;
	} if(len==1){
		return	houseArray[0];
	}if(len==2){
		if(	houseArray[0]>	houseArray[1]){
			return 	houseArray[0];
		}else{
			return 	houseArray[1];
		}
	}
	arr[0]=	houseArray[0];
	if(	houseArray[1]>	houseArray[0]){
			arr[1]=	houseArray[1];
	}else{
			arr[1]=houseArray[0];
	}
	for(i=2;i<len;i++){
		int d=	houseArray[i]+arr[i-2];
		if(d>arr[i-1]){
			arr[i]=d;
		}else{
			arr[i]=arr[i-1];
		}
	}
	return arr[len-1];
	
	
}

void addArray(){
	  string line;
      //cout<<"input"<<endl;
    getline(cin,line);
	string arr[999];
    int i = 0;
    stringstream ssin(line);
    while ( i < 999){
        ssin >> arr[i];
        ++i;
    }
    
    for(i=0;i<999;i++){
	stringstream Num(arr[i]); 
	Num >>houseArray[i] ; 
	}
   
}

int main(){
	addArray();
int Sum= dltHouse();
cout<<Sum<<endl;
	
}