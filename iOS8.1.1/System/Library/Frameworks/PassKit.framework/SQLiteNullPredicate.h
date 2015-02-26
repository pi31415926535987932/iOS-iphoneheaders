/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <passd/passd-Structs.h>
#import <passd/SQLitePropertyPredicate.h>
#import <passd/NSCopying.h>

@interface SQLiteNullPredicate : SQLitePropertyPredicate <NSCopying> {

	BOOL _matchesNull;

}

@property (nonatomic,readonly) BOOL matchesNull;              //@synthesize matchesNull=_matchesNull - In the implementation block
+(id)isNotNullPredicateWithProperty:(id)arg1 ;
+(id)isNullPredicateWithProperty:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(BOOL)matchesNull;
@end
