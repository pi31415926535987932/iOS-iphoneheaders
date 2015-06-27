/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNRecordingEvent.h>

@class TSPLazyReference, KNSlideNode;

@interface KNRecordingNavigationEvent : KNRecordingEvent {

	TSPLazyReference* mTargetSlideNodeReference;
	unsigned mTargetEventIndex;
	int mAnimationPhase;

}

@property (nonatomic,readonly) KNSlideNode * targetSlideNode; 
@property (nonatomic,readonly) unsigned targetEventIndex; 
@property (nonatomic,readonly) int animationPhase; 
-(void)saveToArchive:(RecordingEventArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithStartTime:(double)arg1 ;
-(char)isIgnoredWhenSeeking;
-(char)canPrecedeDiscontinuity;
-(id)initWithContext:(id)arg1 archive:(const RecordingEventArchive*)arg2 unarchiver:(id)arg3 ;
-(id)initWithStartTime:(double)arg1 targetSlideNode:(id)arg2 targetEventIndex:(unsigned)arg3 animationPhase:(int)arg4 ;
-(KNSlideNode *)targetSlideNode;
-(unsigned)targetEventIndex;
-(int)animationPhase;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
