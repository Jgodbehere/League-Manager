#include "Game.hpp"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "ResourcePath.hpp"
#include "EventLog.hpp"
#include "ChampionList.hpp"
#include "Player.hpp"


void Game::Run()
{
    // Create the main window
    int windowwidth = 1920;
    int windowheight = 1080;
    sf::RenderWindow window(sf::VideoMode(windowwidth, windowheight), "League Manager Alpha");
    
    
    //Generate Champion List
    std::string role;
    sf::Time t1;
    sf::Clock c1;
    srand(time(NULL));
    int r;
    int iconiterator = 0;
    
    std::vector<ChampionList> champlist(133);
    std::vector<ChampionList> banlist(20);
    std::vector<sf::RectangleShape> EventIcon(1000);
    std::vector<sf::Time> EventTime(1000);
    champlist = ChampionList::GenerateChampionList();
    
    //Create ChampionList Objects
    ChampionList bluetop;
    ChampionList bluejng;
    ChampionList bluemid;
    ChampionList blueadc;
    ChampionList bluesup;
    
    ChampionList redtop;
    ChampionList redjng;
    ChampionList redmid;
    ChampionList redadc;
    ChampionList redsup;
    
    ChampionList banchamp;

    
    
    // Define Textures
    //Background
    sf::Texture background;
    sf::Texture * backgroundpointer = &background;
    if (!background.loadFromFile(resourcePath() + "background.png")) {

    }
    //Map
    sf::Texture map;
    int imagewidth = windowwidth/3;
    int imageheight = windowwidth/3;
    sf::Texture * mappointer = &map;
    if (!map.loadFromFile(resourcePath() + "map.png")) {

    }
    //Tile Set
    sf::Texture tileset;
    if (!tileset.loadFromFile(resourcePath() + "Tile.png")) {

    }
    sf::Texture * texturepointer = &tileset;
    //Scoreboard
    sf::Texture blueside;
    if (!blueside.loadFromFile(resourcePath() + "blueside.png")) {

    }
    sf::Texture * bluesidepointer = &blueside;
    sf::Texture redside;
    if (!redside.loadFromFile(resourcePath() + "blueside.png")) {

    }
    sf::Texture * redsidepointer = &redside;
    sf::Texture scoreboard;
    if (!scoreboard.loadFromFile(resourcePath() + "scoreboard.png")) {

    }
    sf::Texture * scoreboardpointer = &scoreboard;
    
    
    
    // Create Rectangles
    //Background
    sf::RectangleShape backgroundrect(sf::Vector2f(windowwidth, windowheight));
    backgroundrect.setTexture(backgroundpointer, false);
    //Map
    sf::RectangleShape maprect(sf::Vector2f(imagewidth,imageheight));
    maprect.move((windowwidth-imagewidth)/2, (windowheight-imageheight)/2);
    maprect.setTexture(mappointer, false);
    maprect.setOutlineColor(sf::Color::Black);
    maprect.setOutlineThickness(24);
    //Tile Set
    sf::RectangleShape tile1(sf::Vector2f(windowwidth/4, windowheight));
    sf::RectangleShape tile2(sf::Vector2f(windowwidth/4, windowheight));
    tile1.setTexture(texturepointer, false);
    tile2.setTexture(texturepointer, false);
    tile2.move(windowwidth, 0);
    tile2.setScale(-1.f,1.f);
    //Scoreboard
    sf::RectangleShape bluesiderect(sf::Vector2f(windowwidth/4.7, windowheight/4));
    bluesiderect.setTexture(bluesidepointer, false);
    bluesiderect.move(windowwidth/64, (windowheight/6));
    bluesiderect.setOutlineColor(sf::Color::Black);
    bluesiderect.setOutlineThickness(6);
    sf::RectangleShape redsiderect(sf::Vector2f(windowwidth/4.7, windowheight/4));
    redsiderect.setTexture(redsidepointer, false);
    redsiderect.move(windowwidth/64, ((windowheight/6)*3));
    redsiderect.setOutlineColor(sf::Color::Black);
    redsiderect.setOutlineThickness(6);
    sf::RectangleShape scoreboardrect(sf::Vector2f(windowwidth/4.7, windowheight/14));
    scoreboardrect.setTexture(scoreboardpointer);
    scoreboardrect.move(windowwidth/64, ((windowheight/6)*2.55));
    scoreboardrect.setOutlineColor(sf::Color::Black);
    scoreboardrect.setOutlineThickness(6);
    //Champion Icons
    
    
    //Set the Meta

    for (int i = 0; i < champlist.size(); i++)
    {
        r = (rand() %100);
        champlist[i].ChampionList::SetMetaRating(r);
    }


    
    //First Ban
    for (int i = 0; i < champlist.size(); i++)
    {
        if (champlist[i].ChampionList::GetMetaRating() >= banchamp.ChampionList::GetMetaRating())
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                banchamp = champlist[i];
            }
        }
    }
    banlist.push_back(banchamp);
    EventLog::AddEvent("Blue side banned " + banchamp.GetName());
    iconiterator++;
    
    //Second Ban
    banchamp = champlist[0];
    for (int i = 0; i < champlist.size(); i++)
    {
        if (champlist[i].ChampionList::GetMetaRating() >= banchamp.ChampionList::GetMetaRating())
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                banchamp = champlist[i];
            }
        }
    }
    banlist.push_back(banchamp);
    EventLog::AddEvent("Red side banned " + banchamp.GetName());
    iconiterator++;
    
    //Third Ban
    banchamp = champlist[0];
    for (int i = 0; i < champlist.size(); i++)
    {
        if (champlist[i].ChampionList::GetMetaRating() >= banchamp.ChampionList::GetMetaRating())
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                banchamp = champlist[i];
            }
        }
    }
    banlist.push_back(banchamp);
    EventLog::AddEvent("Blue side banned " + banchamp.GetName());
     iconiterator++;
    
    //Fourth Ban
    banchamp = champlist[0];
    for (int i = 0; i < champlist.size(); i++)
    {
        if (champlist[i].ChampionList::GetMetaRating() >= banchamp.ChampionList::GetMetaRating())
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                banchamp = champlist[i];
            }
        }
    }
    banlist.push_back(banchamp);
    EventLog::AddEvent("Red side banned " + banchamp.GetName());
    iconiterator++;
    
    //Fifth Ban
    banchamp = champlist[0];
    for (int i = 0; i < champlist.size(); i++)
    {
        if (champlist[i].ChampionList::GetMetaRating() >= banchamp.ChampionList::GetMetaRating())
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                banchamp = champlist[i];
            }
        }
    }
    banlist.push_back(banchamp);
    EventLog::AddEvent("Blue side banned " + banchamp.GetName());
    iconiterator++;
    
    //Sixth Ban
    banchamp = champlist[0];
    for (int i = 0; i < champlist.size(); i++)
    {
        if (champlist[i].ChampionList::GetMetaRating() >= banchamp.ChampionList::GetMetaRating())
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                banchamp = champlist[i];
            }
        }
    }
    banlist.push_back(banchamp);
    EventLog::AddEvent("Red side banned " + banchamp.GetName());
    iconiterator++;
    
    //Blue Side
    //Top
    for (int i = 0; i < champlist.size(); i++)
    {
        role = "Top";
        if (champlist[i].ChampionList::GetMetaRating() >= bluetop.ChampionList::GetMetaRating() && champlist[i].GetRole().find(role) != std::string::npos)
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                bluetop = champlist[i];
            }
        }
    }
    banlist.push_back(bluetop);
    EventLog::AddEvent("Blue side picked " + bluetop.GetName());
    bluetop.DefineTexture();
    sf::RectangleShape bluetopicon(sf::Vector2f(windowwidth/48, windowwidth/48));
    bluetopicon.move(windowwidth/55, windowheight/5.2);
    bluetopicon.setTexture(bluetop.GetTexturePointer(), false);
    EventIcon[iconiterator] = bluetopicon;
    iconiterator++;
    
    //Red Side
    
    //Top
    for (int i = 0; i < champlist.size(); i++)
    {
        role = "Top";
        if (champlist[i].ChampionList::GetMetaRating() > redtop.ChampionList::GetMetaRating() && champlist[i].GetRole().find(role) != std::string::npos)
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                redtop = champlist[i];
            }
        }
    }
    banlist.push_back(redtop);
    EventLog::AddEvent("Red side picked " + redtop.GetName());
    redtop.DefineTexture();
    sf::RectangleShape redtopicon(sf::Vector2f(windowwidth/48, windowwidth/48));
    redtopicon.move(windowwidth/55.5, windowheight/1.9025);
    redtopicon.setTexture(redtop.GetTexturePointer(), false);
    EventIcon[iconiterator] = redtopicon;
    iconiterator++;
    
    //Jng
    for (int i = 0; i < champlist.size(); i++)
    {
        role = "Jng";
        if (champlist[i].ChampionList::GetMetaRating() > redjng.ChampionList::GetMetaRating() && champlist[i].GetRole().find(role) != std::string::npos)
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                redjng = champlist[i];
            }
        }
    }
    banlist.push_back(redjng);
    EventLog::AddEvent("Red side picked " + redjng.GetName());
    redjng.DefineTexture();
    sf::RectangleShape redjngicon(sf::Vector2f(windowwidth/48, windowwidth/48));
    redjngicon.move(windowwidth/55.5, ((windowheight/1.9025) + (windowheight/22)));
    redjngicon.setTexture(redjng.GetTexturePointer(), false);
    EventIcon[iconiterator] = redjngicon;
    iconiterator++;
    
    //Blue Side

    //Jng
    for (int i = 0; i < champlist.size(); i++)
    {
        role = "Jng";
        if (champlist[i].ChampionList::GetMetaRating() > bluejng.ChampionList::GetMetaRating() && champlist[i].GetRole().find(role) != std::string::npos)
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                bluejng = champlist[i];
            }
        }
    }
    banlist.push_back(bluejng);
    EventLog::AddEvent("Blue side picked " + bluejng.GetName());
    bluejng.DefineTexture();
    sf::RectangleShape bluejngicon(sf::Vector2f(windowwidth/48, windowwidth/48));
    bluejngicon.move(windowwidth/55, ((windowheight/5.2) + (windowheight/22)));
    bluejngicon.setTexture(bluejng.GetTexturePointer(), false);
    EventIcon[iconiterator] = bluejngicon;
    iconiterator++;

    //Mid
    for (int i = 0; i < champlist.size(); i++)
    {
        role = "Mid";
        if (champlist[i].ChampionList::GetMetaRating() > bluemid.ChampionList::GetMetaRating() && champlist[i].GetRole().find(role) != std::string::npos)
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                bluemid = champlist[i];
            }
        }
    }
    banlist.push_back(bluemid);
    EventLog::AddEvent("Blue side picked " + bluemid.GetName());
    bluemid.DefineTexture();
    sf::RectangleShape bluemidicon(sf::Vector2f(windowwidth/48, windowwidth/48));
    bluemidicon.move(windowwidth/55, ((windowheight/5.2) + ((windowheight/22)*2)));
    bluemidicon.setTexture(bluemid.GetTexturePointer(), false);
    EventIcon[iconiterator] = bluemidicon;
    iconiterator++;
    
    //Red Side
    
    //Mid
    for (int i = 0; i < champlist.size(); i++)
    {
        role = "Mid";
        if (champlist[i].ChampionList::GetMetaRating() > redmid.ChampionList::GetMetaRating() && champlist[i].GetRole().find(role) != std::string::npos)
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                redmid = champlist[i];
            }
        }
    }
    banlist.push_back(redmid);
    EventLog::AddEvent("Red side picked " + redmid.GetName());
    redmid.DefineTexture();
    sf::RectangleShape redmidicon(sf::Vector2f(windowwidth/48, windowwidth/48));
    redmidicon.move(windowwidth/55.5, ((windowheight/1.9025) + ((windowheight/22)*2)));
    redmidicon.setTexture(redmid.GetTexturePointer(), false);
    EventIcon[iconiterator] = redmidicon;
    iconiterator++;
    
    //Seventh Ban
    banchamp = champlist[0];
    for (int i = 0; i < champlist.size(); i++)
    {
        if (champlist[i].ChampionList::GetMetaRating() >= banchamp.ChampionList::GetMetaRating())
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                banchamp = champlist[i];
            }
        }
    }
    banlist.push_back(banchamp);
    EventLog::AddEvent("Red side banned " + banchamp.GetName());
    iconiterator++;
    
    //Eighth Ban
    banchamp = champlist[0];
    for (int i = 0; i < champlist.size(); i++)
    {
        if (champlist[i].ChampionList::GetMetaRating() >= banchamp.ChampionList::GetMetaRating())
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                banchamp = champlist[i];
            }
        }
    }
    banlist.push_back(banchamp);
    EventLog::AddEvent("Blue side banned " + banchamp.GetName());
    iconiterator++;
    
    //Nineth Ban
    banchamp = champlist[0];
    for (int i = 0; i < champlist.size(); i++)
    {
        if (champlist[i].ChampionList::GetMetaRating() >= banchamp.ChampionList::GetMetaRating())
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                banchamp = champlist[i];
            }
        }
    }
    banlist.push_back(banchamp);
    EventLog::AddEvent("Red side banned " + banchamp.GetName());
    iconiterator++;
    
    //Tenth Ban
    banchamp = champlist[0];
    for (int i = 0; i < champlist.size(); i++)
    {
        if (champlist[i].ChampionList::GetMetaRating() >= banchamp.ChampionList::GetMetaRating())
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                banchamp = champlist[i];
            }
        }
    }
    banlist.push_back(banchamp);
    EventLog::AddEvent("Blue side banned " + banchamp.GetName());
    iconiterator++;
    
    
    //Red Side
    
    //ADC
    for (int i = 0; i < champlist.size(); i++)
    {
        role = "ADC";
        if (champlist[i].ChampionList::GetMetaRating() > redadc.ChampionList::GetMetaRating() && champlist[i].GetRole().find(role) != std::string::npos)
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                redadc = champlist[i];
            }
        }
    }
    banlist.push_back(redadc);
    EventLog::AddEvent("Red side picked " + redadc.GetName());
    redadc.DefineTexture();
    sf::RectangleShape redadcicon(sf::Vector2f(windowwidth/48, windowwidth/48));
    redadcicon.move(windowwidth/55.5, ((windowheight/1.9025) + ((windowheight/22)*3)));
    redadcicon.setTexture(redadc.GetTexturePointer(), false);
    EventIcon[iconiterator] = redadcicon;
    iconiterator++;
    
    //Blue Side

    //ADC
    for (int i = 0; i < champlist.size(); i++)
    {
        role = "ADC";
        if (champlist[i].ChampionList::GetMetaRating() > blueadc.ChampionList::GetMetaRating() && champlist[i].GetRole().find(role) != std::string::npos)
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                blueadc = champlist[i];
            }
        }
    }
    banlist.push_back(blueadc);
    EventLog::AddEvent("Blue side picked " + blueadc.GetName());
    blueadc.DefineTexture();
    sf::RectangleShape blueadcicon(sf::Vector2f(windowwidth/48, windowwidth/48));
    blueadcicon.move(windowwidth/55, ((windowheight/5.2) + ((windowheight/22)*3)));
    blueadcicon.setTexture(blueadc.GetTexturePointer(), false);
    EventIcon[iconiterator] = blueadcicon;
    iconiterator++;
    //Sup
    for (int i = 0; i < champlist.size(); i++)
    {
        role = "Sup";
        if (champlist[i].ChampionList::GetMetaRating() > bluesup.ChampionList::GetMetaRating() && champlist[i].GetRole().find(role) != std::string::npos)
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                bluesup = champlist[i];
            }
        }
    }
    banlist.push_back(bluesup);
    EventLog::AddEvent("Blue side picked " + bluesup.GetName());
    bluesup.DefineTexture();
    sf::RectangleShape bluesupicon(sf::Vector2f(windowwidth/48, windowwidth/48));
    bluesupicon.move(windowwidth/55, ((windowheight/5.2) + ((windowheight/22)*4)));
    bluesupicon.setTexture(bluesup.GetTexturePointer(), false);
    EventIcon[iconiterator] = bluesupicon;
    iconiterator++;
    //Red Side
    
    //Sup
    for (int i = 0; i < champlist.size(); i++)
    {
        role = "Sup";
        if (champlist[i].ChampionList::GetMetaRating() > redsup.ChampionList::GetMetaRating() && champlist[i].GetRole().find(role) != std::string::npos)
        {
            if (std::find(banlist.begin(), banlist.end(), champlist[i]) == banlist.end())
            {
                redsup = champlist[i];
            }
        }
    }
    banlist.push_back(redsup);
    EventLog::AddEvent("Red side picked " + redsup.GetName());
    redsup.DefineTexture();
    sf::RectangleShape redsupicon(sf::Vector2f(windowwidth/48, windowwidth/48));
    redsupicon.move(windowwidth/55.5, ((windowheight/1.9025) + ((windowheight/22)*4)));
    redsupicon.setTexture(redsup.GetTexturePointer(), false);
    EventIcon[iconiterator] = redsupicon;
    iconiterator++;
    
    
    //Event Log
    sf::RectangleShape eventlog(sf::Vector2f(windowwidth/4.7, windowheight*0.57142857142));
    eventlog.move((windowwidth/64)*49.5, windowheight/6);
    eventlog.setFillColor(sf::Color::White);
    eventlog.setOutlineColor(sf::Color::Black);
    eventlog.setOutlineThickness(6);
    
    // Example Text
    sf::Font font;
    if (!font.loadFromFile(resourcePath() + "sansation.ttf")) {
    }
    std::vector<sf::Text> textarray(1000);
    
    
    // Load a music to play
    sf::Music music;
    if (!music.openFromFile(resourcePath() + "fight_music1.ogg")) {
    }
    
    // Play the music
    music.play();
    
    //Time Intervals
    for(int i = 0; i < 1000; i++)
    {
        EventTime[i] = sf::seconds(2.0f + (i*2));
    }
    
    
    // Start the game loop
    while (window.isOpen())
    {
        
        c1.~Clock();
        
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            
            // Escape pressed: exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
            
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Return) {
                EventLog::AddEvent("Test Message");
            }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::C) {
                EventLog::AddEvent("Test Message PART TW0");
            }
        }
        
        window.clear();
        window.draw(backgroundrect);
        window.draw(maprect);
        window.draw(tile2);
        window.draw(tile1);
        window.draw(bluesiderect);
        window.draw(redsiderect);
        window.draw(scoreboardrect);
        window.draw(eventlog);
        t1 = c1.getElapsedTime();
        for (int i = 0; i < EventLog::GetLength(); i++)
        {
            sf::Text text(EventLog::GetLog()[i], font, 20);
            text.setFillColor(sf::Color::Black);
            text.setPosition((1920/64)*50, (1080/6)-(1)+(i*22));
            textarray[i] = text;
        }
        for (int i = 0; i < EventLog::GetLength(); i++)
        {
            if(t1 > EventTime[i])
            {
                window.draw(EventIcon[i]);
                sf::Text todraw;
                todraw = textarray[i];
                window.draw(todraw);
            }
        }
        window.display();
        
    }
    

}

