/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISReview, NSURL;

@interface ISFetchReviewOperation : ISOperation {

	int _assetType;
	BOOL _backgroundReview;
	unsigned long long _itemIdentifier;
	unsigned _softwareVersionIdentifier;
	ISReview* _review;
	NSURL* _url;

}

@property (assign) int assetType;                                         //@synthesize assetType=_assetType - In the implementation block
@property (assign) unsigned softwareVersionIdentifier;                    //@synthesize softwareVersionIdentifier=_softwareVersionIdentifier - In the implementation block
@property (assign) unsigned long long itemIdentifier;                     //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (retain) NSURL * url;                                           //@synthesize url=_url - In the implementation block
@property (getter=isBackgroundReview) BOOL backgroundReview;              //@synthesize backgroundReview=_backgroundReview - In the implementation block
@property (retain) ISReview * review;                                     //@synthesize review=_review - In the implementation block
-(void)dealloc;
-(void)run;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(int)assetType;
-(void)setAssetType:(int)arg1 ;
-(BOOL)isBackgroundReview;
-(void)setBackgroundReview:(BOOL)arg1 ;
-(void)_fetchReviewInformation;
-(unsigned)softwareVersionIdentifier;
-(void)setSoftwareVersionIdentifier:(unsigned)arg1 ;
-(unsigned long long)itemIdentifier;
-(id)review;
-(void)setReview:(id)arg1 ;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
@end

