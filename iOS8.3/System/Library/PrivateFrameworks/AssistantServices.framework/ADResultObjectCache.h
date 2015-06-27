/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:46:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface ADResultObjectCache : NSObject {

	NSMutableDictionary* _requestMap;
	NSMutableSet* _requestsWithPhoneCall;

}
-(id)commandsForReply:(id)arg1 toCommand:(id)arg2 missingReferences:(id*)arg3 ;
-(void)addResultObjects:(id)arg1 ;
-(void)clearResultObjectsForRequestId:(id)arg1 ;
-(char)callIsPossibleForRequestId:(id)arg1 ;
-(char)hasResultObjectsForRequestId:(id)arg1 ;
-(void)clearResultObjectsForAllRequestIdsExcept:(id)arg1 ;
-(id)_requestMap;
-(void)_addObjects:(id)arg1 forRequestId:(id)arg2 ;
-(id)commandsForSuccessReplyToCommand:(id)arg1 ;
@end
