/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:49:38 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSMutableArray;

@interface _ClauseGenerationContext : NSObject {

	NSDictionary* _predicateCollectionsMap;
	BOOL _hadError;
	BOOL _wantsGroups;
	NSMutableArray* _kindPredicates;
	NSMutableArray* _predicates;

}

@property (assign,nonatomic) BOOL hadError;                                //@synthesize hadError=_hadError - In the implementation block
@property (assign,nonatomic) BOOL wantsGroups;                             //@synthesize wantsGroups=_wantsGroups - In the implementation block
@property (nonatomic,retain) NSMutableArray * kindPredicates;              //@synthesize kindPredicates=_kindPredicates - In the implementation block
@property (nonatomic,retain) NSMutableArray * predicates;                  //@synthesize predicates=_predicates - In the implementation block
-(id)clauseWithBindings:(id)arg1 ;
-(void)setHadError:(BOOL)arg1 ;
-(BOOL)wantsGroups;
-(void)setWantsGroups:(BOOL)arg1 ;
-(id)kindPredicates;
-(void)setKindPredicates:(id)arg1 ;
-(void)addPredicate:(id)arg1 forFieldName:(id)arg2 ;
-(id)kindClauseWithBindings:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setPredicates:(id)arg1 ;
-(id)predicates;
-(BOOL)hadError;
@end

