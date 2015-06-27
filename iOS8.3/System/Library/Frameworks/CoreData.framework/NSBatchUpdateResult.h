/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:41:05 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreResult.h>

@interface NSBatchUpdateResult : NSPersistentStoreResult {

	id _aggregatedResult;
	unsigned _resultType;

}

@property (readonly) id result;                        //@synthesize aggregatedResult=_aggregatedResult - In the implementation block
@property (readonly) unsigned resultType;              //@synthesize resultType=_resultType - In the implementation block
-(id)initWithResult:(id)arg1 type:(unsigned)arg2 ;
-(void)dealloc;
-(id)result;
-(unsigned)resultType;
@end
