#include "Game.hpp"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "EventLog.hpp"
#include "ChampionList.hpp"
#include "Player.hpp"
#include "EventManager.hpp"


void Game::Run()
{
    // Create the main window
    int windowwidth = 1920;
    int windowheight = 1080; 
	sf::VideoMode videomode = sf::VideoMode(windowwidth, windowheight);
	std::string programname = "League Manager Alpha";
	sf::Uint32 windowtype = sf::Style::Close;
    sf::RenderWindow window(videomode, programname, windowtype);
	std::vector<sf::Time> EventTime(1000);
    
	//Initialize Necessary Variables
	bool InSimulation = true;
	sf::Time t1;
	sf::Clock c1;
	srand(time(NULL));
   
    // Define Textures
    //Background
    sf::Texture background;
    sf::Texture * backgroundpointer = &background;
    if (!background.loadFromFile("background.png")) {

    }
    //Map
    sf::Texture map;
    int imagewidth = windowwidth/3;
    int imageheight = windowwidth/3;
    sf::Texture * mappointer = &map;
    if (!map.loadFromFile("map.png")) {

    }
    //Tile Set
    sf::Texture tileset;
    if (!tileset.loadFromFile("Tile.png")) {

    }
    sf::Texture * texturepointer = &tileset;
    //Scoreboard
    sf::Texture blueside;
    if (!blueside.loadFromFile("blueside.png")) {

    }
    sf::Texture * bluesidepointer = &blueside;
    sf::Texture redside;
    if (!redside.loadFromFile("blueside.png")) {

    }
    sf::Texture * redsidepointer = &redside;
    sf::Texture scoreboard;
    if (!scoreboard.loadFromFile("scoreboard.png")) {

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
	std::vector<Player> playerlist(12);
	playerlist = Player::GeneratePlayerList(false, 0, "Cloud 9", "Counter Logic Gaming");
	std::vector<ChampionList> championlist(20);
	championlist = ChampionList::GenerateGameList(playerlist);
	std::vector<sf::RectangleShape> EventIcon(1000);

	for (int i = 6; i < 20; i++)
	{
		if (i < 12 || i > 15)
		{
			championlist[i].DefineTexture();
			sf::RectangleShape champicon(sf::Vector2f(windowwidth / 48, windowwidth / 48));
			switch (i)
			{
			case 6: champicon.move(windowwidth / 55, windowheight / 5.2);
				break;
			case 7: champicon.move(windowwidth / 55.5, windowheight / 1.9025);
				break;
			case 8: champicon.move(windowwidth / 55.5, ((windowheight / 1.9025) + (windowheight / 22)));
				break;
			case 9: champicon.move(windowwidth / 55, ((windowheight / 5.2) + (windowheight / 22)));
				break;
			case 10: champicon.move(windowwidth / 55, ((windowheight / 5.2) + ((windowheight / 22) * 2)));
				break;
			case 11: champicon.move(windowwidth / 55.5, ((windowheight / 1.9025) + ((windowheight / 22) * 2)));
				break;
			case 16: champicon.move(windowwidth / 55.5, ((windowheight / 1.9025) + ((windowheight / 22) * 3)));
				break;
			case 17: champicon.move(windowwidth / 55, ((windowheight / 5.2) + ((windowheight / 22) * 3)));
				break;
			case 18: champicon.move(windowwidth / 55, ((windowheight / 5.2) + ((windowheight / 22) * 4)));
				break;
			case 19: champicon.move(windowwidth / 55.5, ((windowheight / 1.9025) + ((windowheight / 22) * 4)));
				break;
			}
			champicon.setTexture(championlist[i].GetTexturePointer(), false);
			EventIcon[i] = champicon;
		}
	}

    //Event Log
    sf::RectangleShape eventlog(sf::Vector2f(windowwidth/4.7, windowheight*0.57142857142));
    eventlog.move((windowwidth/64)*49.5, windowheight/6);
    eventlog.setFillColor(sf::Color::White);
    eventlog.setOutlineColor(sf::Color::Black);
    eventlog.setOutlineThickness(6);
    
    // Example Text
    sf::Font font;
    if (!font.loadFromFile("sansation.ttf")) {
    }
    std::vector<sf::Text> textarray(1000);
    
    
    // Load a music to play
    sf::Music music;
    if (!music.openFromFile("fight_music1.ogg")) {
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
		if (InSimulation = true)
		{
			
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
				text.setPosition((1920 / 64) * 50, (1080 / 6) - (1) + (i * 22));
				textarray[i] = text;
			}
			for (int i = 0; i < EventLog::GetLength(); i++)
			{
				if (t1 > EventTime[i])
				{
					window.draw(EventIcon[i]);
					sf::Text todraw;
					todraw = textarray[i];
					window.draw(todraw);
				}
			}		
		}
        window.display();
        
    }
    

}

