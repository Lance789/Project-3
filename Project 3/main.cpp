// Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Known limitations:
//-Throws an exception when one of the Pokemon's HP reaches 0 while the timer is still going
//	-Therefore, do not know if the function to swap out Pokemon after one faints works
//-Does not say if there is a winner
//-Time taken during and in between moves are not representative of the actual times they are supposed to take
//-Some moves are super effective when they should not be
//-The enemy can still use your Pokemon despite them not owning your Pokemon
#include <iostream>
#include <ctime>
#include "Pokemon.h"
#include "Trainer.h"
#include "FastMoves.h"
#include "ChargeMoves.h"

int main()
{
    srand(time(0));

	/*
	These ID numbers correspond to each Pokemon type
	0 = Bug
	1 = Dark
	2 = Dragon
	3 = Electric
	4 = Fairy
	5 = Fight
	6 = Fire
	7 = Flying
	8 = Ghost
	9 = Grass
	10 = Ground
	11 = Ice
	12 = Normal
	13 = Poison
	14 = Psychic
	15 = Rock
	16 = Steel
	17 = Water
	*/

    Pokemon pokeTEST;	//Test Pokemon's default constructor
    Pokemon lucario("Lucario", rand() % 40, 236, 144, 172, rand() % 15, rand() % 15, rand() % 15, 5, 16);	//Test initialization of Pokemon with 2 types
    Pokemon zekrom("Zekrom", rand() % 40, 275, 211, 205, rand() % 15, rand() % 15, rand() % 15, 2, 3);
	Pokemon metagross("Metagross", rand() % 40, 257, 228, 190, rand() % 15, rand() % 15, rand() % 15, 14, 16);
	Pokemon scizor("Scizor", rand() % 40, 236, 181, 172, rand() % 15, rand() % 15, rand() % 15, 0, 16);
	Pokemon jigglypuff("Jigglypuff", rand() % 40, 80, 41, 251, rand() % 15, rand() % 15, rand() % 15, 4, 12);
	Pokemon deoxys("Deoxys", rand() % 40, 345, 115, 137, rand() % 15, rand() % 15, rand() % 15, 14);	//Test initialization of Pokemon with 1 type

    FastMoves fmoveTEST;	//Test FastMoves' default constructor
    FastMoves counter("Counter", 5, 8, 1, 7, 1.00);	//Test initialization of a fast move
	FastMoves dragon_breath("Dragon Breath", 2, 4, 0, 3, 0.50);
	FastMoves bullet_punch("Bullet Punch", 16, 6, 1, 7, 1.00);
	FastMoves fury_cutter("Fury Cutter", 0, 2, 0, 4, 0.50);
	FastMoves feint_attack("Feint Attack", 1, 6, 1, 6, 1.00);
	FastMoves charge_beam("Charge Beam", 3, 5, 2, 11, 1.50);

    ChargeMoves chmoveTEST;	//Test ChargeMoves' default constructor
    ChargeMoves shadow_ball("Shadow Ball", 8, 100, -55);	//Test initialization of a charge move
    ChargeMoves aura_sphere("Aura Sphere", 5, 100, -55);
	ChargeMoves outrage("Outrage", 2, 110, -60);
	ChargeMoves wild_charge("Wild Charge", 3, 90, -50);
	ChargeMoves meteor_mash("Meteor Mash", 16, 100, -50);
	ChargeMoves earthquake("Earthquake", 10, 120, -65);
	ChargeMoves x_scissor("X-Scissor", 0, 45, -35);
	ChargeMoves iron_head("Iron Head", 16, 70, -50);
	ChargeMoves gyro_ball("Gyro Ball", 16, 80, -60);
	ChargeMoves	dazzling_gleam("Dazzling Gleam", 4, 110, -70);
	ChargeMoves psycho_boost("Psycho Boost", 14, 70, -35);
	ChargeMoves thunder_bolt("Thunder Bolt", 3, 90, -55);

	Trainer trnrTEST;	//Test Trainer's default constructor
	Trainer ash("Ash", lucario, zekrom, metagross); //Test initialization of a Trainer
	Trainer misty("Misty", scizor, jigglypuff, deoxys);

    lucario.addFMoves(counter);	//Adds a fast move to a Pokemon
    lucario.addChMoves(shadow_ball, aura_sphere);	//Adds charge moves to a Pokemon
	zekrom.addFMoves(dragon_breath);
	zekrom.addChMoves(outrage, wild_charge);
	metagross.addFMoves(bullet_punch);
	metagross.addChMoves(meteor_mash, earthquake);
	scizor.addFMoves(fury_cutter);
	scizor.addChMoves(x_scissor, iron_head);
	jigglypuff.addFMoves(feint_attack);
	jigglypuff.addChMoves(gyro_ball, dazzling_gleam);
	deoxys.addFMoves(charge_beam);
	deoxys.addChMoves(psycho_boost, thunder_bolt);










	// START OF AARON'S (DoubleAx99x) CODE CHANGES

	std::cout << "Welcome to the CSC 275 class Pokemon Go Tests!" << std::endl;

	// Creating a few new objects for separate tests
	Pokemon salamence("Salamence", rand() % 40, 277, 168, 216, rand() % 15, rand() % 15, rand() % 15, 2, 7);
	Pokemon pikachu("Pikachu", rand() % 40, 112, 96, 111, rand() % 15, rand() % 15, rand() % 15, 3);
	Pokemon charizard("Charizard", rand() % 40, 223, 173, 186, rand() % 15, rand() % 15, rand() % 15, 6, 7);
	Pokemon bulbasaur("Bulbasaur", rand() % 40, 118, 111, 128, rand() % 15, rand() % 15, rand() % 15, 9, 13);
	Pokemon squirtle("Squirtle", rand() % 40, 94, 121, 127, rand() % 15, rand() % 15, rand() % 15, 17);
	Pokemon charmander("Charmander", rand() % 40, 116, 93, 118, rand() % 15, rand() % 15, rand() % 15, 6);

	FastMoves dragon_tail("Dragon Tail", 2, 9, 2, 10, 1.50);
	FastMoves thunder_shock("Thunder Shock", 3, 3, 1, 9, 1.00);
	FastMoves wing_attack("Wing Attack", 7, 5, 1, 7, 1.00);
	FastMoves vine_whip("Vine Whip", 9, 5, 1, 8, 1.00);
	FastMoves tackle("Tackle", 12, 3, 0, 2, 0.50);
	FastMoves ember("Ember", 6, 6, 1, 6, 1.00);

	salamence.addFMoves(dragon_tail);
	pikachu.addFMoves(thunder_shock);
	charizard.addFMoves(wing_attack);
	bulbasaur.addFMoves(vine_whip);
	squirtle.addFMoves(tackle);
	charmander.addFMoves(ember);

	ChargeMoves draco_meteor("Draco Meteor", 2, 150, -65);
	ChargeMoves discharge("Discharge", 3, 65, -45);
	ChargeMoves overheat("Overheat", 6, 130, -55);
	ChargeMoves	seed_bomb("Seed Bomb", 9, 55, -40);
	ChargeMoves aqua_tail("Aqua Tail", 17, 50, -35);
	ChargeMoves flamethrower("Flamethrower", 6, 90, -55);

	salamence.addChMoves(draco_meteor);
	pikachu.addChMoves(discharge);
	charizard.addChMoves(overheat);
	bulbasaur.addChMoves(seed_bomb);
	squirtle.addChMoves(aqua_tail);
	charmander.addChMoves(flamethrower);

	Trainer banana("Banana", salamence, pikachu, charizard);
	Trainer apple("Apple", bulbasaur, squirtle, charmander);

	// Trainer Shield Test
	std::cout << '\n' << "Trainer Shield Test:" << std::endl;
	std::cout << banana.getName() << " has " << banana.getShieldLeft() << " shield(s) remaining." << std::endl;
	banana.reduceShieldAmount();
	std::cout << banana.getName() << " has " << banana.getShieldLeft() << " shield(s) remaining." << std::endl;

	// Fast Move Take Damage Test
	std::cout << '\n' << "Fast Move Take Damage Test:" << std::endl;
	std::cout << bulbasaur.getName() << " has " << bulbasaur.getHP() << " HP." << std::endl;
	std::cout << charizard.getName() << " will now attack " << bulbasaur.getName();
	std::cout << " with " << wing_attack.getName() << std::endl;
	apple.takeDamage(wing_attack, bulbasaur, charizard);

	// Building Energy Test
	std::cout << '\n' << "Building Energy Test:" << std::endl;
	std::cout << salamence.getName() << " has " << salamence.getCurrentEnergy() << " energy." << std::endl;
	std::cout << salamence.getName() << " used " << dragon_tail.getName() << "!" << std::endl;
	salamence.raiseCurrentEnergy(dragon_tail);
	std::cout << salamence.getName() << " has " << salamence.getCurrentEnergy() << " energy." << std::endl;

	// Using Energy Test
	std::cout << '\n' << "Using Energy Test:" << std::endl;
	for (int i = 0; i < 20; ++i) {
		squirtle.raiseCurrentEnergy(tackle);
	}
	std::cout << squirtle.getName() << " has " << squirtle.getCurrentEnergy() << " energy." << std::endl;
	std::cout << squirtle.getName() << " used " << aqua_tail.getName() << "!" << std::endl;
	squirtle.decreaseCurrentEnergy(aqua_tail);
	std::cout << squirtle.getName() << " has " << squirtle.getCurrentEnergy() << " energy." << std::endl;

	// Battle simulation between Metagross and Scizor
	std::cout << '\n' << "Battle Test:" << std::endl;
	std::cout << "Metagross and Scizor are now battling!" << std::endl;

	// END OF AARON'S CODE CHANGES










	/*
	Ash and Misty battle using Metagross and Scizor
	respectively and builds up energy.
	Once enough energy is built, Misty uses X-Scissor
	against Ash's Metagross
	*/
	ash.battle(fury_cutter, metagross, scizor);
	misty.battle(bullet_punch, scizor, metagross);
	ash.battle(fury_cutter, metagross, scizor);
	misty.battle(bullet_punch, scizor, metagross);
	ash.battle(fury_cutter, metagross, scizor);
	misty.battle(bullet_punch, scizor, metagross);
	ash.battle(fury_cutter, metagross, scizor);
	misty.battle(bullet_punch, scizor, metagross);
	ash.battle(fury_cutter, metagross, scizor);
	misty.battle(bullet_punch, scizor, metagross);
	ash.battle(fury_cutter, metagross, scizor);
	misty.battle(bullet_punch, scizor, metagross);
	ash.battle(fury_cutter, metagross, scizor);
	misty.battle(bullet_punch, scizor, metagross);
	ash.battle(fury_cutter, metagross, scizor);
	misty.battle(bullet_punch, scizor, metagross);
	ash.battle(fury_cutter, metagross, scizor);
	misty.battle(bullet_punch, scizor, metagross);
	ash.battle(fury_cutter, metagross, scizor);
	misty.battle(bullet_punch, scizor, metagross);
	ash.battle(fury_cutter, metagross, scizor);
	misty.battle(bullet_punch, scizor, metagross);

	misty.takeDamage(x_scissor, ash, metagross, scizor);
	ash.takeDamage(earthquake, misty, scizor, metagross);

    return 0;
}

