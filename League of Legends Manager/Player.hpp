//
//  Player.hpp
//  Test
//
//  Created by Jacob Godbehere on 3/22/16.
//  Copyright © 2016 Jacob Godbehere. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Player
{
	std::string alias;
	std::string name;
	std::vector<std::string> bestchamp;
	std::string mainrole;
	std::string offrole;
	std::string teamname;
	int playerskill;
public:
	static std::vector<Player> GeneratePlayerList(bool random, int region, std::string team1, std::string team2);
	void Define(std::string m, std::string n, std::string r, std::string o, std::vector<std::string>, std::string t, int playerskill);

	std::string GetAlias();

	std::string GetName();

	std::string GetMainRole();

	std::string GetOffRole();

	std::vector<std::string> GetBestChamps();

	std::string GetTeamName();

	int GetPlayerSkill();

};

#endif /* Player_hpp */
