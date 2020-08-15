//search:
int pc_give_award_socket(lua_State* L)

//paste under the function:
#ifdef ENABLE_SKILLCHOOSE
	int pc_open_skillchoose(lua_State* L)
	{
		LPCHARACTER ch = CQuestManager::instance().GetCurrentCharacterPtr();
		if(!ch || !ch->GetDesc()) return 0;

		TPacketGCSkillChoose packet;
		packet.bHeader = HEADER_GC_SKILLCHOOSE;
		packet.job = ch->GetJob();
		
		ch->GetDesc()->Packet(&packet, sizeof(TPacketGCSkillChoose));
		lua_pushnumber (L, 1);
		return 1;
	}
#endif

//search:
{ "give_award_socket",	pc_give_award_socket	},

//paste under:
#ifdef ENABLE_SKILLCHOOSE
			{ "open_skillchoose",			pc_open_skillchoose },
#endif

