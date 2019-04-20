# Daniel Wheeler - Python - Scorching Ray 
# This program calculates and determines a Dungeon and Dragons spell called Scorching Ray.

# Gives the user a brief description of how the spell works.
print (" Scorching Ray: 1 action, 120ft, V-S, instantaneous, and 2nd level evocation.")
print (" Make a ranged spell attack for each ray. On hit, 2d6 fire dmg.")

# Ask the user what level of spell slot it should be used at. 
spell_level = int(input("\n Please enter spell slot level '2-9': "))
while True:
    # Will inform the user if they chose above 9.
    if spell_level > 9:
        spell_level = int(input("Maximum Spell Level is 9. Try Again: ")) 
    # Will inform the user if they chose under 2.
    elif spell_level < 2:
        spell_level = int(input("Mininum Spell Level is 2. Try Again: "))
    # Will end the loop if the user chooses a number between 2-9.
    else: break

# Ask the user for their Spell Attack Bonus.  (Not nesscary to check for real numbers here.)
atk_bns = int(input(" Please enter your Spell Attack Bonus: "))

# Calculating the ammount of rays. Since 2=3 3=4 4=5, it's as simple as adding +1 to the user number. 
ray_num = spell_level + 1

# Loop that determines randomness of the rays [hit dice] & [damage] until rays are depleted to 0.
while True:
    if ray_num > 0: 

        # Random Rolls for the dice. 
        from random import *
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
print ("\n \n \nThank you for using this program.")