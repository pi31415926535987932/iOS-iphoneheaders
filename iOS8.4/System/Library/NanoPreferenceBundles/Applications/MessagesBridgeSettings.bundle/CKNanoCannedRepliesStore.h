/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/MessagesBridgeSettings.bundle/MessagesBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NPSManager, NPSDomainAccessor;

@interface CKNanoCannedRepliesStore : NSObject {

	NPSManager* _npsManager;
	NPSDomainAccessor* _domainAccessor;

}

@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;              //@synthesize domainAccessor=_domainAccessor - In the implementation block
+(id)sharedInstance;
-(id)_defaultRepliesWithFormat:(id)arg1 forLanguage:(id)arg2 ;
-(id)formalDefaultRepliesForLanguage:(id)arg1 ;
-(id)cannedRepliesForLanguage:(id)arg1 ;
-(id)defaultRepliesForLanguage:(id)arg1 ;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(NPSDomainAccessor *)domainAccessor;
-(id)customReplies;
-(void)setCustomReply:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_handleMessagesStoreChanged;
@end

