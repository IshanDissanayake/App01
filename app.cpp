#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    string Bin;
    int BinLen,c;
    int sum=0;
    cout<<"Enter a Binary number: ";
    cin>>Bin;
    BinLen=Bin.length();
    c=BinLen;
    for(int i=0;i<BinLen;i++){
        if(Bin[i]=='1'){
        sum=sum+pow(2,(c-1));
        }
        c--;
    }
    cout<<"Equivalent Decimal: "<<sum;
    return 0;
}