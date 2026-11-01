NavelRock_B1F_MapScripts::
	.byte 0

NavelRock_B1F_EventScript_MOLTRESStone::
	lockall
	msgbox NavelRock_B1F_Text_MOLTRESConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, NavelRock_B1F_EventScript_Refuse
	setwildbattle SPECIES_MOLTRES, 60
	dowildbattle
	setflag FLAG_MOLTRES
	removeobject VAR_LAST_TALKED
	releaseall
	end

NavelRock_B1F_EventScript_ENTEIStone::
	lockall
	msgbox NavelRock_B1F_Text_ENTEIConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, NavelRock_B1F_EventScript_Refuse
	setwildbattle SPECIES_ENTEI, 60
	dowildbattle
	setflag FLAG_ENTEI
	removeobject VAR_LAST_TALKED
	releaseall
	end

NavelRock_B1F_EventScript_Refuse::
	releaseall
	end

NavelRock_B1F_Text_MOLTRESConfirm:
	.string "An EMBER is engraved on the stone.\n"
	.string "Touch it?$"

NavelRock_B1F_Text_ENTEIConfirm:
	.string "A VOLCANO is engraved on the stone.\n"
	.string "Touch it?$"
