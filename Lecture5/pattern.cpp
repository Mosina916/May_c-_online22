#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;//5
if(n==1){

        cout<<"*"<<endl;
  

}
else{
  
    int rowno=1;
    int countst=1;
    while(countst<=2*n-1){
        cout<<"*";
        countst=countst+1;
    }
    cout<<endl;
    rowno=rowno+1;//2


    while(rowno<=n){
         // stars
    int stc=1;
    while(stc<=n+1-rowno){
        cout<<"*";
        stc=stc+1;
    }
    // spaces

    int sp=1;
    while(sp<=2*rowno-3){
        cout<<" ";
        sp=sp+1;
    }

    // stars
    stc=1;
    while(stc<=n+1-rowno){
        cout<<"*";
        stc=stc+1;
    }
    cout<<endl;
    rowno=rowno+1;


    }


    // lower part
    rowno=1;
    while(rowno<=n-2){
        // stars
    int sta=1;
    while(sta<=rowno+1){
        cout<<"*";
        sta=sta+1;
    }

    // spaces
    int spp=1;
    while(spp<=2*n-3-(2*rowno)){
        cout<<" ";
        spp=spp+1;
    }

    // stars
    sta=1;   
    while(sta<=rowno+1){
        cout<<"*";
        sta=sta+1;
    }
    cout<<endl;
    rowno=rowno+1;

    }


    // last row 
     countst=1;
    while(countst<=2*n-1){
        cout<<"*";
        countst=countst+1;
    }
    cout<<endl;
    rowno=rowno+1;//2
    





}
    



   








    return 0;

}





	
	
