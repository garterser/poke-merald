NavelRock_Fork_MapScripts::
	.byte 0

NavelRock_Fork_EventScript_ZAPDOSStone::
	lockall
	msgbox NavelRock_Fork_Text_ZAPDOSConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, NavelRock_Fork_EventScript_Refuse
	setwildbattle SPECIES_ZAPDOS, 60
	dowildbattle
	setflag FLAG_ZAPDOS
	removeobject VAR_LAST_TALKED
	releaseall
	end

NavelRock_Fork_EventScript_RAIKOUStone::
	lockall
	msgbox NavelRock_Fork_Text_RAIKOUConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, NavelRock_Fork_EventScript_Refuse
	setwildbattle SPECIES_RAIKOU, 60
	dowildbattle
	setflag FLAG_RAIKOU
	removeobject VAR_LAST_TALKED
	releaseall
	end

NavelRock_Fork_EventScript_Refuse::
	releaseall
	end

NavelRock_Fork_Text_ZAPDOSConfirm:
	.string "A BOLT is engraved on the stone.\n"
	.string "Touch it?$"

NavelRock_Fork_Text_RAIKOUConfirm:
	.string "A CLOUD is engraved on the stone.\n"
	.string "Touch it?$"
