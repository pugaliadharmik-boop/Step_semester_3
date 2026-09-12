import random

moves = ["Rock", "Paper", "Scissors"]

player_wins = 0
computer_wins = 0
draws = 0

rounds = int(input("Enter number of rounds: "))

print("\nRound | Player Move | Computer Move | Result")
print("-----------------------------------------------")

for i in range(1, rounds + 1):

    player = random.choice(moves)
    computer = random.choice(moves)

    if player == computer:
        result = "Draw"
        draws += 1

    elif (player == "Rock" and computer == "Scissors") or \
         (player == "Paper" and computer == "Rock") or \
         (player == "Scissors" and computer == "Paper"):
        result = "Player Wins"
        player_wins += 1

    else:
        result = "Computer Wins"
        computer_wins += 1

    print(i, "    |", player, "     |", computer, "      |", result)


print("\nSummary")
print("Player Wins:", player_wins)
print("Computer Wins:", computer_wins)
print("Draws:", draws)

win_percentage = (player_wins / rounds) * 100

print("Player Win Percentage:", win_percentage, "%")