#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int random;
    int guess;
    int tries=0;
    srand(time(0)); 
    random = rand() % 100 + 1; 
    cout<<"Hello In Gussess Game :\n" ;
  do{
    //cout<<"Hello In Gussess Game \n" ;
    cout<<"Gussess the number :\n";
    cin>>guess;
    tries++;
    if(guess > random)
    
        cout<<"Is Too High \n";
    
    else if(guess < random)
    
        cout<<"Is Too Low \n";
    
    
    else
    
     cout << "\nCorrect! You got it in " << tries << " guesses!\n";
    
  }while (guess != random);

    return 0;
}