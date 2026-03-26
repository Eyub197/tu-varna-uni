table = [
    ["", "", ""],
    ["", "", ""],
    ["", "", ""],
]


def print_table(table):
    for i, row in enumerate(table):
        print(
            " | ".join(
                cell if cell else str(i * 3 + j + 1) for j, cell in enumerate(row)
            )
        )
        if i < 2:
            print("-" * 9)


def is_valid_move(table, position):
    """Check if the move is valid (1-9 and cell is empty)"""
    if position < 1 or position > 9:
        return False
    row = (position - 1) // 3
    col = (position - 1) % 3
    return table[row][col] == ""


def make_move(table, position, player):
    """Place the player's mark on the board"""
    row = (position - 1) // 3
    col = (position - 1) % 3
    table[row][col] = player


def check_winner(table, player):
    """Check if the player has won"""
    # Check rows
    for row in table:
        if all(cell == player for cell in row):
            return True

    # Check columns
    for col in range(3):
        if all(table[row][col] == player for row in range(3)):
            return True

    # Check diagonals
    if all(table[i][i] == player for i in range(3)):
        return True
    if all(table[i][2 - i] == player for i in range(3)):
        return True

    return False


def is_board_full(table):
    """Check if the board is full (tie game)"""
    for row in table:
        if "" in row:
            return False
    return True


def play_game():
    """Main game loop"""
    print("Welcome to Tic-Tac-Toe!")
    print("Positions are numbered 1-9:\n")
    print_table(table)

    current_player = "X"

    while True:
        # Get player input
        while True:
            try:
                position = int(
                    input(f"\nPlayer {current_player}, enter position (1-9): ")
                )
                if is_valid_move(table, position):
                    break
                else:
                    print("Invalid move! Position already taken or out of range.")
            except ValueError:
                print("Please enter a number between 1 and 9.")

        # Make the move
        make_move(table, position, current_player)
        print_table(table)

        # Check for winner
        if check_winner(table, current_player):
            print(f"\n🎉 Player {current_player} wins! Congratulations!")
            break

        # Check for tie
        if is_board_full(table):
            print("\n🤝 It's a tie!")
            break

        # Switch player
        current_player = "O" if current_player == "X" else "X"


# Run the game
if __name__ == "__main__":
    play_game()
