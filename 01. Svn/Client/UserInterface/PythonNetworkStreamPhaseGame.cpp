//Search:
case HEADER_GC_DRAGON_SOUL_REFINE:

//Paste under:
#ifdef ENABLE_SKILLCHOOSE
			case HEADER_GC_SKILLCHOOSE:
				ret = RecvSkillChoose();
				break;
#endif

//Paste at end of the file:
#ifdef ENABLE_SKILLCHOOSE
bool CPythonNetworkStream::RecvSkillChoose()
{
	TPacketGCSkillChoose packet;
	if (!Recv(sizeof(packet), &packet))
		return false;

	PyCallClassMemberFunc(m_apoPhaseWnd[PHASE_WINDOW_GAME], "BINARY_SkillChoose", Py_BuildValue("(i)", packet.job));
	return true;
}

bool CPythonNetworkStream::SendSkillChooseInfo(int data)
{
	TPacketCGSkillChoose packet;
	packet.bHeader = HEADER_CG_SKILLCHOOSE;
	packet.job = data;

	if (!Send(sizeof(packet), &packet))
		return false;

	return SendSequence();
}
#endif