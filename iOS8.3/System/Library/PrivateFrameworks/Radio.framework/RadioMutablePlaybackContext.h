/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:21:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioPlaybackContext.h>

@class NSArray;

@interface RadioMutablePlaybackContext : RadioPlaybackContext

@property (assign,nonatomic) int numberOfSkipsUsed; 
@property (nonatomic,copy) NSArray * trackPlaybackDescriptorQueue; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTrackPlaybackDescriptorQueue:(NSArray *)arg1 ;
-(void)setNumberOfSkipsUsed:(int)arg1 ;
@end
