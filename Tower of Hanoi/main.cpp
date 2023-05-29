#include <iostream>

using namespace std;
int moves  = 0;
int move_num = 1;
void TowerOfHanoi(int num , char from , char to , char remain){

    if(num == 1){
            cout << "move number : "  << move_num++ << "  " ;
        cout << "remove " << num << " from " << from << " to " << to << endl;
        moves++;
        return ;
    }else{
        TowerOfHanoi( num-1 , from, remain , to);
        moves++;
       cout << "move number : "  << move_num++ << "  " ;
        cout << "remove " << num << " from " << from << " to " << to << endl;
        TowerOfHanoi( num-1 , remain,to,from);

    }
}

int main()
{
    TowerOfHanoi(5,'a','c','b');

    return 0;
}
