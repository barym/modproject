Route310_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route310_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, Route310_OnTransition
	.byte 0

Route310_OnResume:
	setstepcallback STEP_CB_ASH
	end

Route310_OnTransition:
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	call Route310_EventScript_CheckSetAshWeather
	end

Route310_EventScript_CheckSetAshWeather::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	goto_if_lt VAR_TEMP_0, 19, Route310_EventScript_DontSetAshWeather
	goto_if_gt VAR_TEMP_0, 84, Route310_EventScript_DontSetAshWeather
	setweather WEATHER_VOLCANIC_ASH
	return

Route310_EventScript_DontSetAshWeather::
	return

Route310_EventScript_Woman1::
	msgbox Route310_Text_AshCanBeCollected, MSGBOX_NPC
	end

Route310_EventScript_Gentleman::
	msgbox Route310_Text_PoochyenaStillFit, MSGBOX_NPC
	end

Route310_EventScript_Beauty::
	msgbox Route310_Text_TakingRestInThisShelter, MSGBOX_NPC
	end

Route310_EventScript_Scientist::
	msgbox Route310_Text_VolcanoCreatedRegion, MSGBOX_NPC
	end

Route310_EventScript_Hiker::
	msgbox Route310_Text_ToLazyToHike, MSGBOX_NPC
	end

Route310_EventScript_Girl::
	msgbox Route310_Text_CityEntryBlocked, MSGBOX_NPC
	end

Route310_EventScript_Woman2::
	msgbox Route310_Text_WhatDoTheyWant, MSGBOX_NPC
	end

Route310_EventScript_Boy::
	msgbox Route310_Text_WhenCanWeGoHome, MSGBOX_NPC
	end

Route310_EventScript_Grunt1::
	msgbox Route310_Text_NoEntry, MSGBOX_NPC
	end

Route310_EventScript_Grunt2::
	msgbox Route310_Text_YouShallNotPass, MSGBOX_NPC
	end

Route310_EventScript_Craig::
	trainerbattle_single TRAINER_JAYLEN, Route310_Text_CraigIntro, Route310_Text_CraigDefeat
	msgbox Route310_Text_CraigPostBattle, MSGBOX_NPC
	end

Route310_EventScript_Alex::
	trainerbattle_single TRAINER_JAYLEN, Route310_Text_AlexIntro, Route310_Text_AlexDefeat
	msgbox Route310_Text_AlexPostBattle, MSGBOX_NPC
	end

Route310_EventScript_Jaiden::
	trainerbattle_single TRAINER_JAYLEN, Route310_Text_JaidenIntro, Route310_Text_JaidenDefeat
	msgbox Route310_Text_JaidenPostBattle, MSGBOX_NPC
	end

Route310_EventScript_Antonio::
	trainerbattle_single TRAINER_JAYLEN, Route310_Text_AntonioIntro, Route310_Text_AntonioDefeat
	msgbox Route310_Text_AntonioPostBattle, MSGBOX_NPC
	end

Route310_EventScript_Marissa::
	trainerbattle_single TRAINER_JAYLEN, Route310_Text_MarissaIntro, Route310_Text_MarissaDefeat
	msgbox Route310_Text_MarissaPostBattle, MSGBOX_NPC
	end

Route310_Text_AshCanBeCollected:
	.string "I heard you can collect the volcanic ash\n"
	.string "on this route and turn it into items!\p"
	.string "But I don't know how...$"

Route310_Text_PoochyenaStillFit:
	.string "Hoho! I may have gotten old,\n"
	.string "but my POOCHYENA is as lively as ever.$"

Route310_Text_TakingRestInThisShelter:
	.string "I am resting in this shelter\n"
	.string "before heading to the springs.$"

Route310_Text_VolcanoCreatedRegion:
	.string "This volcano is said to have created our\n"
	.string "region.\p"
	.string "Interesting is it not?\p"
	.string "Once there was only the sea and\n"
	.string "then suddendly this land was created.$"

Route310_Text_ToLazyToHike:
	.string "I would hike up this volcano, but I take\n"
	.string "the cable car because I'm lazy.$"

Route310_Text_CityEntryBlocked:
	.string "I always come here to play, but today\n"
	.string "some guys are blocking the way\l"
	.string "so I can't go home!$"

Route310_Text_CityEntryUnblocked:
	.string "Oh, they're gone?\n"
	.string "Well, I think I stay here for bit longer.$"

Route310_Text_WhatDoTheyWant:
	.string "Why do they block the path to the city?\n"
	.string "What do they wan't from us?$"

Route310_Text_CanFinallyGoHome:
	.string "Looks like they're finally gone.\n"
	.string "Time to go home.$"

Route310_Text_WhenCanWeGoHome:
	.string "When can we finally go home?$"

Route310_Text_NoEntry:
	.string "Hey! No entry!$"

Route310_Text_YouShallNotPass:
	.string "You shall not pass!\p"
	.string "Hihihi, that was fun...$"
