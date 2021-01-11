#include<iostream>
#include<algorithm>
using namespace std;
class obj{
    public:
    int size;
    int *arr1;
    int sum=0;
    void set(){
        arr1=new int[size];
        for(int i=0;i<size;i++){
            cin>>arr1[i];
            sum=sum+arr1[i];
        }
        sort(arr1,arr1+size);
    }
    
};
int main(){
    int n,j;
    cin>>n;
    int result[n];
    for(int i=0;i<n;i++){
        obj a,b;
        cin>>a.size;
        a.set();
        cin>>b.size;
        b.set();
        j=0;
        while(a.sum<b.sum){
            a.sum=a.sum-a.arr1[j]+b.arr1[b.size-1-j];
            b.sum=b.sum-b.arr1[b.size-1-j]+a.arr1[j];
            j++;
        }
        result[i]=j;
    }
    for(int i=0;i<n;i++){
        cout<<result[i]<<endl;

    }
    return 0;
}