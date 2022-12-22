#include<iostream>
using namespace std;
class Election
 {
 int SV=0,count[5];
 public:
 Election()
 {
cout<<"\t\t ELECTION";
cout<<"\n press 1 to vote for candidate A";
cout<<"\n press 2 to vote for candidate B";
cout<<"\n press 3 to vote for candidate C";
cout<<"\n press 4 to vote for candidate D";
cout<<"\n press 5 to vote for candidate E" <<endl;
 }
void castvote()
 {
 int vote;
 cout<<"\n please cast your vote:";
 cin>>vote;
 if (vote>=1 && vote<=5)
 {
 cout <<"vote"<<vote;
 }
else
 SV++;
 }
void electionresults()
 {
cout<<"/n **** ELECTION RESULTS ****"<<endl;
for (int i=0;i<5;i++)
 {
cout<<"\n candidate" <<i+1<<"got"<<cout[i]<<"votes";
 }
cout<<"\n \n spoilt votes:"<<SV<<endl;
 };
int main(void){
    char choice;
Election ele;
do
 {
 ele.castvote();

 cout<<"Next Vote (Y/N):";
 cin >>choice;
 }
while(toupper(choice)=='Y');
    ele.electionresults();
    return 0;
}