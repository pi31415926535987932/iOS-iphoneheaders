/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCDesiredAddition.h>

@class NSString, BRCVersion;

@interface BRCDesiredLoserAddition : BRCDesiredAddition

@property (nonatomic,readonly) NSString * etag; 
@property (nonatomic,retain) BRCVersion * version; 
-(void)setVersion:(BRCVersion *)arg1 ;
-(BRCVersion *)version;
-(NSString *)etag;
-(id)initWithItemID:(id)arg1 container:(id)arg2 etag:(id)arg3 ;
@end

