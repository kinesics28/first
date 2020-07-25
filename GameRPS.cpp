#include<iostream>
#include<ctime>
using namespace std;

int main(){
    int uc,x=0,y=0,up=0,cp=0;

    srand(time(NULL));

    cout<<"1- rock"<<endl;
    cout<<"2- paper"<<endl;
    cout<<"3- scissors"<<endl;
while (x<3)
{
    cout<<"Choose your option"<<endl;
    cin>>uc;
    if (uc==1||uc==2||uc==3)
    {
        if (uc==1)
    {
       cout<<"You chose Rock!"<<endl;
    }
    else if (uc==2)
    {
        cout<<"You chose Paper!"<<endl;
    }
    else if (uc==3)
    {
        cout<<"you Chose Scissors!"<<endl;
    }

    }
    else{
          cout<<"Enter a valid number"<<endl;
        continue;
    }
    y= (rand()%3)+1;
    if (y==1)
    {
       cout<<"Copmputer chose Rock!"<<endl;
    }
    else if (y==2)
    {
        cout<<"Copmputer chose Paper!"<<endl;
    }
    else if (y==3)
    {
        cout<<"Copmputer Chose Scissors!"<<endl;
    }

    if (uc==1&&y==2)
    {
        cp=cp+1;
        cout<<"Your Points "<<up<<"  Computer Points  "<<cp<<endl;
    }
    else if (uc==1&&y==3)
    {
        up=up+1;
        cout<<"Your Points "<<up<<"  Computer Points  "<<cp<<endl;
    }
    else if (uc==2&&y==1)
    {
        up=up+1;
        cout<<"Your Points "<<up<<"  Computer Points  "<<cp<<endl;
    }
    else if (uc==2&&y==3)
    {
        cp=cp+1;
        cout<<"Your Points "<<up<<"  Computer Points  "<<cp<<endl;
    }
    else if (uc==3&&y==1)
    {
        cp=cp+1;
        cout<<"Your Points "<<up<<"  Computer Points  "<<cp<<endl;
    }
    else if (uc==3&&y==2)
    {
        up=up+1;
        cout<<"Your Points "<<up<<"  Computer Points  "<<cp<<endl;
    }
    else
    {
        cout<<"Its a tie!"<<endl;
        continue;
    }
    x=x+1;
}
   if (up>cp)
    {
        cout<<"Congratulations you won!"<<endl;
    }
    else if (cp>up)
    {
        cout<<"HA! you lost, Go back loser!!"<<endl;
    }





}
