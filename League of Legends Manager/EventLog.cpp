//
//  EventLog.cpp
//  Test
//
//  Created by Jacob Godbehere on 10/1/16.
//  Copyright © 2016 Jacob Godbehere. All rights reserved.
//

#include "EventLog.hpp"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>


std::vector<std::string> sarray(1000);
std::vector<sf::Text> textarray(1000);
int y = 0;



void EventLog::AddEvent(std::string s1)
{
    if (y < 28)
    {
        sarray[y] = s1;
        y++;
    }
    else
    {
        for (int i = 0; i < 27; i++)
        {
            sarray[i] = sarray[i+1];
        }
        sarray[y-1] = s1;
    }

}

std::vector<std::string> EventLog::GetLog()
{
    return sarray;
}

int EventLog::GetLength()
{
    return y;
}
