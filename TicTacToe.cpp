#include <iostream>
#include <vector>

enum class Player { X, O };

void printBoard(const std::vector<std::vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            std::cout << cell << ' ';
        }
        std::cout << '\n';
    }
}

bool isGameOver(const std::vector<std::vector<char>>& board) {
   
}

int main() {
    std::vector<std::vector<char>> board(3, std::vector<char>(3, '-'));

    Player currentPlayer = Player::X;

    while (!isGameOver(board)) {
        int row, col;
        std::cout << "Player " << (currentPlayer == Player::X ? 'X' : 'O') << ", enter row and column (0-2): ";
        std::cin >> row >> col;

        if (board[row][col] == '-') {
            board[row][col] = (currentPlayer == Player::X ? 'X' : 'O');
            currentPlayer = (currentPlayer == Player::X ? Player::O : Player::X);
        } else {
            std::cout << "Cell already taken. Try again.\n";
        }

        printBoard(board);
    }

    return 0;
}
