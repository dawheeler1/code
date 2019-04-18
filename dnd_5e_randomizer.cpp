// Daniel Wheeler
// Dungeon and Dragons Character Generator; Verison 1

#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <string> 
using namespace std;

//Main fucntion.
int main() {

	//Basic Variables:
	string char_name, class_prof, bg_prof, race_feat, cl_comp;
	double str_att = 0, dex_att = 0, con_att = 0, itt_att = 0, wis_att = 0, chr_att = 0, all_att = 0;
	double str_fin = 0, dex_fin = 0, con_fin = 0, itt_fin = 0, wis_fin = 0, chr_fin = 0;
	int hit_die;

	// Varibles for gen to name.
	double race_gen, class_gen, bg_gen;
	string race_comp, class_comp, bg_comp;
	srand(time(0));

	// Basic player info:
	cout << "What is your character name: ";
	cin >> char_name;

	// The Random numbers.
	race_gen = rand() % 9 + 1;
	class_gen = rand() % 11 + 1;
	bg_gen = rand() % 15 + 1;

	//Race Name, Attributes Modifers. 
	if (race_gen == 1) { race_comp = "Human"; all_att = 1; }
	else if (race_gen == 2) { race_comp = "Dragonborn"; str_att = 2; chr_att = 1; }
	else if (race_gen == 3) { race_comp = "Dwarf"; con_att = 2; }
	else if (race_gen == 4) { race_comp = "Elf"; dex_att = 2; }
	else if (race_gen == 5) { race_comp = "Tiefling"; chr_att = 2; itt_att = 1; }
	else if (race_gen == 6) { race_comp = "Gnome"; itt_att = 2; }
	else if (race_gen == 7) { race_comp = "Half-Elf"; chr_att = 2; }
	else if (race_gen == 8) { race_comp = "Halfling"; dex_att = 2; }
	else if (race_gen == 9) { race_comp = "Half-Orc"; str_att = 2; con_att = 1; };

	//Racial Feats:
	if (race_gen == 1) { race_feat = "Extra Language"; }
	else if (race_gen == 2) { race_feat = "Draconic Ancestry, Breath Weapon, and Damage Resistance."; }
	else if (race_gen == 3) { race_feat = "Darkvision, Dwarven Resilience, Dwarven Combat Training, and Stonecunning."; }
	else if (race_gen == 4) { race_feat = "Darkvision, Keen Senses, Fey Ancestry, and Trance."; }
	else if (race_gen == 5) { race_feat = "Darkvision, hellish Resistance, and Infernal Legacy."; }
	else if (race_gen == 6) { race_feat = "Dark Vision and Gnome Cunning."; }
	else if (race_gen == 7) { race_feat = "Two Ability Scores(+1), Darkvision, Fey Ancestry, and Skill Versatility."; }
	else if (race_gen == 8) { race_feat = "Lucky, Brave, Halfling Nimbleness"; }
	else if (race_gen == 9) { race_feat = "Dark Vision and Gnome Cunning"; };

	// Racial langauges
	string lang_array[16] = { "Common", "Dwarvish", "Elvish", "Giant", "Gnomish", "Goblin", "Halfling",
		"Orc", "Abyssal", "Celestial", "Draconic", "Deep Speech", "Infernal", "Sylvan", "Undercommon", "Primodial" };

	int dup_check1, dup_check2, dup_extra, extra_lang;

	if (race_gen == 1) { dup_check1 = 1, dup_check2 = 0; }
	else if (race_gen == 2) { extra_lang = 0; dup_check1 = 0; dup_check2 = 10; }
	else if (race_gen == 3) { extra_lang = 0; dup_check1 = 0; dup_check2 = 1; }
	else if (race_gen == 4) { extra_lang = 1; dup_check1 = 0; dup_check2 = 2; }
	else if (race_gen == 5) { extra_lang = 0; dup_check1 = 0; dup_check2 = 12; }
	else if (race_gen == 6) { extra_lang = 0; dup_check1 = 0; dup_check2 = 4; }
	else if (race_gen == 7) { extra_lang = 1; dup_check1 = 0; dup_check2 = 2; }
	else if (race_gen == 8) { extra_lang = 0; dup_check1 = 0; dup_check2 = 6; }
	else if (race_gen == 9) { extra_lang = 0; dup_check1 = 0; dup_check2 = 7; };

	string extra_race_lang;

	if (extra_lang == 1) {
		do {
			dup_extra = rand() % 16;
			extra_race_lang = lang_array[dup_extra];
		} while (dup_extra == dup_check1 && dup_extra == dup_check2);
	}
	else if (extra_lang == 0) { extra_race_lang = ""; };

	//Class.
	if (class_gen == 1) { class_comp = "Fighter"; hit_die = 10; cl_comp = "Strength & Dexterity"; }
	else if (class_gen == 2) { class_comp = "Wizard"; hit_die = 6; cl_comp = "Intelligence & Wisdom";}
	else if (class_gen == 3) { class_comp = "Rouge"; hit_die = 8; cl_comp = "Intelligence & Dexterity"; }
	else if (class_gen == 4) { class_comp = "Druid"; hit_die = 8; cl_comp = "Intelligence or Wisdom";}
	else if (class_gen == 5) { class_comp = "Barbarian"; hit_die = 12; cl_comp = "Strength & Consitution"; }
	else if (class_gen == 6) { class_comp = "Cleric"; hit_die = 8; cl_comp = "Wisdom & Charisma"; }
	else if (class_gen == 7) { class_comp = "Monk"; hit_die = 8; cl_comp = "Strength & Dexterity"; }
	else if (class_gen == 8) { class_comp = "Paladin"; hit_die = 10; cl_comp = "Strength & Charisma"; }
	else if (class_gen == 9) { class_comp = "Ranger"; hit_die = 10; cl_comp = "Strength & Dexterity"; }
	else if (class_gen == 10) { class_comp = "Sorcerer"; hit_die = 6; cl_comp = "Consitution & Charisma"; }
	else if (class_gen == 11) { class_comp = "Warlock"; hit_die = 8; cl_comp = "Wisdom & Charisma"; };


	//Background.
	if (bg_gen == 1) { bg_comp = "Noble"; bg_prof = "History, Persuasion"; }
	else if (bg_gen == 2) { bg_comp = "Soldier"; bg_prof = "Atheltics, Intimidation"; }
	else if (bg_gen == 3) { bg_comp = "Acolyte"; bg_prof = "Insight, Religion"; }
	else if (bg_gen == 4) { bg_comp = "Sailor"; bg_prof = "Atheltics, Perception"; }
	else if (bg_gen == 5) { bg_comp = "Charlatan"; bg_prof = "Deception, Sleight of Hand"; }
	else if (bg_gen == 6) { bg_comp = "Criminal/Spy"; bg_prof = "Deception, Stealth"; }
	else if (bg_gen == 7) { bg_comp = "Entertainer"; bg_prof = "Acrobatics, Performance"; }
	else if (bg_gen == 8) { bg_comp = "Folk Hero"; bg_prof = "Animal Handling, Survival"; }
	else if (bg_gen == 9) { bg_comp = "Gladiator"; bg_prof = "Acrobatics, Performance"; }
	else if (bg_gen == 10) { bg_comp = "Guild Artisan"; bg_prof = "Insight, Persuasion"; }
	else if (bg_gen == 11) { bg_comp = "Hermit"; bg_prof = "Medicine, Religion"; }
	else if (bg_gen == 12) { bg_comp = "Knight"; bg_prof = "Atheltics, Perception"; }
	else if (bg_gen == 13) { bg_comp = "Outlander"; bg_prof = "Atheltics, Survival"; }
	else if (bg_gen == 14) { bg_comp = "Sage"; bg_prof = "Arcana, History"; }
	else if (bg_gen == 15) { bg_comp = "Urchin"; bg_prof = "Sleight of Hand, Stealth"; };

	// Background Langauges
	string first_lang, second_lang;
	int rand_lang1, rand_lang2;

	if (bg_gen == 2 || bg_gen == 4 || bg_gen == 5 || bg_gen == 6 || bg_gen == 7 || bg_gen == 8 || bg_gen == 15) {
		first_lang = "";
		second_lang = "";
	}
	else if (bg_gen == bg_gen == 1 || bg_gen == 9 || bg_gen == 10 || bg_gen == 11 || bg_gen == 12 || bg_gen == 13) {
		
		do {
			rand_lang1 = rand() % 17;
			first_lang = lang_array[rand_lang1];
		} while (rand_lang1 == extra_lang && rand_lang1 == dup_check1 && rand_lang1 == dup_check2);

		second_lang = "";
	}
	else if (bg_gen == 3 || bg_gen == 14) {

		do {
			rand_lang1 = rand() % 17;
			first_lang = lang_array[rand_lang1];
		} while (rand_lang1 == extra_lang && rand_lang1 == dup_check1 && rand_lang1 == dup_check2);

		do {
			rand_lang2 = rand() % 17;
			second_lang = lang_array[rand_lang2];
		} while (rand_lang2 == extra_lang && rand_lang2 == dup_check1 && rand_lang2 == dup_check2 && rand_lang2 == rand_lang1);
	};


	//Attribute Rolls.
	str_fin = rand() % 16 + 5 + str_att + all_att;
	dex_fin = rand() % 16 + 5 + dex_att + all_att;
	con_fin = rand() % 16 + 5 + con_att + all_att;
	itt_fin = rand() % 16 + 5 + itt_att + all_att;
	wis_fin = rand() % 16 + 5 + wis_att + all_att;
	chr_fin = rand() % 16 + 5 + chr_att + all_att;

	//Feats.
	string feat_array_list[41] = { "Alert", "Athlete", "Actor", "Charger", "Crossbow Expert", 
		"Defensive Duelist", "Dual Wielder", "Dungeon Delver", "Durable",
		"Elemental Adept", "Grappler", "Great Weapon Master", "Healer", 
		"Heavily Armored", "Heavy Armor Master", "Inspiring Leader", "Keen Mind",
		"Light Armoted", "Linguist", "Lucky", "Mage Slayer", "Martial Adept", "Medium Armor Master", 
		"Mobile", "Moderately Armored", "Mountant Combatant", "Observant", "Polearm Master",
		"Resilient", "Ritual Caster", "Savage Attacker", "Sentinel", "Sharpshooter", "Shield Master",
		"Skilled", "Skulker", "Spell Sniper", "Tavern Brawler", "Tough", "War Caster", "Weapon Master" };
	int rand_index = rand() % 41;

	//Final output.
	cout << endl;
	cout << endl << " Race:          " << race_comp;
	cout << endl << " Racial Trait:  " << race_feat;
	cout << endl << " Random Feat:   " << feat_array_list[rand_index];
	cout << endl << endl << " Class:         " << class_comp;
	cout << endl << " Hit Dice:      d" << hit_die;
	cout << endl << " Saves:         " << cl_comp;
	cout << endl << endl << " Background:    " << bg_comp;
	cout << endl << " Proficiencies: " << bg_prof << endl;
	cout << endl << " All Languages: " << lang_array[dup_check1] << " " << lang_array[dup_check2] << " "
		<< extra_race_lang << " " << first_lang << " " << second_lang;
	cout << endl;
	cout << endl << " Strength: " << str_fin;
	cout << endl << " Dexterity: " << dex_fin;
	cout << endl << " Constitution: " << con_fin;
	cout << endl << " Intelligence: " << itt_fin;
	cout << endl << " Wisdom: " << wis_fin;
	cout << endl << " Charisma: " << chr_fin << endl << endl;
	cout << endl << "[Note: Racial Improvements are already added. ~ Daniel Wheeler]";
	cout << endl;

	//Tells the system to pause.
	system("pause");
}
