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
