//
//  CQCrashReport.h
//  CQ2Client
//
//  Created by �������� on 11-2-25.
//  Copyright 2011 ������˾. All rights reserved.
//

#ifdef __cplusplus
extern "C" {
#endif
    
void InitCrashReport();
void ReleaseCrashReport();

enum {
	CRASH_SIGABRT,
	CRASH_SIGBUS,
	CRASH_SIGFPE,
	CRASH_SIGILL,
	CRASH_SIGSEGV,
	CRASH_SIGTRAP,
	CRASH_EXCEPTION,
};
void TestCrash(int nCrashType);

#ifdef __cplusplus
}
#endif