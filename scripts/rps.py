# Probability of you winning a game of rock, paper, scissors

import random
import numpy as np 
import matplotlib.pyplot as plt

def play(user):
    computer = random.choice(['r', 'p', 's'])

    if user == computer:
        return 'It\'s a tie'
    elif is_win(user, computer):
        return 'You won!'
    return 'You lost!'

def is_win(player, opponent):
    # return true if player wins
    # r > s, s > p, p > r
    if (player == 'r' and opponent == 's') or (player == 's' and opponent == 'p') or (player == 'p' and opponent == 'r'):
        return True

user = input('Enter your choice (r, p, s): ')

results = []
# get 1000 random choices
for i in range(1000):
    results.append(play(user))

# get the distribution curve based on the results
distribution = np.random.choice(results, 1000)

# plot the distribution curve
plt.hist(distribution, bins=100, color='g')
plt.xlabel('Results')
plt.ylabel('Frequency (out of 1000)')
plt.show()

# what percent of games did you win?
wins = results.count('You won!')
win_percent = (wins / 1000) * 100
print('Wins: ', win_percent, '%')