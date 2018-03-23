//
//  ChampionList.cpp
//  League of Legends Manager
//
//  Created by Jacob Godbehere on 10/2/16.
//  Copyright © 2016 Jacob Godbehere. All rights reserved.
//

#include "ChampionList.hpp"
#include "Player.hpp"
#include "EventLog.hpp"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>


std::vector<ChampionList> ChampionList::GenerateChampionList()
{
    std::vector<ChampionList> list(134);
    
    ChampionList Aatrox;
    Aatrox.Define("Aatrox", "Top", "Jng", "AD");
    list[0] = Aatrox;
    ChampionList Ahri;
    Ahri.Define("Ahri", "Mid", "", "AP");
    list[1] = Ahri;
    ChampionList Akali;
    Akali.Define("Akali", "Top", "Mid", "AP");
    list[2] = Akali;
    ChampionList Alistar;
    Alistar.Define("Alistar", "Sup", "", "AP");
    list[3] = Alistar;
    ChampionList Amumu;
    Amumu.Define("Amumu", "Jng", "", "AP");
    list[4] = Amumu;
    ChampionList Anivia;
    Anivia.Define("Anivia", "Mid", "Sup", "AP");
    list[5] = Anivia;
    ChampionList Annie;
    Annie.Define("Annie", "Mid", "Sup", "AP");
    list[6] = Annie;
    ChampionList Ashe;
    Ashe.Define("Ashe", "ADC", "Sup", "AD");
    list[7] = Ashe;
    ChampionList AurelionSol;
    AurelionSol.Define("Aurelion Sol", "Mid", "", "AP");
    list[8] = AurelionSol;
    ChampionList Azir;
    Azir.Define("Azir", "Mid", "", "AP");
    list[9] = Azir;
    ChampionList Bard;
    Bard.Define("Bard", "Sup", "", "AP");
    list[10] = Bard;
    ChampionList Blitzcrank;
    Blitzcrank.Define("Blitzcrank", "Sup", "", "AP");
    list[11] = Blitzcrank;
    ChampionList Braum;
    Braum.Define("Braum", "Sup", "", "AD");
    list[12] = Braum;
    ChampionList Caitlyn;
    Caitlyn.Define("Caitlyn", "ADC", "", "AD");
    list[13] = Caitlyn;
    ChampionList Cassiopeia;
    Cassiopeia.Define("Cassiopeia", "Mid", "", "AP");
    list[14] = Cassiopeia;
    ChampionList ChoGath;
    ChoGath.Define("Cho'Gath", "Top", "Mid", "AP");
    list[15] = ChoGath;
    ChampionList Corki;
    Corki.Define("Corki", "ADC", "Mid", "AD");
    list[16] = Corki;
    ChampionList Darius;
    Darius.Define("Darius", "Top", "", "AD");
    list[17] = Darius;
    ChampionList Diana;
    Diana.Define("Diana", "Jng", "Mid", "AP");
    list[18] = Diana;
    ChampionList DrMundo;
    DrMundo.Define("Dr. Mundo", "Top", "", "AP");
    list[19] = DrMundo;
    ChampionList Draven;
    Draven.Define("Draven", "ADC", "", "AD");
    list[20] = Draven;
    ChampionList Ekko;
    Ekko.Define("Ekko", "Mid", "", "AP");
    list[21] = Ekko;
    ChampionList Elise;
    Elise.Define("Elise", "Jng", "", "AP");
    list[22] = Elise;
    ChampionList Evelynn;
    Evelynn.Define("Evelynn", "Jng", "", "AP");
    list[23] = Evelynn;
    ChampionList Ezreal;
    Ezreal.Define("Ezreal", "ADC", "Mid", "AD");
    list[24] = Ezreal;
    ChampionList Fiddlesticks;
    Fiddlesticks.Define("Fiddlesticks", "Jng", "Sup", "AP");
    list[25] = Fiddlesticks;
    ChampionList Fiora;
    Fiora.Define("Fiora", "Top", "", "AD");
    list[26] = Fiora;
    ChampionList Fizz;
    Fizz.Define("Fizz", "Top", "Mid", "AP");
    list[27] = Fizz;
    ChampionList Galio;
    Galio.Define("Galio", "Top", "Mid", "AP");
    list[28] = Galio;
    ChampionList Gangplank;
    Gangplank.Define("Gangplank", "Top", "Mid", "AD");
    list[29] = Gangplank;
    ChampionList Garen;
    Garen.Define("Garen", "Top", "", "AD");
    list[30] = Garen;
    ChampionList Gnar;
    Gnar.Define("Gnar", "Top", "", "AD");
    list[31] = Gnar;
    ChampionList Gragas;
    Gragas.Define("Gragas", "Jng", "", "AP");
    list[32] = Gragas;
    ChampionList Graves;
    Graves.Define("Graves", "Jng", "ADC", "AD");
    list[33] = Graves;
    ChampionList Hecarim;
    Hecarim.Define("Hecarim", "Jng", "", "AD");
    list[34] = Hecarim;
    ChampionList Heimerdinger;
    Heimerdinger.Define("Heimerdinger", "Top", "Mid", "AP");
    list[35] = Heimerdinger;
    ChampionList Illaoi;
    Illaoi.Define("Illaoi", "Top", "", "AD");
    list[36] = Illaoi;
    ChampionList Irelia;
    Irelia.Define("Irelia", "Top", "", "AD");
    list[37] = Irelia;
    ChampionList Janna;
    Janna.Define("Janna", "Sup", "", "AP");
    list[38] = Janna;
    ChampionList Jarvan;
    Jarvan.Define("Jarvan IV", "Jng", "Top", "AD");
    list[39] = Jarvan;
    ChampionList Jax;
    Jax.Define("Jax", "Jng", "Top", "AD");
    list[40] = Jax;
    ChampionList Jayce;
    Jayce.Define("Jayce", "Top", "Mid", "AD");
    list[41] = Jayce;
    ChampionList Jhin;
    Jhin.Define("Jhin", "ADC", "", "AD");
    list[42] = Jhin;
    ChampionList Jinx;
    Jinx.Define("Jinx", "ADC", "", "AD");
    list[43] = Jinx;
    ChampionList Kalista;
    Kalista.Define("Kalista", "ADC", "", "AD");
    list[44] = Kalista;
    ChampionList Karma;
    Karma.Define("Karma", "Sup", "Mid", "AP");
    list[45] = Karma;
    ChampionList Karthus;
    Karthus.Define("Karthus", "Mid", "", "AD");
    list[46] = Karthus;
    ChampionList Kassadin;
    Kassadin.Define("Kassadin", "Mid", "", "AP");
    list[47] = Kassadin;
    ChampionList Katarina;
    Katarina.Define("Katarina", "Mid", "", "AP");
    list[48] = Katarina;
    ChampionList Kayle;
    Kayle.Define("Kayle", "Mid", "Top", "AP");
    list[49] = Kayle;
    ChampionList Kayn;
    Kayn.Define("Kayn", "Jng", "Top", "AD");
    list[50] = Kayn;
    ChampionList Kennen;
    Kennen.Define("Kennen", "Top", "ADC", "AP");
    list[51] = Kennen;
    ChampionList KhaZix;
    KhaZix.Define("Kha'Zix", "Jng", "", "AD");
    list[52] = KhaZix;
    ChampionList Kindred;
    Kindred.Define("Kindred", "Jng", "", "AD");
    list[53] = Kindred;
    ChampionList Kled;
    Kled.Define("Kled", "Top", "", "AD");
    list[54] = Kled;
    ChampionList KogMaw;
    KogMaw.Define("Kog'Maw", "ADC", "", "AD");
    list[55] = KogMaw;
    ChampionList LeBlanc;
    LeBlanc.Define("LeBlanc", "Mid", "", "AP");
    list[56] = LeBlanc;
    ChampionList LeeSin;
    LeeSin.Define("Lee Sin", "Jng", "", "AD");
    list[57] = LeeSin;
    ChampionList Leona;
    Leona.Define("Leona", "Sup", "", "AP");
    list[58] = Leona;
    ChampionList Lissandra;
    Lissandra.Define("Lissandra", "Mid", "Top", "AP");
    list[59] = Lissandra;
    ChampionList Lucian;
    Lucian.Define("Lucian", "ADC", "Mid", "AD");
    list[60] = Lucian;
    ChampionList Lulu;
    Lulu.Define("Lulu", "Sup", "Top", "AP");
    list[61] = Lulu;
    ChampionList Lux;
    Lux.Define("Lux", "Mid", "Sup", "AP");
    list[62] = Lux;
    ChampionList Malphite;
    Malphite.Define("Malphite", "Top", "Sup", "AP");
    list[63] = Malphite;
    ChampionList Malzahar;
    Malzahar.Define("Malzahar", "Sup", "Mid", "AP");
    list[64] = Malzahar;
    ChampionList Maokai;
    Maokai.Define("Maokai", "Jng", "Sup", "AP");
    list[65] = Maokai;
    ChampionList MasterYi;
    MasterYi.Define("Master Yi", "Jng", "", "AD");
    list[66] = MasterYi;
    ChampionList MissFortune;
    MissFortune.Define("Miss Fortune", "ADC", "", "AD");
    list[67] = MissFortune;
    ChampionList Mordekaiser;
    Mordekaiser.Define("Mordekaiser", "ADC", "Mid", "AP");
    list[68] = Mordekaiser;
    ChampionList Morgana;
    Morgana.Define("Morgana", "Mid", "Sup", "AP");
    list[69] = Morgana;
    ChampionList Nami;
    Nami.Define("Nami", "Sup", "", "AP");
    list[70] = Nami;
    ChampionList Nasus;
    Nasus.Define("Nasus", "Top", "", "AD");
    list[71] = Nasus;
    ChampionList Nautilus;
    Nautilus.Define("Nautilus", "Top", "Sup", "AP");
    list[72] = Nautilus;
    ChampionList Nidalee;
    Nidalee.Define("Nidalee", "Jng", "", "AP");
    list[73] = Nidalee;
    ChampionList Nocturne;
    Nocturne.Define("Nocturne", "Jng", "", "AD");
    list[74] = Nocturne;
    ChampionList Nunu;
    Nunu.Define("Nunu", "Jng", "Top", "AP");
    list[75] = Nunu;
    ChampionList Olaf;
    Olaf.Define("Olaf", "Jng", "Top", "AD");
    list[76] = Olaf;
    ChampionList Orianna;
    Orianna.Define("Orianna", "Mid", "Sup", "AP");
    list[77] = Orianna;
    ChampionList Pantheon;
    Pantheon.Define("Pantheon", "Top", "", "AD");
    list[78] = Pantheon;
    ChampionList Poppy;
    Poppy.Define("Poppy", "Top", "Jng", "AD");
    list[79] = Poppy;
    ChampionList Quinn;
    Quinn.Define("Quinn", "Top", "ADC", "AD");
    list[80] = Quinn;
    ChampionList Rakan;
    Rakan.Define("Rakan", "Sup", "", "AP");
    list[81] = Rakan;
    ChampionList Rammus;
    Rammus.Define("Rammus", "Jng", "Top", "AP");
    list[82] = Rammus;
    ChampionList RekSai;
    RekSai.Define("Rek'Sai", "Jng", "Top", "AD");
    list[83] = RekSai;
    ChampionList Renekton;
    Renekton.Define("Renekton", "Top", "", "AD");
    list[84] = Renekton;
    ChampionList Rengar;
    Rengar.Define("Rengar", "Jng", "Top", "AD");
    list[85] = Rengar;
    ChampionList Riven;
    Riven.Define("Riven", "Top", "", "AD");
    list[86] = Riven;
    ChampionList Rumble;
    Rumble.Define("Rumble", "Top", "Jng", "AD");
    list[87] = Rumble;
    ChampionList Ryze;
    Ryze.Define("Ryze", "Mid", "", "AP");
    list[88] = Ryze;
    ChampionList Sejuani;
    Sejuani.Define("Sejuani", "Jng", "", "AP");
    list[89] = Sejuani;
    ChampionList Shaco;
    Shaco.Define("Shaco", "Jng", "Top", "AD");
    list[90] = Shaco;
    ChampionList Shen;
    Shen.Define("Shen", "Top", "Sup", "AP");
    list[91] = Shen;
    ChampionList Shyvana;
    Shyvana.Define("Shyvana", "Jng", "", "AD");
    list[92] = Shyvana;
    ChampionList Singed;
    Singed.Define("Singed", "Top", "", "AP");
    list[93] = Singed;
    ChampionList Sion;
    Sion.Define("Sion", "Top", "Sup", "AD");
    list[94] = Sion;
    ChampionList Sivir;
    Sivir.Define("Sivir", "ADC", "", "AD");
    list[95] = Sivir;
    ChampionList Skarner;
    Skarner.Define("Skarner", "Jng", "", "AD");
    list[96] = Skarner;
    ChampionList Sona;
    Sona.Define("Sona", "Sup", "Mid", "AP");
    list[97] = Sona;
    ChampionList Soraka;
    Soraka.Define("Soraka", "Sup", "", "AD");
    list[98] = Soraka;
    ChampionList Swain;
    Swain.Define("Swain", "Top", "", "AP");
    list[99] = Swain;
    ChampionList Syndra;
    Syndra.Define("Syndra", "Mid", "", "AP");
    list[100] = Syndra;
    ChampionList TahmKench;
    TahmKench.Define("Tahm Kench", "Sup", "Top", "AD");
    list[101] = TahmKench;
    ChampionList Taliyah;
    Taliyah.Define("Taliyah", "Mid", "Sup", "AP");
    list[102] = Taliyah;
    ChampionList Talon;
    Talon.Define("Talon", "Mid", "", "AD");
    list[103] = Talon;
    ChampionList Taric;
    Taric.Define("Taric", "Sup", "", "AP");
    list[104] = Taric;
    ChampionList Teemo;
    Teemo.Define("Teemo", "Top", "", "AP");
    list[105] = Teemo;
    ChampionList Thresh;
    Thresh.Define("Thresh", "Sup", "", "AP");
    list[106] = Thresh;
    ChampionList Tristana;
    Tristana.Define("Tristana", "ADC", "", "AD");
    list[107] = Tristana;
    ChampionList Trundle;
    Trundle.Define("Trundle", "Top", "Sup", "AD");
    list[108] = Trundle;
    ChampionList Tryndamere;
    Tryndamere.Define("Tryndamere", "Top", "", "AD");
    list[109] = Tryndamere;
    ChampionList TwistedFate;
    TwistedFate.Define("Twisted Fate", "Mid", "", "AP");
    list[110] = TwistedFate;
    ChampionList Twitch;
    Twitch.Define("Twitch", "ADC", "", "AD");
    list[111] = Twitch;
    ChampionList Udyr;
    Udyr.Define("Udyr", "Jng", "Top", "AD");
    list[112] = Udyr;
    ChampionList Urgot;
    Urgot.Define("Urgot", "ADC", "Top", "AD");
    list[113] = Urgot;
    ChampionList Varus;
    Varus.Define("Varus", "ADC", "Mid", "AD");
    list[114] = Varus;
    ChampionList Vayne;
    Vayne.Define("Vayne", "ADC", "Top", "AD");
    list[115] = Vayne;
    ChampionList Veigar;
    Veigar.Define("Veigar", "Mid", "Sup", "AP");
    list[116] = Veigar;
    ChampionList VelKoz;
    VelKoz.Define("Vel'Koz", "Mid", "Sup", "AP");
    list[117] = VelKoz;
    ChampionList Vi;
    Vi.Define("Vi", "Jng", "", "AD");
    list[118] = Vi;
    ChampionList Viktor;
    Viktor.Define("Viktor", "Mid", "", "AP");
    list[119] = Viktor;
    ChampionList Vladimir;
    Vladimir.Define("Vladimir", "Top", "Mid", "AP");
    list[120] = Vladimir;
    ChampionList Volibear;
    Volibear.Define("Volibear", "Jng", "Top", "AD");
    list[121] = Volibear;
    ChampionList Warwick;
    Warwick.Define("Warwick", "Jng", "", "AD");
    list[122] = Warwick;
    ChampionList Wukong;
    Wukong.Define("Wukong", "Top", "Jng", "AD");
    list[123] = Wukong;
    ChampionList Xayah;
    Xayah.Define("Xayah", "ADC", "", "AD");
    list[124] = Xayah;
    ChampionList Xerath;
    Xerath.Define("Xerath", "Mid", "Sup", "AP");
    list[125] = Xerath;
    ChampionList XinZhao;
    XinZhao.Define("Xin Zhao", "Jng", "Top", "AD");
    list[126] = XinZhao;
    ChampionList Yasuo;
    Yasuo.Define("Yasuo", "Mid", "Top", "AD");
    list[127] = Yasuo;
    ChampionList Yorick;
    Yorick.Define("Yorick", "Top", "", "AD");
    list[128] = Yorick;
    ChampionList Zac;
    Zac.Define("Zac", "Jng", "", "AP");
    list[129] = Zac;
    ChampionList Zed;
    Zed.Define("Zed", "Mid", "Top", "AD");
    list[130] = Zed;
    ChampionList Ziggs;
    Ziggs.Define("Ziggs", "Mid", "ADC", "AP");
    list[131] = Ziggs;
    ChampionList Zilean;
    Zilean.Define("Zilean", "Sup", "Mid", "AP");
    list[132] = Zilean;
    ChampionList Zyra;
    Zyra.Define("Zyra", "Sup", "Mid", "AP");
    list[133] = Zyra;
    
    return list;
}

void ChampionList::Define(std::string n, std::string r, std::string o, std::string d)
{
    name = n;
    role = r;
    offrole = o;
    damagetype = d;
    
}
void ChampionList::SetMetaRating(int m)
{
    metarating = m;
   
}
void ChampionList::DefineTexture()
{
	texture.loadFromFile(name + "Square.png");
    texturepointer = &texture;
}

std::string ChampionList::GetName()
{
    return name;
}

std::string ChampionList::GetRole()
{
    return role;
}

std::string ChampionList::GetDamageType()
{
    return damagetype;
}
int ChampionList::GetMetaRating()
{
    return metarating;
}
sf::Texture ChampionList::GetTexture()
{
    return texture;
}
sf::Texture * ChampionList::GetTexturePointer()
{
    return texturepointer;
}

std::vector<ChampionList> ChampionList::GenerateGameList(std::vector<Player> pl)
{
	//Generate Champion List
	std::string role;
	int r;
	std::vector<ChampionList> champlist(133);
	std::vector<ChampionList> gamelist(20);
	std::vector<sf::RectangleShape> EventIcon(1000);
	champlist = ChampionList::GenerateChampionList();
	std::vector<Player> playerlist = pl;

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

	//Set the Meta

	for (int i = 0; i < champlist.size(); i++)
	{
		r = rand() % 100;
		champlist[i].ChampionList::SetMetaRating(r);
	}



	//First Ban
	//MetaScore = MetaRating*PlayerAffinity*Comp
	//EnemyScore = MetaRating*PlayerAffinity*Comp*CoachSkill
	//Missing Comp and CoachSkill 

	int metar = 0;
	banchamp = champlist[0];
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(3);
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end())
		{
			for (int z = 6; z < playerlist.size(); z++)
			{
				champnames = playerlist[z].Player::GetBestChamps();
				if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
				{
					if (metar <= (banchamp.ChampionList::GetMetaRating() + playerlist[z].Player::GetPlayerSkill()))
					{
						metar = champlist[i].GetMetaRating();
						metar += playerlist[z].Player::GetPlayerSkill();
						banchamp = champlist[i];
					}
				}
				else
				{
					if (metar <= banchamp.ChampionList::GetMetaRating())
					{
						metar = banchamp.ChampionList::GetMetaRating();
						banchamp = champlist[i];
					}
				}
			}
		}
	}
	gamelist[0] = banchamp;
	EventLog::AddEvent("Blue side banned " + banchamp.GetName());
	
	//Second Ban
	banchamp = champlist[0];
	for (int i = 0; i < champlist.size(); i++)
	{
		if (champlist[i].ChampionList::GetMetaRating() >= banchamp.ChampionList::GetMetaRating())
		{
			if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end())
			{
				banchamp = champlist[i];
			}
		}
	}
	gamelist[1] = banchamp;
	EventLog::AddEvent("Red side banned " + banchamp.GetName());
	

	//Third Ban
	banchamp = champlist[0];
	metar = 0;
	banchamp = champlist[0];
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(3);
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end())
		{
			for (int z = 6; z < playerlist.size(); z++)
			{
				champnames = playerlist[z].Player::GetBestChamps();
				if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
				{
					if (metar <= (banchamp.ChampionList::GetMetaRating() + playerlist[z].Player::GetPlayerSkill()))
					{
						metar = champlist[i].GetMetaRating();
						metar += playerlist[z].Player::GetPlayerSkill();
						banchamp = champlist[i];
					}
				}
				else
				{
					if (metar <= banchamp.ChampionList::GetMetaRating())
					{
						metar = banchamp.ChampionList::GetMetaRating();
						banchamp = champlist[i];
					}
				}
			}
		}
	}
	gamelist[2] = banchamp;
	EventLog::AddEvent("Blue side banned " + banchamp.GetName());
	

	//Fourth Ban
	metar = 0;
	banchamp = champlist[0];
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(3);
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end())
		{
			for (int z = 0; z < playerlist.size()/2; z++)
			{
				champnames = playerlist[z].Player::GetBestChamps();
				if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
				{
					if (metar <= (banchamp.ChampionList::GetMetaRating() + playerlist[z].Player::GetPlayerSkill()))
					{
						metar = champlist[i].GetMetaRating();
						metar += playerlist[z].Player::GetPlayerSkill();
						banchamp = champlist[i];
					}
				}
				else
				{
					if (metar <= banchamp.ChampionList::GetMetaRating())
					{
						metar = banchamp.ChampionList::GetMetaRating();
						banchamp = champlist[i];
					}
				}
			}
		}
	}
	gamelist[3] = banchamp;
	EventLog::AddEvent("Red side banned " + banchamp.GetName());
	

	//Fifth Ban
	metar = 0;
	banchamp = champlist[0];
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(3);
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end())
		{
			for (int z = 6; z < playerlist.size(); z++)
			{
				champnames = playerlist[z].Player::GetBestChamps();
				if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
				{
					if (metar <= (banchamp.ChampionList::GetMetaRating() + playerlist[z].Player::GetPlayerSkill()))
					{
						metar = champlist[i].GetMetaRating();
						metar += playerlist[z].Player::GetPlayerSkill();
						banchamp = champlist[i];
					}
				}
				else
				{
					if (metar <= banchamp.ChampionList::GetMetaRating())
					{
						metar = banchamp.ChampionList::GetMetaRating();
						banchamp = champlist[i];
					}
				}
			}
		}
	}
	gamelist[4] = banchamp;
	EventLog::AddEvent("Blue side banned " + banchamp.GetName());
	

	//Sixth Ban
	metar = 0;
	banchamp = champlist[0];
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(3);
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end())
		{
			for (int z = 0; z < playerlist.size()/2; z++)
			{
				champnames = playerlist[z].Player::GetBestChamps();
				if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
				{
					if (metar <= (banchamp.ChampionList::GetMetaRating() + playerlist[z].Player::GetPlayerSkill()))
					{
						metar = champlist[i].GetMetaRating();
						metar += playerlist[z].Player::GetPlayerSkill();
						banchamp = champlist[i];
					}
				}
				else
				{
					if (metar <= banchamp.ChampionList::GetMetaRating())
					{
						metar = banchamp.ChampionList::GetMetaRating();
						banchamp = champlist[i];
					}
				}
			}
		}
	}
	gamelist[5] = banchamp;
	EventLog::AddEvent("Red side banned " + banchamp.GetName());
	

	//Blue Side
	//Top
	metar = 0;
	bluetop.SetMetaRating(0);
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(4);
		role = "Top";
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end() && champlist[i].GetRole().find(role) != std::string::npos)
		{
			champnames = playerlist[0].Player::GetBestChamps();
			if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
			{
				if (metar <= (bluetop.ChampionList::GetMetaRating() + playerlist[0].Player::GetPlayerSkill()))
				{
					metar = champlist[i].GetMetaRating();
					metar += playerlist[0].Player::GetPlayerSkill();
					bluetop = champlist[i];
				}
			}
			else
			{
				if (metar <= bluetop.ChampionList::GetMetaRating())
				{
					metar = champlist[i].GetMetaRating();
					bluetop.ChampionList::SetMetaRating(metar);
					bluetop = champlist[i];
				}
			}
		}
	}
	gamelist[6] = bluetop;
	EventLog::AddEvent(playerlist[0].Player::GetAlias() + " picked " + bluetop.GetName());

	

	//Red Side

	//Top
	metar = 0;
	redtop.SetMetaRating(0);
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(4);
		role = "Top";
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end() && champlist[i].GetRole().find(role) != std::string::npos)
		{
			champnames = playerlist[6].Player::GetBestChamps();
			if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
			{
				if (metar <= (redtop.ChampionList::GetMetaRating() + playerlist[6].Player::GetPlayerSkill()))
				{
					metar = champlist[i].GetMetaRating();
					metar += playerlist[6].Player::GetPlayerSkill();
					redtop = champlist[i];
				}
			}
			else
			{
				if (metar <= redtop.ChampionList::GetMetaRating())
				{
					metar = champlist[i].GetMetaRating();
					redtop.ChampionList::SetMetaRating(metar);
					redtop = champlist[i];
				}
			}
		}
	}
	gamelist[7] = redtop;
	EventLog::AddEvent("" + playerlist[6].Player::GetAlias() + " picked " + redtop.GetName());

	

	//Jng
	metar = 0;
	redjng.SetMetaRating(0);
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(4);
		role = "Jng";
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end() && champlist[i].GetRole().find(role) != std::string::npos)
		{
			champnames = playerlist[7].Player::GetBestChamps();
			if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
			{
				if (metar <= (redjng.ChampionList::GetMetaRating() + playerlist[7].Player::GetPlayerSkill()))
				{
					metar = champlist[i].GetMetaRating();
					metar += playerlist[7].Player::GetPlayerSkill();
					redjng = champlist[i];
				}
			}
			else
			{
				if (metar <= redjng.ChampionList::GetMetaRating())
				{
					metar = champlist[i].GetMetaRating();
					redjng.ChampionList::SetMetaRating(metar);
					redjng = champlist[i];
				}
			}
		}
	}
	gamelist[8] = redjng;
	EventLog::AddEvent(playerlist[7].Player::GetAlias() + " picked " + redjng.GetName());
	
	

	//Blue Side

	//Jng
	metar = 0;
	bluejng.SetMetaRating(0);
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(4);
		role = "Jng";
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end() && champlist[i].GetRole().find(role) != std::string::npos)
		{
			champnames = playerlist[1].Player::GetBestChamps();
			if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
			{
				if (metar <= (bluejng.ChampionList::GetMetaRating() + playerlist[1].Player::GetPlayerSkill()))
				{
					metar = champlist[i].GetMetaRating();
					metar += playerlist[1].Player::GetPlayerSkill();
					bluejng = champlist[i];
				}
			}
			else
			{
				if (metar <= bluejng.ChampionList::GetMetaRating())
				{
					metar = champlist[i].GetMetaRating();
					bluejng.ChampionList::SetMetaRating(metar);
					bluejng = champlist[i];
				}
			}
		}
	}
	gamelist[9] = bluejng;
	EventLog::AddEvent(playerlist[1].Player::GetAlias() + " picked " + bluejng.GetName());
	

	//Mid
	metar = 0;
	bluemid.SetMetaRating(0);
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(4);
		role = "Mid";
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end() && champlist[i].GetRole().find(role) != std::string::npos)
		{
			champnames = playerlist[2].Player::GetBestChamps();
			if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
			{
				if (metar <= (bluemid.ChampionList::GetMetaRating() + playerlist[2].Player::GetPlayerSkill()))
				{
					metar = champlist[i].GetMetaRating();
					metar += playerlist[2].Player::GetPlayerSkill();
					bluemid = champlist[i];
				}
			}
			else
			{
				if (metar <= bluemid.ChampionList::GetMetaRating())
				{
					metar = champlist[i].GetMetaRating();
					bluemid.ChampionList::SetMetaRating(metar);
					bluemid = champlist[i];
				}
			}
		}
	}
	gamelist[10] = bluemid;
	EventLog::AddEvent(playerlist[2].Player::GetAlias() + " picked " + bluemid.GetName());

	//Red Side

	//Mid
	metar = 0;
	redmid.SetMetaRating(0);
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(4);
		role = "Mid";
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end() && champlist[i].GetRole().find(role) != std::string::npos)
		{
			champnames = playerlist[8].Player::GetBestChamps();
			if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
			{
				if (metar <= (redmid.ChampionList::GetMetaRating() + playerlist[8].Player::GetPlayerSkill()))
				{
					metar = champlist[i].GetMetaRating();
					metar += playerlist[8].Player::GetPlayerSkill();
					redmid = champlist[i];
				}
			}
			else
			{
				if (metar <= redmid.ChampionList::GetMetaRating())
				{
					metar = champlist[i].GetMetaRating();
					redmid.ChampionList::SetMetaRating(metar);
					redmid = champlist[i];
				}
			}
		}
	}
	gamelist[11] = redmid;
	EventLog::AddEvent(playerlist[8].Player::GetAlias() + " picked " + redmid.GetName());


	//Seventh Ban
	metar = 0;
	banchamp = champlist[0];
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(3);
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end() && (champlist[i].GetRole().find("ADC") != std::string::npos || champlist[i].GetRole().find("Sup") != std::string::npos))
		{
			for (int z = 3; z < playerlist.size()/2; z++)
			{
				champnames = playerlist[z].Player::GetBestChamps();
				if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
				{
					if (metar <= (banchamp.ChampionList::GetMetaRating() + playerlist[z].Player::GetPlayerSkill()))
					{
						metar = champlist[i].GetMetaRating();
						metar += playerlist[z].Player::GetPlayerSkill();
						banchamp = champlist[i];
					}
				}
				else
				{
					if (metar <= banchamp.ChampionList::GetMetaRating())
					{
						metar = banchamp.ChampionList::GetMetaRating();
						banchamp = champlist[i];
					}
				}
			}
		}
	}
	gamelist[12] = banchamp;
	EventLog::AddEvent("Red side banned " + banchamp.GetName());
	

	//Eighth Ban
	metar = 0;
	banchamp = champlist[0];
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(3);
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end() && (champlist[i].GetRole().find("ADC") != std::string::npos || champlist[i].GetRole().find("Sup") != std::string::npos))
		{
			for (int z = 9; z < playerlist.size(); z++)
			{
				champnames = playerlist[z].Player::GetBestChamps();
				if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
				{
					if (metar <= (banchamp.ChampionList::GetMetaRating() + playerlist[z].Player::GetPlayerSkill()))
					{
						metar = champlist[i].GetMetaRating();
						metar += playerlist[z].Player::GetPlayerSkill();
						banchamp = champlist[i];
					}
				}
				else
				{
					if (metar <= banchamp.ChampionList::GetMetaRating())
					{
						metar = banchamp.ChampionList::GetMetaRating();
						banchamp = champlist[i];
					}
				}
			}
		}
	}
	gamelist[13] = banchamp;
	EventLog::AddEvent("Blue side banned " + banchamp.GetName());
	

	//Nineth Ban
	metar = 0;
	banchamp = champlist[0];
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(3);
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end() && (champlist[i].GetRole().find("ADC") != std::string::npos || champlist[i].GetRole().find("Sup") != std::string::npos))
		{
			for (int z = 9; z < playerlist.size(); z++)
			{
				champnames = playerlist[z].Player::GetBestChamps();
				if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
				{
					if (metar <= (banchamp.ChampionList::GetMetaRating() + playerlist[z].Player::GetPlayerSkill()))
					{
						metar = champlist[i].GetMetaRating();
						metar += playerlist[z].Player::GetPlayerSkill();
						banchamp = champlist[i];
					}
				}
				else
				{
					if (metar <= banchamp.ChampionList::GetMetaRating())
					{
						metar = banchamp.ChampionList::GetMetaRating();
						banchamp = champlist[i];
					}
				}
			}
		}
	}
	gamelist[14] = banchamp;
	EventLog::AddEvent("Red side banned " + banchamp.GetName());
	

	//Tenth Ban
	metar = 0;
	banchamp = champlist[0];
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(3);
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end() && (champlist[i].GetRole().find("ADC") != std::string::npos || champlist[i].GetRole().find("Sup") != std::string::npos))
		{
			for (int z = 3; z < playerlist.size()/2; z++)
			{
				champnames = playerlist[z].Player::GetBestChamps();
				if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
				{
					if (metar <= (banchamp.ChampionList::GetMetaRating() + playerlist[z].Player::GetPlayerSkill()))
					{
						metar = champlist[i].GetMetaRating();
						metar += playerlist[z].Player::GetPlayerSkill();
						banchamp = champlist[i];
					}
				}
				else
				{
					if (metar <= banchamp.ChampionList::GetMetaRating())
					{
						metar = banchamp.ChampionList::GetMetaRating();
						banchamp = champlist[i];
					}
				}
			}
		}
	}
	gamelist[15] = banchamp;
	EventLog::AddEvent("Blue side banned " + banchamp.GetName());
	


	//Red Side

	//ADC
	metar = 0;
	redadc.SetMetaRating(0);
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(4);
		role = "ADC";
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end() && champlist[i].GetRole().find(role) != std::string::npos)
		{
			champnames = playerlist[9].Player::GetBestChamps();
			if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
			{
				if (metar <= (redadc.ChampionList::GetMetaRating() + playerlist[9].Player::GetPlayerSkill()))
				{
					metar = champlist[i].GetMetaRating();
					metar += playerlist[9].Player::GetPlayerSkill();
					redadc = champlist[i];
				}
			}
			else
			{
				if (metar <= redadc.ChampionList::GetMetaRating())
				{
					metar = champlist[i].GetMetaRating();
					redadc.ChampionList::SetMetaRating(metar);
					redadc = champlist[i];
				}
			}
		}
	}
	gamelist[16] = redadc;
	EventLog::AddEvent(playerlist[9].Player::GetAlias() + " picked " + redadc.GetName());

	//Blue Side

	//ADC
	metar = 0;
	blueadc.SetMetaRating(0);
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(4);
		role = "ADC";
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end() && champlist[i].GetRole().find(role) != std::string::npos)
		{
			champnames = playerlist[3].Player::GetBestChamps();
			if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
			{
				if (metar <= (blueadc.ChampionList::GetMetaRating() + playerlist[3].Player::GetPlayerSkill()))
				{
					metar = champlist[i].GetMetaRating();
					metar += playerlist[3].Player::GetPlayerSkill();
					blueadc = champlist[i];
				}
			}
			else
			{
				if (metar <= blueadc.ChampionList::GetMetaRating())
				{
					metar = champlist[i].GetMetaRating();
					blueadc.ChampionList::SetMetaRating(metar);
					blueadc = champlist[i];
				}
			}
		}
	}
	gamelist[17] = blueadc;
	EventLog::AddEvent(playerlist[3].Player::GetAlias() + " picked " + blueadc.GetName());
	
	
	//Sup
	metar = 0;
	bluesup.SetMetaRating(0);
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(4);
		role = "Sup";
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end() && champlist[i].GetRole().find(role) != std::string::npos)
		{
			champnames = playerlist[4].Player::GetBestChamps();
			if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
			{
				if (metar <= (bluesup.ChampionList::GetMetaRating() + playerlist[4].Player::GetPlayerSkill()))
				{
					metar = champlist[i].GetMetaRating();
					metar += playerlist[4].Player::GetPlayerSkill();
					bluesup = champlist[i];
				}
			}
			else
			{
				if (metar <= bluesup.ChampionList::GetMetaRating())
				{
					metar = champlist[i].GetMetaRating();
					bluesup.ChampionList::SetMetaRating(metar);
					bluesup = champlist[i];
				}
			}
		}
	}
	gamelist[18] = bluesup;
	EventLog::AddEvent(playerlist[4].Player::GetAlias() + " picked " + bluesup.GetName());
	
	
	//Red Side

	//Sup
	metar = 0;
	redsup.SetMetaRating(0);
	for (int i = 0; i < champlist.size(); i++)
	{
		std::vector<std::string> champnames(4);
		role = "Sup";
		if (std::find(gamelist.begin(), gamelist.end(), champlist[i]) == gamelist.end() && champlist[i].GetRole().find(role) != std::string::npos)
		{
			champnames = playerlist[10].Player::GetBestChamps();
			if (std::find(champnames.begin(), champnames.end(), champlist[i].GetName()) != champnames.end())
			{
				if (metar <= (redsup.ChampionList::GetMetaRating() + playerlist[10].Player::GetPlayerSkill()))
				{
					metar = champlist[i].GetMetaRating();
					metar += playerlist[10].Player::GetPlayerSkill();
					redsup = champlist[i];
				}
			}
			else
			{
				if (metar <= redsup.ChampionList::GetMetaRating())
				{
					metar = champlist[i].GetMetaRating();
					redsup.ChampionList::SetMetaRating(metar);
					redsup = champlist[i];
				}
			}
		}
	}
	gamelist[19] = redsup;
	EventLog::AddEvent(playerlist[10].Player::GetAlias() + " picked " + redsup.GetName());
	

	return gamelist;
}



