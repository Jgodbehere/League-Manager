//
//  PlayerList.cpp
//  League of Legends Manager
//
//  Created by Jacob Godbehere on 10/2/16.
//  Copyright © 2016 Jacob Godbehere. All rights reserved.
//

#include "Player.hpp"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

std::vector<Player> Player::GeneratePlayerList(bool random, int l)
{
	std::vector<Player> list(134);

	if (random = false)
	{
		switch (l)
		{
			case 0: //NALCS
			{
				Player Impact;
				std::vector<std::string> champs(3);
				champs[0] = "Trundle";
				champs[1] = "Maokai";
				champs[2] = "Shen";
				Impact.Define("Impact", "Jung Eon-yeong", "Top", "Support", champs, "Cloud 9");
				Player Contractz;
				champs[0] = "Elise";
				champs[1] = "Olaf";
				champs[2] = "Gragas";
				Contractz.Define("Contractz", "Juan Garcia", "Jng", "", champs, "Cloud 9");
				Player Jensen;
				champs[0] = "Orianna";
				champs[1] = "Syndra";
				champs[2] = "Cassiopeia";
				Jensen.Define("Jensen", "Nicolaj Jensen", "Mid", "", champs, "Cloud 9");
				Player Sneaky;
				champs[0] = "Xayah";
				champs[1] = "Varus";
				champs[2] = "Jhin";
				Sneaky.Define("Sneaky", "Zachary Scuderi", "ADC", "", champs, "Cloud 9");
				Player Smoothie;
				champs[0] = "Thresh";
				champs[1] = "Rakan";
				champs[2] = "Braum";
				Smoothie.Define("Smoothie", "Andy Ta", "Sup", "", champs, "Cloud 9");
				Player Ray;
				champs[0] = "Jarvan IV";
				champs[1] = "Galio";
				champs[2] = "Kennen";
				Ray.Define("Ray", "Jeon Ji-won", "", "Top", champs, "Cloud 9");
				Player Darshan;
				champs[0] = "Gragas";
				champs[1] = "Fiora";
				champs[2] = "Renekton";
				Darshan.Define("Darshan", "Darshan Upadhyaha", "Top", "", champs, "Counter Logic Gaming");
				Player Dardoch;
				champs[0] = "Gragas";
				champs[1] = "Lee Sin";
				champs[2] = "Rek'Sai";
				Dardoch.Define("Dardoch", "Joshua Hartnett", "Jng", "", champs, "Counter Logic Gaming");
				Player Huhi;
				champs[0] = "Ahri";
				champs[1] = "Orianna";
				champs[2] = "Taliyah";
				Huhi.Define("HuHi", "Choi Jae-hyun", "Mid", "", champs, "Counter Logic Gaming");
				Player Stixxay;
				champs[0] = "Caitlyn";
				champs[1] = "Varus";
				champs[2] = "Ashe";
				Stixxay.Define("Stixxay", "Trevor Hayes", "ADC", "", champs, "Counter Logic Gaming");
				Player Aphromoo;
				champs[0] = "Blitzcrank";
				champs[1] = "Morgana";
				champs[2] = "Bard";
				Aphromoo.Define("Aphromoo", "Zaqueri Black", "Sup", "", champs, "Counter Logic Gaming");
				Player Looper;
				champs[0] = "Rumble";
				champs[1] = "Kennen";
				champs[2] = "Renekton";
				Looper.Define("Looper", "Jang Hyeong-seok", "Top", "", champs, "Echo Fox");
				Player Akaadian;
				champs[0] = "Lee Sin";
				champs[1] = "Elise";
				champs[2] = "Rek'Sai";
				Akaadian.Define("Akaadian", "Matthew Higginbotham", "Jng", "", champs, "Echo Fox");
				Player Froggen;
				champs[0] = "Taliyah";
				champs[1] = "Corki";
				champs[2] = "LeBlanc";
				Froggen.Define("Froggen", "Henrik Hansen", "Mid", "", champs, "Echo Fox");
				Player Keith;
				champs[0] = "Varus";
				champs[1] = "Xayah";
				champs[2] = "Caitlyn";
				Keith.Define("Keith", "Yuri Jew", "ADC", "", champs, "Echo Fox");
				Player Gate;
				champs[0] = "Rakan";
				champs[1] = "Tahm Kench";
				champs[2] = "Karma";
				Gate.Define("Gate", "Austin Yu", "Sup", "", champs, "Echo Fox");
				Player Balls;
				champs[0] = "Rumble";
				champs[1] = "Kennen";
				champs[2] = "Jarvan IV";
				Balls.Define("Balls", "An Le", "Top", "", champs, "FlyQuest");
				Player Moon;
				champs[0] = "Elise";
				champs[1] = "Rengar";
				champs[2] = "Gragas";
				Moon.Define("Moon", "Galen Holgate", "Jng", "", champs, "FlyQuest");
				Player Hai;
				champs[0] = "Orianna";
				champs[1] = "Corki";
				champs[2] = "Lucian";
				Hai.Define("Hai", "Hai Du Lam", "Mid", "Jng", champs, "FlyQuest");
				Player Wildturtle;
				champs[0] = "Jhin";
				champs[1] = "Kalista";
				champs[2] = "Ashe";
				Wildturtle.Define("WildTurtle", "Jason Tran", "ADC", "", champs, "FlyQuest");
				Player Lemonnation;
				champs[0] = "Zyra";
				champs[1] = "Tahm Kench";
				champs[2] = "Morgana";
				Lemonnation.Define("LemonNation", "Daerek Hart", "Sup", "", champs, "Flyquest");


			}
			case 1: //EULCS
			{

			}
			case 2: //LPL
			{

			}
			case 3: //LCK
			{

			}

		}
		
	}
	else
	{

	}

	return list;
}

void Player::Define(std::string m, std::string n, std::string r, std::string o, std::vector<std::string>, std::string t)
{
}

