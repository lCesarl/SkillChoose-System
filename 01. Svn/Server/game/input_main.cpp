//Search:
int CInputMain::Analyze(LPDESC d, BYTE bHeader, const char * c_pData)

//Paste OVER the function:
#ifdef ENABLE_SKILLCHOOSE
void CInputMain::SkillChoosePacket(LPCHARACTER ch, const char* c_pData)
{
	TPacketCGSkillChoose* packet = (TPacketCGSkillChoose*) c_pData;
	ch->SetSkillGroup(packet->job);
	sys_log(0, "CInputMain::SkillChoosePacket() ==> set playerid: %d skillgroup to %d", ch->GetPlayerID(), packet->job);
}
#endif

//Search:
case HEADER_CG_REFINE:

//Paste under:
#ifdef ENABLE_SKILLCHOOSE
		case HEADER_CG_SKILLCHOOSE:
			SkillChoosePacket(ch, c_pData);
			break;
#endif