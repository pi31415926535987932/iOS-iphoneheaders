/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBDismissalItem.h>

@class NSString;

@interface BBDismissalDictionaryAndFeeds : BBDismissalItem {

	double _dismissalTimeInterval;
	NSString* _dismissalHash;

}

@property (nonatomic,readonly) double dismissalTimeInterval;               //@synthesize dismissalTimeInterval=_dismissalTimeInterval - In the implementation block
@property (nonatomic,copy,readonly) NSString * dismissalHash;              //@synthesize dismissalHash=_dismissalHash - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDismissalDictionary:(id)arg1 andFeeds:(unsigned long long)arg2 ;
-(BOOL)matchDismissalDictionary:(id)arg1 ;
-(double)dismissalTimeInterval;
-(NSString *)dismissalHash;
@end

