//Search:
DWORD GetEmpireID();

//Paste under:
#ifdef ENABLE_SKILLCHOOSE
		bool	RecvSkillChoose();
		bool	SendSkillChooseInfo(int data);
#endif