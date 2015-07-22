/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileCoordinator.h>

@protocol OS_dispatch_source;
@class BRCAccountSession, NSURL, NSObject;

@interface BRCFileCoordinator : NSFileCoordinator {

	BRCAccountSession* _session;
	unsigned long long _startStamp;
	NSURL* _url1;
	NSURL* _url2;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _doneHandler;
	BOOL _cancelled;
	BOOL _isUpdateForReconnecting;

}

@property (assign,nonatomic) BOOL isUpdateForReconnecting;              //@synthesize isUpdateForReconnecting=_isUpdateForReconnecting - In the implementation block
+(void)itemDidAppearAtPath:(id)arg1 logicalFilename:(id)arg2 ;
+(void)itemDidDisappearAtPath:(id)arg1 logicalFilename:(id)arg2 ;
+(void)itemAtPath:(id)arg1 didBounceToName:(id)arg2 ;
+(void)itemAtPath:(id)arg1 logicalFilename:(id)arg2 didMoveToPath:(id)arg3 logicalFilename:(id)arg4 hasContentUpdate:(BOOL)arg5 ;
-(void)cancel;
-(void)cancelAfter:(double)arg1 ;
-(void)_obtainedCoordination:(id)arg1 url1:(id)arg2 url2:(id)arg3 handler:(/*^block*/id)arg4 fcHandler:(/*^block*/id)arg5 error:(id)arg6 ;
-(id)initWithSession:(id)arg1 cancelAfter:(double)arg2 doneHandler:(/*^block*/id)arg3 ;
-(void)scheduleReadOfItemAtURL:(id)arg1 target:(id)arg2 ;
-(void)scheduleDeleteOfItemAtURL:(id)arg1 target:(id)arg2 ;
-(void)scheduleUpdateOfItemAtURL:(id)arg1 target:(id)arg2 ;
-(void)scheduleRenameOfItemAtURL:(id)arg1 toItemAtURL:(id)arg2 contentUpdate:(BOOL)arg3 target:(id)arg4 ;
-(BOOL)isUpdateForReconnecting;
-(void)setIsUpdateForReconnecting:(BOOL)arg1 ;
@end
