/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSURL;

@interface UIWebClipIcon : NSObject {

	BOOL _precomposed;
	BOOL _siteWide;
	CGSize _bestSize;
	NSURL* _url;

}

@property (assign,getter=isPrecomposed,nonatomic) BOOL precomposed;              //@synthesize precomposed=_precomposed - In the implementation block
@property (assign,getter=isSiteWide,nonatomic) BOOL siteWide;                    //@synthesize siteWide=_siteWide - In the implementation block
@property (assign,nonatomic) CGSize bestSize;                                    //@synthesize bestSize=_bestSize - In the implementation block
@property (nonatomic,retain) NSURL * url;                                        //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(BOOL)isSiteWide;
-(CGSize)bestSize;
-(BOOL)isPrecomposed;
-(int)compare:(id)arg1 preferringDeviceIconSizes:(BOOL)arg2 ;
-(void)setPrecomposed:(BOOL)arg1 ;
-(void)setSiteWide:(BOOL)arg1 ;
-(void)setBestSize:(CGSize)arg1 ;
-(id)url;
-(void)setUrl:(id)arg1 ;
@end

