/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/Plugins/Social.assistantBundle/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLAssistantPostDelegate.h>

@class NSString, NSBundle;

@interface SLAssistantWeiboPostDelegate : NSObject <SLAssistantPostDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * accountTypeIdentifier; 
@property (retain) NSString * lastAccountIdentifier; 
@property (readonly) NSBundle * locationPermissionBundle; 
-(void)setLastAccountIdentifier:(NSString *)arg1 ;
-(NSString *)lastAccountIdentifier;
-(void)playPostSound;
-(id)requestForPostWithStatus:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 ;
-(void)verifyCredentialsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)verifyGeotagSettingsForAccount:(id)arg1 defaultSetting:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)responseDataIndicatesDuplicatePost:(id)arg1 urlResponse:(id)arg2 ;
-(NSBundle *)locationPermissionBundle;
-(id)extractErrorDetailsFromResponseData:(id)arg1 urlResponse:(id)arg2 ;
-(NSString *)accountTypeIdentifier;
@end
