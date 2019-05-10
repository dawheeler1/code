# Daniel Wheeler
# Text-Based RPG

def main():
    global user_cash
    global user_health
    print("\n*********************************************************************")
    print("Current Gold:", user_cash)
    print("Current HP: ", user_health)
    main_choice = int(input("\n1: Store\n2: Practice \n3: Monostary \n9: End\nChoice: "))

    if (main_choice == 1): the_store()
    elif (main_choice == 2): practice_fights()
    elif (main_choice == 3): monastery()
    elif (main_choice == 9): user_health = (user_health - 999999)
    else: print("Error: You did this >:[ ")


def the_store():
    print("\n Menu: \n 1: Bronze Sword = 5gp \n 2: Silver Sword = 10gp \n 3: Gold Sword = 15gp \n 4: Leave")
    store_choice = int(input(" Choice: "))
    global user_cash
    global user_weapon

    if (store_choice == 1): 
        user_cash = user_cash - 5
        user_weapon = 30

    elif (store_choice == 2):
        user_cash = user_cash - 10
        user_weapon = 50

    elif (store_choice == 3):
        user_cash = user_cash - 15
        user_weapon = 100

    else: print("You leave with nothing, what a waste of a trip!")


def practice_fights():
    print("\n Welcome to the Rat Pits!")
    practice_input = int(input(" 1: Easy Fight [Win 1-3 Gold] \n 2: Medium Fight [Win 3-5 Gold]\n Choice: "))

    if (practice_input == 1):
        enemy_hp = random.randint(5,12)
        npc_atk_max = random.randint(3,6)
        npc_reward = random.randint(1,3)
        print("Its time to fight a Rat!")
        fight(enemy_hp, npc_atk_max, npc_reward)

    elif (practice_input == 2):
        enemy_hp = random.randint(12,17)
        npc_atk_max = random.randint(5,7)
        npc_reward = random.randint(3,5)
        print("\nYour Fight with a Rat has began!")
        fight(enemy_hp, npc_atk_max, npc_reward)

    else: print("You have left the pits!")


def fight(enemy_hp, npc_atk_max, npc_reward):
    while True:
        global user_health
        global user_cash
        who_atk = random.randint(1,2)
        npc_atk = random.randint(0,npc_atk_max)
        user_atk = random.randint(0,user_weapon)
        if (user_health > 0 and enemy_hp > 0):
            if (who_atk == 1):
                enemy_hp = enemy_hp - user_atk
                print(" user attacked npc for", user_atk, "- Health:",enemy_hp )
            else:
                user_health = user_health - npc_atk
                print(" npc attacked user for", npc_atk, "- Health:", user_health)
        elif (enemy_hp < 1):
            print("Congrats you won", npc_reward, "gold!")
            user_cash = user_cash + npc_reward
            break
        else:
            print("You died!")
            break

def monastery():
    global user_cash
    global user_health
    print("\n Welcome to this holy ground.")
    print(" 1: 5 gold to be healed for 10 health.\n 2: 35 gold to be fully healed.\n 3: Leave")
    mono_choice = int(input(" Choice: "))

    if (mono_choice == 1): 
        user_cash = user_cash - 5
        user_health = user_health + 10
    elif (mono_choice == 2):
        user_cash = user_cash - 35
        user_health = 100

#***************************************************
# Base Stats
user_cash = 0
user_weapon = 10
user_health = 100
import random

while True:
    if (user_cash > -1 and user_health > 0):
        main()
    else: 
        print("\nBrankrupt or Dead - Goodbye!")
        break
#****************************************************