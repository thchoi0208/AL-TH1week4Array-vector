/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
int main()
{
 vector<int>v[10001]
 int n,m;
 cin>>n>>m;
 for(int i=0;i<m;i++)
 {
  int f,t;
  cin>>f>>t;
  v[f].push_back(t)
 }
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<v[i].size();j++)
  {
   cout<<v[i][j];
  }
  if(v[i].size()==0)cout<<"0";
 }
  
}