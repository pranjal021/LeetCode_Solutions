class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        string moveList = "012345678";
        string result = " ";
        for(int i=0;i<moves.size();i++){
            int index = moves[i][0] * 3 + moves[i][1];
            if(i&1){
                moveList[index] = 'O';
            }else{
                moveList[index] = 'X';
            }
        }
        if(
            (moveList[0] == 'X' && moveList[1] == 'X' && moveList[2] == 'X') ||
            (moveList[3] == 'X' && moveList[4] == 'X' && moveList[5] == 'X') ||
            (moveList[6] == 'X' && moveList[7] == 'X' && moveList[8] == 'X') ||
            (moveList[0] == 'X' && moveList[3] == 'X' && moveList[6] == 'X') ||
            (moveList[1] == 'X' && moveList[4] == 'X' && moveList[7] == 'X') ||
            (moveList[2] == 'X' && moveList[5] == 'X' && moveList[8] == 'X') ||
            (moveList[0] == 'X' && moveList[4] == 'X' && moveList[8] == 'X') ||
            (moveList[2] == 'X' && moveList[4] == 'X' && moveList[6] == 'X')
        ){
            return "A";
        }
        if(
            (moveList[0] == 'O' && moveList[1] == 'O' && moveList[2] == 'O') ||
            (moveList[3] == 'O' && moveList[4] == 'O' && moveList[5] == 'O') ||
            (moveList[6] == 'O' && moveList[7] == 'O' && moveList[8] == 'O') ||
            (moveList[0] == 'O' && moveList[3] == 'O' && moveList[6] == 'O') ||
            (moveList[1] == 'O' && moveList[4] == 'O' && moveList[7] == 'O') ||
            (moveList[2] == 'O' && moveList[5] == 'O' && moveList[8] == 'O') ||
            (moveList[0] == 'O' && moveList[4] == 'O' && moveList[8] == 'O') ||
            (moveList[2] == 'O' && moveList[4] == 'O' && moveList[6] == 'O')
        ){
            return "B";
        }
        return moves.size() == 9 ? "Draw" : "Pending";
    }
};
