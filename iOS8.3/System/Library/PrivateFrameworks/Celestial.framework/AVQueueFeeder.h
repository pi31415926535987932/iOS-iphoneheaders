/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:55:54 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVQueueFeeder : NSObject
-(id)playbackInfoAtIndex:(unsigned)arg1 ;
-(id)pathAtIndex:(unsigned)arg1 ;
-(void)contentsDidChangeByRemovingRange:(NSRange)arg1 ;
-(void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)arg1 ;
-(id)init;
-(unsigned)numberOfPaths;
-(void)contentsDidChangeByInsertingRange:(NSRange)arg1 ;
-(double)bookmarkTimeForIndex:(unsigned)arg1 ;
-(unsigned)itemCount;
@end
