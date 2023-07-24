#include<iostream>
using namespace std;

const int NY = 21;

double u[NY],u1[NY];
double niu = 1e-3;
double rho = 1e3; 
double k,dt;
double dy = 1/(double)20;

int main()
{
	
k = niu/rho;
dt = 1;
//dy = 1/10;	
//cout << dy << endl;	
	for(int i=1;i<NY-1;i++)
	{
		u[i] = 0;
		u[0] = 0;
		u[NY-1] = 1;
	
	}
	
	
	for(int i=0;i<NY;i++)
	{
		u1[i] = u[i];

	}

//ÏÔÊ½
for(int i=0;i<6e6;i++)
{

for(int i=1;i<NY-1;i++)
{
	
	u1[i] = ((k*dt)/(dy*dy))*(u[i+1]+u[i-1]-2*u[i])+u[i];
	
	
	}	

for(int i=1;i<NY-1;i++)
{
	
   u[i] = u1[i];
   	u[0] = 0;
	u[NY-1] = 1;
	
	
	}




}


	for(int j=0;j<NY;j++)
{
	cout << u1[j] <<endl;
	
	
 }

	//cout << dy <<endl;
	
	return 0;
}
