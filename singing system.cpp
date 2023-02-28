#include <iostream>
#include <fstream>
#include <string>

using namespace std;
bool islogedin(){
string uname,pword;
string un,pw;

cout<<"Enter your name: ";
cin>>uname;
cout<<"Enter your password: ";
cin>>pword;

ifstream read(uname + ".txt");
getline(read,un);
getline(read,pw);

if(uname == un && pword == pw){
    return true;

}
else{
    return false;
}


}


int main(){

int choice;

cout<<endl;
cout<<"Main Menu: "<<endl;
cout<<"-----------------------"<<endl;
cout<<"1.Register"<<endl;
cout<<"2.Login" <<endl;
cout<< endl;
cout<<"Your choice: "<<endl;
cin>>choice;

if(choice == 1)
{

   string uname,pword;

   cout<<"Registration: "<<endl;
   cout<<endl;
   cout<<"Select a username: ";
   cin>>uname;
   cout<<"Select password:";
   cin>>pword;

   ofstream file;
   file.open(uname + ".txt");
   file<<uname<<endl<<pword;
   file.close();
   cout<< "WELCOME "<<uname<< "!"<<endl;


}
else if(choice == 2)
{
   bool status = islogedin();

   if(!status){
    system("clear");
    cout<<endl;
    cout<< "Invalid login"<<endl;
    main();
    return 0;


   }
else{
    cout<< "Successfully logged in!"<<endl;
    cout<< endl;

    int choicetwo;

    cout<<"Welcome back!"<< endl;
    cout<<endl;
    cout<<"DASHBOARD"<<endl;
    cout<<"No new massage" <<endl;
    cout<< endl;
    cout<<"1.Sing Out"<<endl;
    cout<<"2.Back to main menu"<<endl;
    cout<<"Your choice: "<<endl;
    cin>>choicetwo;

    if(choicetwo ==1)
    {
       system("exit");

    }
    else if(choicetwo == 2)
    {

        main();
    }
    return 1;
}

}


}

