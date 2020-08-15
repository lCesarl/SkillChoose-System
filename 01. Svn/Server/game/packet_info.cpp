//Search:
Set(HEADER_CG_STATE_CHECKER, sizeof(BYTE), "ServerStateCheck", false);

//Paste under:
#ifdef ENABLE_SKILLCHOOSE
	Set(HEADER_CG_SKILLCHOOSE, sizeof(TPacketCGSkillChoose), "SkillChoose", true);
#endif