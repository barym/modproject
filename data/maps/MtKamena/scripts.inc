MtKamena_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, MtKamena_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, MtKamena_OnTransition
	.byte 0

MtKamena_OnResume:
	setstepcallback STEP_CB_ASH
	end

MtKamena_OnTransition:
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	call MtKamena_EventScript_CheckSetAshWeather
	end

MtKamena_EventScript_CheckSetAshWeather::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	goto_if_lt VAR_TEMP_0, 19, MtKamena_EventScript_DontSetAshWeather
	goto_if_gt VAR_TEMP_0, 84, MtKamena_EventScript_DontSetAshWeather
	setweather WEATHER_VOLCANIC_ASH
	return

MtKamena_EventScript_DontSetAshWeather::
	setweather WEATHER_VOLCANIC_ASH
	return
