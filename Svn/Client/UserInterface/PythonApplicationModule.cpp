// Add Under File:
// "}" add above
// Add Above Fancy Brackets. !!!

#ifdef ENABLE_10_STATU
	PyModule_AddIntConstant(poModule, "ENABLE_10_STATU", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_10_STATU", 0);
#endif
