//Search:
CMainPacketHeaderMap()

//Paste at end of the Set() commands
#ifdef ENABLE_SKILLCHOOSE
			Set(HEADER_GC_SKILLCHOOSE, CNetworkPacketHeaderMap::TPacketType(sizeof(TPacketGCSkillChoose), STATIC_SIZE_PACKET));
#endif
