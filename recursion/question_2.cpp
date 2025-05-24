#include <iostream>
using namespace std;

int nth_fib_term(int n)
{
    if (n == 2 || n == 1)
        return 1;
    else
        return nth_fib_term(n - 1) + nth_fib_term(n - 2);
    /*
        we can also write code as (it is also valid)
        int left_tree=nth_fib_term(n-1);
        int right_tree=nth_fib_term(n-2);
        return left_tree+right_tree;

    */
    // first whole funtion is first complete the task then other function is start working.
}

int power_logarithmic(int x, int y)
{
    if (y == 0)
        return 1;
    if (y == 1)
        return x;
    if (y % 2 == 0)
        return power_logarithmic(x, y / 2) * power_logarithmic(x, y / 2);
    if (y % 2 != 0)
        return x * power_logarithmic(x, (y - 1) / 2) * power_logarithmic(x, (y - 1) / 2);
}

int Stair_Path(int n)
{
    /*
        n:-no. of steps
        either 1 step at a time or 2 steps at a time.and their combination
        we have to return no.of ways
    */
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return Stair_Path(n - 1) + Stair_Path(n - 2);
}
int Maze_Path(int row, int col, int x, int y)
{
    /*
        in this we have given row and colum,
        source:-(x,y)  destination:-(row,col)
        how many way we have to return
        we have only either go right or downward

    */
    if (x > row || y > col)
        return 0;
    if (x == row)
        return 1;
    if (y == col)
        return 1;
    return Maze_Path(row, col, x + 1, y) + Maze_Path(row, col, x, y + 1);
}

int Maze_path_2(int x,int y){
    if(x==0)return 1;
    if(y==0)return 1;
    return Maze_path_2(x-1,y)+Maze_path_2(x,y-1);
}

void Print_maze_path(int row, int col, int x, int y, string s)
{
    if (x > row || y > col)
        return;
    if (x == row && y == col)
    {
        cout << s << " ";
        return;
    }
    Print_maze_path(row, col, x + 1, y, s + "D");
    Print_maze_path(row, col, x, y + 1, s + "R");
}

void pre_in_post(int n){
    if(n==0)return;
    cout<<"pre: "<<n<<endl;
    pre_in_post(n-1);
    cout<<"in: "<<n<<endl;
    pre_in_post(n-1);
    cout<<"post: "<<n<<endl;

}
void zigzag(int n){
    /*
        1 -> 111
        2 -> 211121112
        3 -> 321112111232111211123
    */
   if(n==0)return;
   cout<<n;
   zigzag(n-1);
   cout<<n;
   zigzag(n-1);
   cout<<n;
}

int main()
{
    cout << nth_fib_term(8) << endl;
    cout << power_logarithmic(2, 6) << endl;
    cout << Stair_Path(5) << endl;
    cout << Maze_Path(5, 4, 0, 0) << endl;
    Print_maze_path(2, 2, 0, 0, "");
    cout<<endl<<Maze_path_2(5,4)<<endl;
    pre_in_post(3);
    zigzag(3);
    return 0;
}
