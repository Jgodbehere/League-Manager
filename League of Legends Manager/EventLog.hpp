//
//  EventLog.hpp
//  Test
//
//  Created by Jacob Godbehere on 3/22/16.
//  Copyright © 2016 Jacob Godbehere. All rights reserved.
//
#pragma once
#ifndef EventLog_hpp
#define EventLog_hpp

#include <stdio.h>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class EventLog
{
public:
    static void AddEvent(std::string);
    static std::vector<std::string> GetLog();
    static int GetLength();
    
};

#endif /* EventLog_hpp */
