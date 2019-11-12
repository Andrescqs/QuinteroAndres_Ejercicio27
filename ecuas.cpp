#include <fstream>
#include <iostream>
using namespace std;

float Eulerex(float dt, float omg);

float Eulerin(float dt, float omg);

void escribe(float dt, float omg);

int main(){
	
	escribe(1, 0.1);
	escribe(0.1, 0.1);
	escribe(10, 0.1);
    
    return 0;
}

float Eulerex(float dt, float omg){
    
	float x = 4/omg;
	float y = 0;
	int i = 0;
	
	while(i < x){
		
		
			if(i==0){
				y = 1;
				
			}
			else{
			
			y = i - dt * omg * i;
			}
			
			cout << i << y << endl;
		
		
		i +=1;
		
	}
	
	
    
	return y;
    
}

float Eulerin(float dt, float omg){
	
	
	float x = 4/omg;
	float y = 0;
	int i = 0;
	
	while(i < x){
		
		
		if(i==0){
				y = 1;
				
			}
			else{
			
			y = i - dt * omg * i;
			}
			
			cout << i << y << endl;
		
		
		i +=1;
		
	}
	
	
    
	return y;
	
	
}


void escribe(float dt, float omg){
  ofstream outfile;


  outfile.open("datos.dat");

 
  for (int i=0; i < 10; i++){
    outfile << Eulerex(dt, omg) << endl;
  }
  outfile.close(); 
}

