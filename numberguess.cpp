#include<iostream>
#include<ctime>
using namespace std;

int main(){
    int num, user_num, count;
    char x;
    count = 0;

    cout<<"\t\t\tNUMBER GUESSING GAME"<<endl;
    cout<<"Press P to play."<<endl;
    cout<<"Press 0 to exit."<<endl;
    cin>>x;
    if(x == 'P'){
        do{
            srand(time(NULL));
            num = (rand()%99)+1;
            cout<<"Guess the number from 1-100!"<<endl;
            while(user_num!=num){
                cout<<endl<<"Enter your guess: ";
                cin>>user_num;
                if(user_num>num)
                cout<<"Too High! Try Again..."<<endl;
                else if(user_num<num)
                cout<<"Too Low! Try Again..."<<endl;
                count++;
            }
    cout<<"Correct! You guessed the number in "<<count<<" tries"<<endl<<endl;
    count = 0;
    cout<<"Press R to restart."<<endl;
    cout<<"Press 0 to exit"<<endl;
    cin>>x;
    }while(x == 'R');
    }
cout<<"Thanks for playing!";
return 0;
}
