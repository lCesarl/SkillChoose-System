//Search:
PyModule_AddIntConstant(poModule, "CAMERA_STOP",			CPythonApplication::CAMERA_STOP);

//Paste under:
#ifdef ENABLE_SKILLCHOOSE
	PyModule_AddIntConstant(poModule, "ENABLE_SKILLCHOOSE", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_SKILLCHOOSE", 0);
#endif