// Find:
ACMD (do_clear_affect);

// Add Under:
#ifdef ENABLE_10_STATU
ACMD(do_stat_val);
#endif

// Find:
	{ "do_clear_affect", do_clear_affect, 	0, POS_DEAD,		GM_LOW_WIZARD},

// Add Under:
#ifdef ENABLE_10_STATU
	{ "stat_val",			do_stat_val,				0,			POS_DEAD,	GM_PLAYER },
#endif
