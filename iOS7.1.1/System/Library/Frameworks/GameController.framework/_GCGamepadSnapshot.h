/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/_GCGamepad.h>
#import <GameController/_GCSnapshot.h>

@class NSData;

@interface _GCGamepadSnapshot : _GCGamepad <_GCSnapshot> {

	NSData* _snapshotData;

}

@property (copy) NSData * snapshotData;              //@synthesize snapshotData=_snapshotData - In the implementation block
-(void)setSnapshotData:(id)arg1 ;
-(id)initWithController:(id)arg1 snapshotData:(id)arg2 ;
-(id)snapshotData;
-(id)initWithSnapshotData:(id)arg1 ;
-(void).cxx_destruct;
@end

