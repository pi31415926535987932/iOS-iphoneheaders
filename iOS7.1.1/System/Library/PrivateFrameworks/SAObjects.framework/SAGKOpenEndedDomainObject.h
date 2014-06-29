/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAGKDomainObject.h>

@class SAGKDirectAnswer, NSArray;

@interface SAGKOpenEndedDomainObject : SAGKDomainObject

@property (nonatomic,retain) SAGKDirectAnswer * directAnswer; 
@property (nonatomic,copy) NSArray * image; 
@property (nonatomic,copy) NSArray * linkedAnswerGroups; 
@property (nonatomic,copy) NSArray * structuredAnswers; 
+(id)openEndedDomainObject;
+(id)openEndedDomainObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setImage:(id)arg1 ;
-(id)image;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)directAnswer;
-(void)setDirectAnswer:(id)arg1 ;
-(id)linkedAnswerGroups;
-(void)setLinkedAnswerGroups:(id)arg1 ;
-(id)structuredAnswers;
-(void)setStructuredAnswers:(id)arg1 ;
@end
