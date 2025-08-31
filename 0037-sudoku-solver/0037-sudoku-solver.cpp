class Solution {
public:
bool check(vector<vector<char>>& board,int row , int col, char num)
{
    for (int i =0 ; i< 9; i++){
        if(board[row][i]== num){
        return false;
    }
    }
    for(int i = 0 ; i< 9 ; i++){
        if(board[i][col] == num){
        return false;
        }
    }
    int ini = row - row%3;
    int inj = col -col % 3;
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            if(board[ini+i][inj+j]== num){
            return false;
            }
        }
    }
    return true;
} 

bool helper(vector<vector<char>>& board, int row , int col){
if(row == 9){
return true;
}
if(col == 9){
return helper(board,row+1,0);
}
if(board[row][col] != '.'){
return helper(board,row,col+1);
}
for(char num = '1' ; num<= '9' ;num++){
    if(check(board,row,col,num)){
        board[row][col] = num;
        if(helper(board,row,col + 1)){
                return true;
            }
        
        board[row][col]= '.' ;
    }
    }
    return false;
}



   void solveSudoku(vector<vector<char>>& board) {
    helper(board,0,0);
        
    

        
    }
};