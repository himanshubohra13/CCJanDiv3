#include<iostream>
using namespace std;
int main(){
    int t;
    int max_cod,turn,x,x0,y0,temp;
    int slope=1;
    cin>>t;
    int arr[t][2];
    for(int i=0;i<t;i++){
        cin>>max_cod;
        cin>>turn;
        cin>>x0>>y0;
        if(x0>y0){
            y0=slope*(max_cod-x0)+y0;
            x0=max_cod;
        }
        else if(x0<y0){
            x0=(max_cod-y0)/slope+x0;
            y0=max_cod;
        }
        else{
            x0=y0=max_cod;
            arr[i][0]=x0;
            arr[i][1]=y0;
            continue;
        }
        x=(turn-1)%4;
        switch(x){
            case 0:
            arr[i][0]=x0;
            arr[i][1]=y0;
            break;
            case 1:
            arr[i][0]=y0;
            arr[i][1]=x0;
            break;
            case 2:
            arr[i][0]=max_cod-x0;
            arr[i][1]=max_cod-y0;
            break;
            case 3:
            arr[i][0]=max_cod-y0;
            arr[i][1]=max_cod-x0;
            break;


        }
        
    }
    for(int i=0;i<t;i++){
        cout<<arr[i][0]<<" "<<arr[i][1]<<endl;

    }
    return 0;

}