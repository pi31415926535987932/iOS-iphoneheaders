/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/NSCopying.h>

@class NSString, NSURL;

@interface SUItemLink : NSObject <NSCopying> {

	int _linkTarget;
	int _linkType;
	NSString* _title;
	NSURL* _url;

}

@property (assign,nonatomic) int linkTarget;              //@synthesize linkTarget=_linkTarget - In the implementation block
@property (assign,nonatomic) int linkType;                //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * URL;                 //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(int)linkType;
-(int)linkTarget;
-(void)setLinkTarget:(int)arg1 ;
-(void)setLinkType:(int)arg1 ;
@end

