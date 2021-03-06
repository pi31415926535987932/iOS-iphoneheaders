/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData, NSString;

@interface SASetActivationToken : SABaseClientBoundCommand

@property (nonatomic,copy) NSData * activationToken; 
@property (nonatomic,copy) NSString * language; 
+(id)setActivationToken;
+(id)setActivationTokenWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)activationToken;
-(void)setActivationToken:(NSData *)arg1 ;
@end

