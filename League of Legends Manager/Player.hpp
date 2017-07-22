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
    static std::vector<Player::Player> GeneratePlayers();
    static Player GetPlayer();
    
};

#endif /* Game_hpp */
