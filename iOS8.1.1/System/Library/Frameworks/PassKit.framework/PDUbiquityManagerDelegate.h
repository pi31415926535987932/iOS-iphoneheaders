/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol PDUbiquityManagerDelegate <NSObject>
@required
-(id)existingCardUniqueIDs;
-(id)existingCardWithUniqueID:(id)arg1;
-(void)ubiquitousCardDidChange:(id)arg1;
-(void)ubiquitousCardWithUniqueIDRemoved:(id)arg1;
-(id)existingCatalog;
-(void)ubiquitousCatalogDidChange:(id)arg1;

@end
