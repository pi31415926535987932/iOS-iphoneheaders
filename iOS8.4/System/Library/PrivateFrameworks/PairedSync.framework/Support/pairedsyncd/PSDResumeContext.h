/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <pairedsyncd/NSCoding.h>

@class NSURL, NSMutableArray, PSDProgress, NSUUID;

@interface PSDResumeContext : NSObject <NSCoding> {

	NSURL* _URL;
	NSMutableArray* _pendingActivityInfos;
	PSDProgress* _progress;
	NSURL* _activityInfoDirectory;
	NSUUID* _transactionID;

}

@property (nonatomic,copy) PSDProgress * progress;                     //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSURL * activityInfoDirectory;              //@synthesize activityInfoDirectory=_activityInfoDirectory - In the implementation block
@property (nonatomic,copy) NSUUID * transactionID;                     //@synthesize transactionID=_transactionID - In the implementation block
+(id)contextWithURL:(id)arg1 ;
+(id)defaultURL;
-(BOOL)hasPendingActivityInfos;
-(id)pendingActivityInfos;
-(void)dequeueActivityInfo;
-(void)enqueueActivityInfos:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)reset;
-(void)setProgress:(PSDProgress *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(PSDProgress *)progress;
-(BOOL)save:(id*)arg1 ;
-(NSUUID *)transactionID;
-(void)setTransactionID:(NSUUID *)arg1 ;
-(NSURL *)activityInfoDirectory;
-(void)setActivityInfoDirectory:(NSURL *)arg1 ;
@end
