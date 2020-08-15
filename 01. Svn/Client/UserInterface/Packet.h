//Search:
HEADER_CG_MYSHOP                            = 55,

//Paste under:
#ifdef ENABLE_SKILLCHOOSE
	HEADER_CG_SKILLCHOOSE						= 56,
#endif

//Search:
HEADER_GC_QUEST_CONFIRM                     = 46,

//Paste under:
#ifdef ENABLE_SKILLCHOOSE
	HEADER_GC_SKILLCHOOSE						= 57,
#endif

//Search:
} TChannelStatus;

//Paste under:
#ifdef ENABLE_SKILLCHOOSE
typedef struct command_SkillChoose_Send
{
	BYTE bHeader;
	int job;
} TPacketCGSkillChoose;

typedef struct SPacketGCSkillChoose
{
	BYTE bHeader;
	WORD job;
} TPacketGCSkillChoose;
#endif