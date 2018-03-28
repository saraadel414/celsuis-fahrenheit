#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number of coins" << endl;
    int coinnum;
    cin>>coinnum;
    int a=2,sum1=0;
    while(a==2){
        cout<<"Player1: your turn"<<endl;
        int x;
        cin>>x;
        if(x>0 && x<coinnum){
            sum1=sum1+x;
        }
        else{
            cout<<"Please enter the number of coins correctly "<<endl;
            int  y;
            cin>> y;
            sum1=sum1+y;
        }
        if(sum1==coinnum){
            cout<<"Player1 wins"<<endl;
            break;
        }
       if(sum1>coinnum)
        {
            cout<<"Please enter the number of coins correctly "<<endl;
            int  p;
            cin>> p;
            cout<<"Player1 wins"<<endl;
            break;

        }
        cout <<"Player 2: your turn"<<endl;
        int n;
        cin>> n;
        if(n>0 && n< (2*x+1)){
            sum1=sum1+n;
        }
        else{
            cout<<"Please enter the number of coins correctly "<<endl;
            int  p;
            cin>> p;
            sum1=sum1+p;
        }
        if(sum1==coinnum){
            cout<<"Player2 wins"<<endl;
            break;
    }
    if(sum1>coinnum)
        {
            cout<<"Please enter the number of coins correctly "<<endl;
            int  p;
            cin>> p;
            cout<<"Player2 wins"<<endl;
            break;



        }


}
return 0;
}

