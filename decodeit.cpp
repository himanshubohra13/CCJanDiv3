#include<iostream>
using namespace std;
int main(){
    int t,n,sum=0;
    char c;
    string st="abcdefghijklmnop",st2;
    cin>>t;
    string sr[t];
    for(int i=0;i<t;i++){
        cin>>n;
        cin>>st2;
        sum=0;
        for(int j=0;j<n;j++){
            if((j+1)%4==0){
                sum=sum<<1;
                sum=sum|(int)(st2[j]-48);
                sr[i]=sr[i]+st[sum];
                sum=0;
            }
            else{
                sum=sum<<1;
                sum=sum|(int)(st2[j]-48);
            }
        }
    }
    for(int i=0;i<t;i++){
        cout<<sr[i]<<endl;
    }

}