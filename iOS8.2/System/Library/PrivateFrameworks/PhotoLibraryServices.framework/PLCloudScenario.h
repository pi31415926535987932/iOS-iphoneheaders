/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSProgress;

@interface PLCloudScenario : NSObject {

	NSArray* _operations;
	NSProgress* _progress;
	unsigned _priority;

}

@property (nonatomic,retain) NSArray * operations;               //@synthesize operations=_operations - In the implementation block
@property (nonatomic,retain) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) unsigned priority;                  //@synthesize priority=_priority - In the implementation block
-(void)dealloc;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setPriority:(unsigned)arg1 ;
-(NSProgress *)progress;
-(unsigned)priority;
-(void)setOperations:(NSArray *)arg1 ;
-(NSArray *)operations;
-(void)requestCancel;
@end
