import random

print(" List of Combatants:")
print(" 1) Fighter\n 2) Wizard\n 3) Rouge\n ")

input1 = int(input("Combatant #1: "))
input2 = int(input("Combatant #2: "))
print("\n                                       Battle Log:")

fighter_moves = ["swings axe on", "punches", "sword-stabs"]
wizard_moves = ["firebolt on", "waterball on", "eyepoke on"]
rouge_moves = ["backstabs on", "poison darts on", "dagger-stabs"]

if input1 == 1: 
    comb1 = "Fighter"
    move1 = fighter_moves
elif input1 == 2: 
    comb1 = "Wizard"
    move1 = wizard_moves
elif input1 == 3: 
    comb1 = "Rouge" 
    move1 = rouge_moves

if input2 == 1: 
    comb2 = "Fighter" 
    move2 = fighter_moves
elif input2 == 2: 
    comb2 = "Wizard"
    move2 = wizard_moves
elif input2 == 3: 
    comb2 = "Rouge" 
    move2 = rouge_moves

health1 = 30
health2 = 30


while True:
    attack_phase = random.randint(0,2)
    who_attacks = random.randint(0,1)
    attack_damage = random.randint(0,10)

    if (health1 < 1 or health2 < 1): break
    elif who_attacks == 0:
        health2 = health2 - attack_damage
        print('[',comb1,'HP:',health1,comb2,'HP:',health2,']',
            comb1, move1[attack_phase], comb2, "for", attack_damage, 'damage.')

    elif who_attacks == 1:
        health1 = health1 - attack_damage
        print('[',comb1,'HP:',health1,comb2,'HP:',health2,']',
            comb2, move2[attack_phase], comb1, "for", attack_damage, 'damage.')