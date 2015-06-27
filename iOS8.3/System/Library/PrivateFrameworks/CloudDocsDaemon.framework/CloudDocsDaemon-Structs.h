/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:03:47 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct Mem* MemRef;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned knownToServer : 1;
	unsigned wasCached : 1;
} SCD_Struct_BR2;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct {
	unsigned byFileID : 1;
	unsigned byDocumentID : 1;
	unsigned byPath : 1;
	unsigned parentID : 1;
	unsigned serverItem : 1;
	unsigned serverByPath : 1;
	unsigned packageItem : 1;
} SCD_Struct_BR4;

typedef struct {
	unsigned byFileID : 1;
	unsigned byDocumentID : 1;
	unsigned byEnclosure : 1;
	unsigned byPath : 1;
	unsigned parent : 1;
} SCD_Struct_BR5;

typedef struct {
	unsigned parentItemID : 1;
	unsigned relpath : 1;
	unsigned pathMatch : 1;
	unsigned faultedMatch : 1;
	unsigned byIDMatch : 1;
	unsigned reservedMatch : 1;
} SCD_Struct_BR6;

typedef union {
	SCD_Struct_BR6 field1;
	unsigned value;
} SCD_Union_BR7;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	unsigned long long field5;
} SCD_Struct_BR8;

typedef struct {
	unsigned mtime : 1;
	unsigned isExecutable : 1;
	unsigned isWritable : 1;
} SCD_Struct_BR9;

typedef struct timespec {
	int tv_sec;
	long tv_nsec;
} timespec;

typedef struct opaque_pthread_rwlock_t {
	long __sig;
	char __opaque[124];
} opaque_pthread_rwlock_t;

typedef struct {
	int field1;
	long field2;
	long field3;
	char* field4;
	int field5;
	long field6;
	long field7;
	int field8;
	_opaque_pthread_mutex_t field9;
	_ field10;
	t field11;
	e field12;
	long field13;
	long field14;
	double field15;
	int field16;
	const  field17;
} SCD_Struct_BR12;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_BR13;

typedef struct CC_SHA1state_st {
	unsigned h0;
	unsigned h1;
	unsigned h2;
	unsigned h3;
	unsigned h4;
	unsigned Nl;
	unsigned Nh;
	unsigned data[16];
	int num;
} CC_SHA1state_st;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef union {
	unsigned value;
	SCD_Struct_BR9 field2;
} SCD_Union_BR17;

typedef struct br_pacer_t* br_pacer_tRef;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	char __opaque[40];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned field1[8];
} SCD_Struct_BR20;

typedef struct __FSEventStream* FSEventStreamRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct cache_s* cache_sRef;

typedef union {
	unsigned char inlined[8];
	unsigned char ptr;
} SCD_Union_PQ24;
