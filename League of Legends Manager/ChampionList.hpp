//
//  ChampionList.hpp
//  Test
//
//  Created by Jacob Godbehere on 3/22/16.
//  Copyright © 2016 Jacob Godbehere. All rights reserved.
//

#ifndef ChampionList_hpp
#define ChampionList_hpp

#include <stdio.h>
#include "Player.hpp"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class ChampionList
{
    std::string name;
    std::string role;
    std::string offrole;
    std::string damagetype;
    int metarating;
    sf::Texture texture;
    sf::Texture * texturepointer;
public:
    static std::vector<ChampionList> GenerateChampionList();
    void Define(std::string n, std::string r, std::string o, std::string d);
    void SetMetaRating(int m);
    void DefineTexture();
    int GetMetaRating();
    std::string GetName();
    std::string GetRole();
    std::string GetDamageType();
    sf::Texture GetTexture();
    sf::Texture * GetTexturePointer();
	static std::vector<ChampionList> GenerateGameList(std::vector<Player> playerlist);
    bool operator==(const ChampionList& p) const
    {
        return name == p.name;
    }
};

#endif /* ChampionList_hpp */
