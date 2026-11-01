AlteringCave_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AlteringCave_OnTransition
	.byte 0

AlteringCave_OnTransition:
	setflag FLAG_LANDMARK_ALTERING_CAVE
	end

AlteringCave_EventScript_MewtwoStone::
	lockall
	msgbox AlteringCave_Text_MewtwoConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, AlteringCave_EventScript_MewtwoRefuse
	setwildbattle SPECIES_MEWTWO, 55
	dowildbattle
	setflag FLAG_MEWTWO
	removeobject VAR_LAST_TALKED
	releaseall
	end

AlteringCave_EventScript_MewtwoRefuse::
	releaseall
	end

AlteringCave_Text_MewtwoConfirm:
	.string "A HELIX is engraved on the stone.\n"
	.string "Touch it?$"
