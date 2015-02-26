/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:46 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAGKPodView.h>

@class NSString, SAUIImageResource;

@interface SAGKSummaryPod : SAGKPodView

@property (nonatomic,copy) NSString * caption; 
@property (nonatomic,retain) SAUIImageResource * imageResource; 
@property (nonatomic,copy) NSString * text; 
+(id)summaryPod;
+(id)summaryPodWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setCaption:(NSString *)arg1 ;
-(NSString *)caption;
-(id)encodedClassName;
-(SAUIImageResource *)imageResource;
-(void)setImageResource:(SAUIImageResource *)arg1 ;
@end
