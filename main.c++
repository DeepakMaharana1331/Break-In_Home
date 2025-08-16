#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


void rooms(){
    cout<<" __________________________________ "<<endl;
    cout<<"|                |                 |"<<endl;
    cout<<"|                |                 |"<<endl;
    cout<<"|                |                 |"<<endl;
    cout<<"|        1       |        2        |"<<endl;
    cout<<"|                |                 |"<<endl;
    cout<<"|                |                 |"<<endl;
    cout<<"|________________|_________________|"<<endl;
    cout<<"|                |                 |"<<endl;
    cout<<"|                |                 |"<<endl;
    cout<<"|                |                 |"<<endl;
    cout<<"|        3       |        4        |"<<endl;
    cout<<"|                |                 |"<<endl;
    cout<<"|                |                 |"<<endl;
    cout<<"|________________|_________________| "<<endl;
 }

void logic(){
    srand(time(0));
    int surviverchoice =0;
   
    cout<<"The Killer is Approching "<<endl;
    int killerchoice = (rand()%4)+1;
    cout<<"Hide in a room"<<endl;
    cin>>surviverchoice;

    cout<<"attack has been made"<<endl;
    if(surviverchoice!=killerchoice){
        cout<<"Phew You Survived !"<<endl;
    }
    else{
        cout<<"You Were Found and Killed "<<endl;
        }

}

int main(){
    rooms();
    logic();
    
return 0;
}
    
 