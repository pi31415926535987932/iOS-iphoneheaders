/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFOfflineCacheReplayContextTransformation.h>

@class NSString;

@interface _MFSelectMailboxReplayContextTransformation : NSObject <MFOfflineCacheReplayContextTransformation> {

	NSString* _mailboxID;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)applyToReplayContext:(id)arg1 ;
-(id)initWithMailboxID:(id)arg1 ;
@end
