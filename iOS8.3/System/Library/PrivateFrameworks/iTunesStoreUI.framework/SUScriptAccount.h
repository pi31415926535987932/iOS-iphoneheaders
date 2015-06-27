/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:39:23 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SSAccount, NSString, NSNumber;

@interface SUScriptAccount : SUScriptObject {

	SSAccount* _account;

}

@property (retain) SSAccount * account; 
@property (copy) NSString * credits; 
@property (retain) NSNumber * dsID; 
@property (copy) NSString * identifier; 
@property (readonly) NSString * ITunesPassSerialNumber; 
@property (copy) NSString * kind; 
@property (getter=isPrimaryLockerAccount,readonly) id primaryLockerAccount; 
@property (retain) id lockerEnabled; 
@property (retain) id purchaseHistoryEnabled; 
@property (retain) id socialEnabled; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(SSAccount *)account;
-(void)setAccount:(SSAccount *)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)ITunesPassSerialNumber;
-(id)attributeKeys;
-(NSNumber *)dsID;
-(void)setSecureToken:(id)arg1 ;
-(void)_commitChanges;
-(void)_setServiceType:(int)arg1 enabled:(id)arg2 ;
-(char)isPrimaryAccount;
-(char)isSecureTokenValid;
-(NSString *)credits;
-(id)isPrimaryLockerAccount;
-(id)lockerEnabled;
-(id)purchaseHistoryEnabled;
-(void)setCredits:(NSString *)arg1 ;
-(void)setDsID:(NSNumber *)arg1 ;
-(void)setLockerEnabled:(id)arg1 ;
-(void)setPurchaseHistoryEnabled:(id)arg1 ;
-(void)setSocialEnabled:(id)arg1 ;
-(id)socialEnabled;
@end
