# Daniel Wheeler - Python - D&D dice generator.

# Random Module
import random

# Loop that allows the user to keep using the dice generator.
while True:

    # Ask the user for what level of dice they want to use.
    user_dice = int(input("\n Choice: "))

    # If the anser is 0 the loop will end.
    if user_dice == 0: break

    # Generates a random number between 1 and the number given by the user.
    # The random number will be displayed as a dice roll. 
    elif user_dice > 1:
        random_output = random.randint(1, user_dice) 
        print ("dice roll =", random_output)