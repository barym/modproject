AtmosCavern_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AtmosCavern_B1F_OnTransition
	.byte 0

AtmosCavern_B1F_OnTransition::
	call AtmosCavern_B1F_CheckSetFogWeather
	end

AtmosCavern_B1F_CheckSetFogWeather::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	goto_if_ge VAR_TEMP_0, 47, AtmosCavern_B1F_DontSetFogWeather
	setweather WEATHER_FOG_HORIZONTAL
	return

AtmosCavern_B1F_DontSetFogWeather::
	return
