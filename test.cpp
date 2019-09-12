#include<iostream>
#include<math.h>    //使用pow()計算次方
using namespace std;

int main(){
    char a[10];
    cout<<"輸入7進位數字:";
    cin>>a;
    int stop;   //紀錄結束點
    /*
     *
     *下面for紀錄結束點，並且得到最大次方，方便下個for由左至右、猶大至小計算
     *
     */
    for(int i=0;i<10;i++){
        if(a[i]=='\0'){ //判斷字串停止
            stop=i;//紀錄結束點，為了找到最大為幾次方
            break;//跳出迴圈
        }
    }
    int root=stop-1; //次方數
    int ans=0;  //宣告答案
    for(int i=0;i<stop;i++){    //開始計算
        int temp=pow(7,root);   //該位數之平方數
        //cout<<temp<<endl;
        root--; //紀錄下個位置的平方數
        ans+=temp*((int)a[i]-48);
    }
    cout<<"十進位："<<ans<<endl;

    return 0;
}
