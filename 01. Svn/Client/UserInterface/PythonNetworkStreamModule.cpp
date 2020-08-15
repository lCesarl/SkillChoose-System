//Search:
PyObject* netRegisterErrorLog(PyObject* poSelf, PyObject* poArgs)

//Paste under:
#ifdef ENABLE_SKILLCHOOSE
PyObject* netSendSkillChooseInfo(PyObject* poSelf, PyObject* poArgs)
{
	int iData;
	if (!PyArg_ParseTuple(poArgs, "i", &iData))
		return Py_BadArgument();

	if (iData < 0)
		return Py_BuildNone();

	CPythonNetworkStream& rkNetStream = CPythonNetworkStream::Instance();
	rkNetStream.SendSkillChooseInfo(iData);

	return Py_BuildNone();
}
#endif

//Search:
{ "RegisterErrorLog",						netRegisterErrorLog,						METH_VARARGS },

//Paste under:
#ifdef ENABLE_SKILLCHOOSE
		{ "SendSkillChooseInfo",					netSendSkillChooseInfo,						METH_VARARGS },
#endif