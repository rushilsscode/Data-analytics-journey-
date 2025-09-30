
// ********************ractangle pattern***************
#include<iostream>
using namespace std;

int main(){

    int rows;
    int col;
    cout<<"enter the no of rows "<<endl;
    cin>>rows;
    cout<<"enter the no of coloums "<<endl;
    cin>>col;

    for (int j = 1; j<=col; ++j)
    {
        for (int i = 1; i <=rows; ++i)
    {
        cout<<"*";
    }
    cout<<endl;
    }
return 0;
}

// **********************holorectangle pattern******************
#include<iostream>
using namespace std;

int main(){
    

    for (int j = 1; j<=5; j++)
    {
        if (j==1 || j==5){
            for (int i = 1; i <=4; i++)
            {
                cout<<"*";
            }
            
        }
        else{
            for (int i = 1; i <=4; i++)
            {
               if(i==2 || i==3){
                cout<<" ";
               }
               else{
                cout<<"*";
               }
            }
            
        }
    cout<<endl;
    }
return 0;
}

// *******************inverted triangular pyramid **********************

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"number of n: ";
    cin>>n;  
    for (int j=n; j>=1; j--)
    {
      for (int i=1; i<=j; i++)
      {
        cout<<"*";
      }
    cout<<endl;
    }
return 0;
}

// ******************half pyramid after 180deg rotation ******************

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"number of n: ";
    cin>>n;  
    for (int j=1; j<=n; j++)
    {
      for (int i=1; i<=n; i++)
      {
        if(i<=n-j){
            cout<<"  ";
        }
        else{
            cout<<"* ";
        }
      } 
    cout<<endl;
    }
return 0;
}

// ******************half pyramid by using number*****************

#include<iostream>
using namespace std;

int main(){

    int row,cols;
    cout<<"number of row: ";
    cin>>row;  
    

    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j<=i; j++)
        {
           cout<<i; 
        }
        cout<<endl;
    }
return 0;
}

// ****************floyd's triangle******************
#include<iostream>
using namespace std;

int main(){

    int row,cols;
    cout<<"number of row: ";
    cin>>row;  

    int count=1;
    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j<=i; j++)
        {
           cout<<count<<" ";
           count++;
        }
        cout<<endl;
    }
return 0;
}

// *******************butterfly pattern**************

#include<iostream>
using namespace std;

int main(){

    int n,cols;
    cout<<"number of n: ";
    cin>>n;  

    
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
           cout<<"* ";
        }
        int space = 2*n-2*i;
        for (int i = 1; i <=space; i++)
        {
            cout<<"  ";
        }
        for (int j = 1; j<=i; j++)
        {
           cout<<"* ";
        }
        cout<<endl;
    }

    for (int i = n; i>=1; i--  )
    {
        for (int j = 1; j<=i; j++)
        {
           cout<<"* ";
        }
        int space = 2*n-2*i;
        for (int i = 1; i <=space; i++)
        {
            cout<<"  ";
        }
        for (int j = 1; j<=i; j++)
        {
           cout<<"* ";
        }
        cout<<endl;
    }
return 0;
}

// ********************inverted pattern*********************

#include<iostream>
using namespace std;

int main(){

    int n,cols;
    cout<<"number of n: ";
    cin>>n;  

    
    for (int i = n; i >=1; i--)
    {
        int count=1;
        for (int j = 1; j<=i; j++)
        {
           cout<<count;
           count++;
        }
        
        cout<<endl;
    }

 
return 0;
}

// ***************** 0-1 pattern **************************
#include<iostream>
using namespace std;

int main(){

    int n,cols;
    cout<<"number of n: ";
    cin>>n;  

    
    for (int i = 1; i<=n; i++)
    {
        int count=1;
        for (int j = 1; j<=i; j++)
        {
            int sum = i+j;
            if(sum%2==0){
                cout<<"1 ";
                }
            else{
                cout<<"0 ";
                }
           
        }
        
        cout<<endl;
    }

 
return 0;
}

// ****************rhombus pattern*****************

#include<iostream>
using namespace std;

int main(){

    int n,cols;
    cout<<"number of n: ";
    cin>>n;  

    
    for (int i = n; i>=1; i--)
    {
        
        for (int j = 1; j<i; j++)
        {
            cout<<"  ";
        }
        for (int k = 1; k <=5; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
return 0;
}

// ********************number pattern**********************

#include<iostream>
using namespace std;

int main(){

    int n,cols;
    cout<<"number of n: ";
    cin>>n;  

    
    for (int i = 1; i<=n; i++)
    {
        
        // count=1;
        for (int j = 1; j<=n-i; j++)
        {
            cout<<" ";
        }
        int count=1;
        for (int k = 1; k<=i; k++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
return 0;
}

// *******************palindromic pattern **********************

#include<iostream>
using namespace std;

int main(){

    int n,cols;
    cout<<"number of n: ";
    cin>>n;  


    for (int i = 1; i<=n; i++)
    {
        int num1=i;
        int num2=2;
    
        for (int j = 1; j<=n-i; j++)
        {
            cout<<"  ";
        }
        
        for (int k = 1; k<=i; k++)
        {
            cout<<num1<<" ";
            num1--;
        }
        for (int k = 1; k<i; k++)
        {
            cout<<num2<<" ";
            num2++;
        }
        
        cout<<endl;
    }
return 0;
}

//      *****************************star pattern******************

#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"number of n: ";
    cin>>n;  
    cout<<"number of m: ";
    cin>>m;

    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n-i; j++)
        {
            cout<<"  ";
        }
        for (int k = 1; k<=i; k++)
        {
            cout<<"* ";
        }
        for (int k = 1; k<i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i = m; i >=1; i--)
    {
       for (int j = 1; j <=m-i; j++)
       {
        cout<<"  ";
       }
       for (int j = 1; j<=i; j++)
       {
        cout<<"* ";
       }
       for (int j = 1; j <=i-1 ; j++)
       {
        cout<<"* ";
       }
       
       cout<<endl;
    }
return 0;
}

// **********************************zig-zag pattern******************************

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"value of n: ";
    cin>>n;
    cout<<"value of m: ";
    int m;
    cin>>m;
    int sum;

   
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
        int sum=i+j;
            if ( (sum % 4 ==0) || (i==2 && j==4) || (i==2 && j==8))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;   
    }
return 0;
}

// ********************* zig-zag*******************************

#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int count_1=4;

for (int i=1; i<=n; i++)
{
    for (int j=1; j<=3; j++)
    {
        if(i%j==0 && j==2){
            cout<<"*";
        }
        else if(count_1==4 && j==1){
            count_1=0;
            cout<<"*";
        }
        else if(count_1==2 && j==3){
            cout<<"*";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
    count_1++;
}

return 0;
}

