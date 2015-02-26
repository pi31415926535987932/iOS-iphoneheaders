/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol PRSSection
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSURL * attribution_url; 
@optional
-(NSURL *)url;
-(void)setUrl:(id)arg1;
-(NSURL *)attribution_url;
-(void)setAttribution_url:(id)arg1;

@required
-(void)setType:(id)arg1;
-(NSString *)type;

@end
