# Daniel Wheeler - Python - Scorching Ray 
# This program calculates and determines a Dungeon and Dragons spell called Scorching Ray.

from random import *

def atk_phase():
    spell_level = int(input("\n Please enter spell slot level '2-9': "))

    while True:
        # Invaild numbers given.
        if spell_level > 9:
            spell_level = int(input("Maximum Spell Level is 9. Try Again: ")) 
        elif spell_level < 2:
            spell_level = int(input("Mininum Spell Level is 2. Try Again: "))
        else: break

    # Extra ray is added.
    ray_num = spell_level + 1

    # Ask the user for their Spell Attack Bonus.
    atk_bns = int(input(" Please enter your Spell Attack Bonus: "))

    while True:
        if ray_num > 0: 

            # Random Rolls for the dice. 
            d6_1 = randint(1, 6)
            d6_2 = randint(1, 6)
            d20 = randint(1,20)

            # Calculates the final hit by rolling a d20 dice and adding the attack bonus.
            final_hit = d20 + atk_bns

            # Calculates the final damage by rolling 2 d6 dice and adding them together. 
            dmg_final = d6_1 + d6_2

            # Displays the final results in a way the end-user can understand. 
            print ("\n Your chance to hit:", final_hit)
            print ("  Damage roll 2d6:", d6_1, "+", d6_2, "=", dmg_final)
            ray_num = ray_num - 1

            # Will end the ray simulations when the ammount of rays hit 0. 
        else: break

# Main function that allows the user to call the attack phase function as many times as they want.
def main():
    while True:
        ray_answer = input("\nType 1 to run attack phase, type anything else to end: ")
        if(ray_answer == "1"): atk_phase()
        else: break

# Runs the main function, once finised it will tell the program is over. 
main()
print("Program has ended. \n")
