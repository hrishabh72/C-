#include<iostream>
#include<vector>
#include<string>
using namespace std;

class player
{
    public:
   //attributes
   string name{"player"};
   int health{100};
   int xp{3};

   //methods
   void talk(string text_to_say){cout<<name <<" says "<<text_to_say<<endl;}; 
   bool is_dead();
};

class account{
    public:
  //attributes
  string name {"account"};
  double balance{0};
  //methods
  bool deposit(double);
  bool withdraw(double);

};

int main()
{
 player frank;
 frank.name="frank";
 frank.health=100;
 frank.xp=10;
frank.talk("hii hrishabh");
 

 player *enemy = new player;
 (*enemy).name = "enemy";
 (*enemy).health=100;


 enemy->xp=15;
 enemy->talk("i will destroy you!");

    return 0;
}