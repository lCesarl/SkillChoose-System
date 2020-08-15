//Search:
void CInputMain::SkillChoosePacket(LPCHARACTER ch, const char* c_pData)

//search in the function this:
	ch->SetSkillGroup(packet->job);

//Paste UNDER:
	ch->ClearSkill();