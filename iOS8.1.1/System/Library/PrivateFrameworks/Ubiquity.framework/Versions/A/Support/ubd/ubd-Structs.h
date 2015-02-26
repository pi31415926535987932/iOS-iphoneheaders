/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Ubiquity.framework/Versions/A/Support/ubd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, NSMutableArray;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	NSMutableDictionary* _browsers;
	NSMutableSet* _resolvingNetServices;
	NSMutableDictionary* _monitoredNetServices;
} SCD_Struct_UB1;

typedef struct {
	NSMutableArray* _netServices;
} SCD_Struct_UB2;

typedef struct {
	NSMutableDictionary* _byFQDN;
	NSMutableDictionary* _byEndPoint;
	NSMutableDictionary* _byUUID;
} SCD_Struct_UB3;

typedef struct {
	SCD_Struct_UB3 _foundServices;
	NSMutableDictionary* _preferredFQDN;
} SCD_Struct_UB4;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __SecCertificate* SecCertificateRef;

typedef struct __SecIdentity* SecIdentityRef;
