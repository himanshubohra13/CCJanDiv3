#include<iostream>
using namespace std;
class obj{
    public:
    int set;
    int prob;
    int days;
    int *arr;
    int sum=0;
    void sett(){
        for(int i=0;i<set;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
    }
    void get(){
        cin>>set;
        cin>>prob;
        cin>>days;
        arr=new int[set];
    }
};
int main(){
    int n;
    cin>>n;
    int result[n];
    for(int i=0;i<n;i++){
        int res;
        obj a;
        a.get();
        a.sett();
        result[i]=a.sum/a.prob;
        if(result[i]>a.days){
            result[i]=a.days;
        }

    }
    for(int i=0;i<n;i++){
        cout<<result[i]<<endl;
    }


    return 0;
}