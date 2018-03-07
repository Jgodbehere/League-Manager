//
//  Game.hpp
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
public:
	static std::vector<Player> GeneratePlayerList(bool random, int region);
	void Define(std::string m, std::string n, std::string r, std::string o, std::vector<std::string>, std::string t);

};

#endif /* Game_hpp */
