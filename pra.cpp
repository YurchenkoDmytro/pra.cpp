
#include <iostream>
using namespace std;
int main()
{
setlocale (LC_ALL, "RUS");
int i,j,N,M,a[20][20];
cout<<"N="; 
cin>>N;
cout<<"M="; 
cin>>M;
cout<<"Input matrix A \n";

for (i=0; i<N; i++)

for (j=0; j<M; j++)
cin>>a[i][j]; 
cout<<"matrix A \n";
for (i=0; i<N; i++)
{

for (j=0; j<M; j++)
cout<<a[i][j]<<"\t"; 
cout<<endl; 
}
system("pause");
return 0;
}