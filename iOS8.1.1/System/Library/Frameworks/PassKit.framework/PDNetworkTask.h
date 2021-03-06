/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <passd/passd-Structs.h>
#import <passd/NSSecureCoding.h>

@protocol PDNetworkTaskManagerProtocol;
@class NSDate;

@interface PDNetworkTask : NSObject <NSSecureCoding> {

	BOOL _started;
	BOOL _canceled;
	unsigned long long _nextBackoffLevel;
	unsigned long long _nextBackoffIteration;
	BOOL _canRequestReauthentication;
	BOOL _isValid;
	id<PDNetworkTaskManagerProtocol> _manager;
	NSDate* _nextStartDate;
	NSDate* _creationDate;

}

@property (assign,nonatomic) id<PDNetworkTaskManagerProtocol> manager;              //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) BOOL canRequestReauthentication;                       //@synthesize canRequestReauthentication=_canRequestReauthentication - In the implementation block
@property (assign,nonatomic) BOOL isValid;                                          //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * nextStartDate;                                //@synthesize nextStartDate=_nextStartDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)coalescesWithTaskSubclass:(Class)arg1 ;
-(long long)actionForInactiveTask:(id)arg1 ;
-(void)mergeWithNewerTask:(id)arg1 ;
-(long long)actionForActiveTask:(id)arg1 ;
-(void)setNextStartDate:(NSDate *)arg1 ;
-(void)resetBackoff;
-(NSDate *)nextStartDate;
-(BOOL)backoffComplete;
-(double)nextBackoffInterval;
-(void)incrementBackoff;
-(BOOL)canRequestReauthentication;
-(void)setCanRequestReauthentication:(BOOL)arg1 ;
-(void)performStart:(BOOL)arg1 ;
-(void)performCancel;
-(unsigned long long)numberOfBackoffLevels;
-(const SCD_Struct_PD2*)backoffLevels;
-(void)performReset;
-(void)deliverResult:(id)arg1 ;
-(void)deliverResult:(id)arg1 forSubtask:(id)arg2 ;
-(void)reportStateChange;
-(void)reportError:(id)arg1 forSubtask:(id)arg2 ;
-(void)reportWarnings:(id)arg1 ;
-(void)reportWarnings:(id)arg1 forSubtask:(id)arg2 ;
-(void)succeed;
-(void)fail;
-(void)failForAuthentication;
-(void)cancel;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isValid;
-(void)start:(BOOL)arg1 ;
-(id<PDNetworkTaskManagerProtocol>)manager;
-(void)setIsValid:(BOOL)arg1 ;
-(void)setManager:(id<PDNetworkTaskManagerProtocol>)arg1 ;
-(void)reportError:(id)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
@end

