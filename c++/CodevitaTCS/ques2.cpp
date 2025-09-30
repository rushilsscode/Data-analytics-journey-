#include <iostream>
#include <math.h>
using namespace std;
int solve(int n, int p){
    double emi=0;
    for(int i=0; i<n; i++){
        int year;
        double interest;
        cin>>year>>interest;
        double sq = pow( 1+interest, year*12);
        emi+= p*(interest/1-(1/sq));
    }
    // cout<<emi;
    return emi;
}
int main(){
    int p, t;
    cin>>p>>t;
    int n1;
    cin>>n1;
    double EMI1 = solve(n1,p);
    int n2;
    cin>>n2;
    double EMI2 = solve(n2,p);
    if(EMI1<EMI2){
        cout<<"BANK A";
    }
    else{
        cout<<"BANK B"; 
    }
return 0;
}