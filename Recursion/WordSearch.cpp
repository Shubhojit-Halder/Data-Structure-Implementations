#include<bits/stdc++.h>
using namespace std;
bool search(int row, int col, int n, int m, int index, string word, vector<vector<char>> &board)
{
    if (index == word.size()) // size equals means found the string
        return true;

    if (row >= n || col >= m || row < 0 || col < 0 || board[row][col] != word[index] || board[row][col] == '!')
        return false;

    char ch = board[row][col];
    board[row][col] = '!'; // keeping track of visited element coz cant use one element more then once

    bool top = search(row - 1, col, n, m, index + 1, word, board);
    bool left = search(row, col - 1, n, m, index + 1, word, board);
    bool bottom = search(row + 1, col, n, m, index + 1, word, board);
    bool right = search(row, col + 1, n, m, index + 1, word, board);

    board[row][col] = ch; // changing elem to prev state
    return top || left || bottom || right;
}